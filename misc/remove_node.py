import networkx as nx
import sys
import os

dot_path = sys.argv[1]
nodes = sys.argv[2].split(',')
write_path = sys.argv[3]

print(nodes)

graph: nx.MultiDiGraph = nx.nx_pydot.read_dot(dot_path)
print(graph.nodes)

nodes_removed = []
for node in graph.nodes:
    if node not in nodes:
        nodes_removed.append(node)
        
for nr in nodes_removed:
    graph.remove_node(nr)
nx.nx_pydot.write_dot(graph, write_path)
os.system(f'dot -Tpng {write_path} -o {write_path[:-4]}.png -Gdpi=300')