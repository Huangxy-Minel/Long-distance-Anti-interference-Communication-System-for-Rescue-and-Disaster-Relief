img = imread('test2.jpg');
img_grey = double(rgb2gray(img));
[len_row,len_column] = size(img_grey);
data = [];
%转为1维矩阵
for row = 1:len_row
    data = [data img_grey(row,:)];
end
d = 10;
for i = 1:length(data)
    if data(i) > 250
        data(i) = 250;
    end
    if data(i) < 5
        data(i) = 5;
    end
    data(i) = d;
    if mod(i,17) == 0
        d = d+10;
        if(d == 200)
            d = 10;
        end
    end
end
frame_size = 17;
%补齐数据为19的倍数
temp = rem(length(data),frame_size);
Num_zero = frame_size-temp;
if(temp ~= 0)
    z_ero = zeros(1,Num_zero);
    data = [data z_ero];
end
%成帧
%3double-head;17double-data
data_send = [];
data_send = [data_send, zeros(1,170)];
for i = 1:frame_size:length(data)-frame_size
    row = ceil(i/len_column);
    column = i - len_column * (row-1);
    frame = [255, row, column, data(i:i+frame_size-1)];
    data_send = [data_send, frame];
end
