import networkx as nx
import matplotlib.pyplot as plt
import sys
import os
from tqdm import tqdm
from queue import Queue
import pandas as pd
# names
benchmark_names = ['alignment', 'concom', 'fft', 'fib', 'floorplan', 'health', 'knapsack', 'nqueens', 'sort', 'sparselu', 'strassen', 'uts']
# benchmark_names = ['alignment']
output_path = sys.argv[1]

def final_dot_path(benchmark_name: str, num: int = 0):
    return os.path.join('.', benchmark_name, 'EFG', f'{num}_EFG.dot')

def extract_wcet_from_label(graph: nx.Graph, node: str) -> int:
    wcet_str = graph.nodes[node].get('label').split('\\n')[-1].split('=')[-1]
    if wcet_str[-1] == '"':
        wcet_str = wcet_str[:-1]
    return int(wcet_str)

def delete_same_verties(graph: nx.DiGraph, node: str) -> nx.DiGraph:
    # is_ok = False
    graph = nx.DiGraph(graph)
    nodes_q = Queue()
    nodes_q.put(node)
    checked = set()
    while nodes_q.not_empty:
        try:
            node = nodes_q.get_nowait()
            # if graph.nodes[nei].get('color') is not None:
            #     continue
            if node in checked:
                continue
            neibors = list(graph.neighbors(node))
            # print('check', node, 'neibors', neibors, 'shape', graph.nodes[node].get('shape'))
            checked.add(node)
            for nei in neibors:
                if node == nei or nei in checked:
                    continue
                if graph.nodes[nei].get('shape') == graph.nodes[node].get('shape') and graph.nodes[nei].get('color') is None and graph.nodes[node].get('color') is None:
                    for pred in graph.predecessors(node):
                        graph.add_edge(pred, nei)
                    for succ in graph.successors(node):
                        if nei != succ:
                            graph.add_edge(nei, succ)
                    
                    # print(graph.nodes[node].get('label').split('\\n')[-1].split('=')[-1][:-1])
                    wcet = extract_wcet_from_label(graph, node)
                    label_neis = graph.nodes[nei].get('label').split('\\n')
                    label_neis[0] = f'"{nei}(M)"'
                    # label_arr = label_neis[0].split('-')
                    # label_neis[0] = f'{label_arr[0]}-{nei}'
                    new_wcet =  extract_wcet_from_label(graph, nei) + wcet
                    
                    label_neis[-1] = f'WCET={new_wcet}'
                    print(label_neis)
                    graph.nodes[nei]['label'] = '\\n'.join(label_neis)
                    
                    graph.remove_node(node)
                    print(f'merge {node} to {nei}')
                nodes_q.put(nei)
        except Exception as e:
            print(e)
            break
    return graph

import seaborn as sb

def gen_stat(bn: str, out_path: str = ''):
    v_count = []
    e_count = []
    for i in tqdm(range(101)):
        try:
            graph: nx.MultiDiGraph = nx.nx_pydot.read_dot(final_dot_path(bn, i))
            v_count.append(len(graph.nodes))
            e_count.append(len(graph.edges))
        except Exception as e:
            print(e)
    df = pd.DataFrame({'v_count': v_count, 'e_count': e_count})
    df.to_csv(f'{out_path}\\{bn}_stat.csv')
    
    # axs = sb.scatterplot(data=df, x='v_count', y='e_count')
    # axs.set_title(bn)
    
    
    
    # open(f'{out_path}\\{bn}_v_count.txt', 'w').write('\n'.join(map(str, v_count)))
    # open(f'{out_path}\\{bn}_e_count.txt', 'w').write('\n'.join(map(str, e_count)))
    # return v_count, e_count

from multiprocessing import Pool

def gen_stat_df():
    pool = []
    for bn in tqdm(benchmark_names):
        p = Process(target=gen_stat, args=(bn, output_path))
        pool.append(p)
        p.start()
    for p in pool:
        p.join()


def gen_bench(bn: str):
    # t = tqdm([0] * 3)
    # t.moveto(1)
    graph: nx.MultiDiGraph = nx.nx_pydot.read_dot(final_dot_path(bn))
    # thr_nodes = []
    st_node = ''
    for node in tqdm(graph.nodes):
        if node.startswith('_thrFunc0_'):
            st_node = '_thrFunc0__entry'
            break
    if len(st_node) == 0:
        st_node = '_thrFunc1__entry'
    # t.moveto(2)
    # subgraph: nx.DiGraph = graph.subgraph(thr_nodes)
    subgraph = delete_same_verties(graph, st_node)
    print('saving', subgraph.number_of_nodes())
    # nb = subgraph.neighbors(st_node)
    # buffer = [st_node]
    # q = Queue()
    # q.put(st_node)
    # while len(buffer) <= 10 and q.not_empty:
    #     node = q.get()
    #     nb = subgraph.neighbors(node)
    #     for nei_node in nb:
    #         buffer.append(nei_node)
    #         q.put(nei_node)

    # subgraph_pcfg = graph.subgraph(buffer)
    nx.nx_pydot.write_dot(subgraph, f'{bn}.dot')
    os.system(f'dot -Tpng {bn}.dot -o {os.path.join(output_path, bn + "_thr_pcfg.png")} -Gdpi=300 -Gbgcolor=transparent')
    # os.remove(f'{bn}.dot')
    
from multiprocessing import Process

if __name__ == '__main__':
    # pool = []
    # print(benchmark_names)
    # for bn in benchmark_names:
    #     # gen_bench(bn)
    #     print('invoke',bn)
    #     p = Process(target=gen_bench, args=(bn,))
    #     p.start()
    #     # p.join()
    #     pool.append(p)
    #     # break

    # for p in pool:
    #     p.join()
    gen_stat_df()
        