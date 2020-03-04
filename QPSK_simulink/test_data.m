% clear;
% clc;
img = imread('test2.jpg');
img_grey = double(rgb2gray(img));
[len_row,len_column] = size(img_grey);
%图片转行矩阵
data = [];
for row = 1:len_row
    data = [data img_grey(row,:)];
end
d = 10;
for i = 1:length(data)
    if data(i) == 255
        data(i) = 254;
    end
%     data(i) = d;
%     if mod(i,20*9) == 0
%         d = d+10;
%         if(d == 200)
%             d = 10;
%         end
%     end
end
%补齐数据为19*9的倍数
temp = rem(length(data),20*9);
Num_zero = 20*9-temp;
if(temp ~= 0)
    z_ero = zeros(1,Num_zero);
    data = [data z_ero];
end
%插入帧头，每帧20*9个数据
%插入空帧，用于升余弦滤波器
data_send = [];
time = 1;
img_size = 20*9;
% data_send = [data_send, zeros(400)];
for i = 1:20*9:length(data)-20*9
    row = ceil(i/len_column);
    column = i - len_column * (row-1);
    head = produce_img_head(len_row, len_column, img_size, row, column, 1, Num_zero);
    time = time+1;
    data_send = [data_send, head, data(i:i+20*9-1)];
end
