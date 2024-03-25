import os
from PIL import Image, ImageOps
import pathlib
import pdf2image
import matplotlib.pyplot as plt
from matplotlib.gridspec import GridSpec
from io import BytesIO

task_dict = {}
blacklists =[]# ['sort', 'strassen', 'fft', 'sparselu']

def crop_margin(image: Image, padding=(0, 0, 0, 0)):
    # 我们不一定需要把图片真的保存成一个文件再打开来裁剪
    # img_fileobj泛指一个类文件对象，比如BytesIO就可以
    # 本方法传入img_fileobj，返回裁剪后图片的字节流
    # with BytesIO('') as output_bf:
    # 转换成RGB格式，然后运用getbbox方法
    # image = Image.open(img_fileobj).convert('RGB')
    # getbbox实际上检测的是黑边，所以要先将image对象反色
    ivt_image = ImageOps.invert(image)
    # 如果担心检测出来的bbox过小，可以加点padding
    bbox = ivt_image.getbbox()
    left = bbox[0] - padding[0]
    top = bbox[1] - padding[1]
    right = bbox[2] + padding[2]
    bottom = bbox[3] + padding[3]
    cropped_image: Image.Image = image.crop([left, top, right, bottom])
    
    return cropped_image
    # return ret

for dir in os.listdir():
    print('gen', dir)
    if os.path.isdir(dir) and not dir.startswith('.'):
        dot_path = os.path.join(dir, 'task', f'{dir}.dot')
        os.system(f'dot -Tpdf {dot_path} -o {dot_path[:-4]}.pdf')
        pdf_path = os.path.join(dir, 'task', f'{dir}.pdf')
        if not os.path.exists(pdf_path) or dir in blacklists:
            continue
        img = crop_margin(pdf2image.convert_from_path(pdf_path, dpi=300, first_page=1, last_page=1)[0])
        img.save(fr'D:\projects\ompTG硕士论文\results\tasks\{dir}.png', 'png')
        task_dict[dir] = img

# cols = 4
# fig, axs = plt.subplots(2, cols, figsize=(20, 15))
# for i, (k, v) in enumerate(task_dict.items()):
#     row_idx = i // cols
#     col_idx = i % cols
#     axs[row_idx][col_idx].imshow(v)
#     # axs[row_idx][col_idx].set_title(k, y=1, fontsize=30)
#     # plt.imshow(v)
#     # plt.title(k)
#     axs[row_idx][col_idx].axis('off')

# # plt.tight_layout()

# Save the figure
# fig.savefig('task_images.png', dpi=300, bbox_inches='tight')