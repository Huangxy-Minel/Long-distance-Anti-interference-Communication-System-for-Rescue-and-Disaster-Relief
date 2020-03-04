%初始化定义
% img = imread('test2.jpg');
% img = double(rgb2gray(img));
len_row = 128;  
len_column = 128;
img = fivePictures(len_row, len_column);
frame_size = 16;
img_maxnum = 3;  %5张图片，大小为128*128
data = [];       %data为128*128数据
%成帧
data_send = [];
%插入空帧，用于升余弦滤波器
err = 0;
for img_num = 1:img_maxnum
    data = img(:,:,img_num);
    data = data_transform(data, len_row, len_column);%255*255数据转为1维矩阵
    data = fixdata(data, frame_size);%补齐数组
    for i = 1:frame_size:length(data)-frame_size
        row = ceil(i/len_column);
        column = i - len_column * (row-1);
        frame = [255, row, column, img_num, data(i:i+frame_size-1)];
        data_send = [data_send frame];
    end
end
L = length(data_send);
         
         

