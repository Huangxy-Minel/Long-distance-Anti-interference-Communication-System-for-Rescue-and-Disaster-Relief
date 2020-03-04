function imgdecoderv3(data)
    img_maxnum = 15;
    len = length(data);
    img = cell(15,1);
    i = 1;
    len_row = 128;
    len_column = 128;
    for i =1:15
        img{i,1} = zeros(len_row,len_column);
    end
    err = 0; %误码个数
    frame_size = 16;
    head_size = 4;
    while(i<=len)
        flag = 0;
        if(data(i) == 255) %检测到报头
            if i+20 >= len  %判断报文是否越界
                break;
            end
            %提取报头
            img_num = data(i+3);
            row = data(i+1);
            column = data(i+2);
            %检测报头是否误码
            if row == 0 || column == 0 || img_num ==0 || row >128 ||column >128 || img_num>img_maxnum
                i = i+head_size+frame_size;
                err = err+1;
                continue
            end
            %提取数据
            flag = 0;
            frame_data_idx = 1;
            frame_data = data(i+head_size:i+head_size+frame_size-1);
            %检测帧是否误码
            for j = 1:length(frame_data)
                if frame_data(j) < 5 || frame_data(j) > 250
                    err = err + 1;
                    flag = 1;
                    break;
                end
            end
            %如果误码则continue
            if flag == 1
                i = i+head_size+frame_size;
                continue;
            end
            %提取报文数据
            for j = 1:2
                if img{img_num,1}(row,column)~=0 %如果已有数据，则跳过
                    break;
                end
                rest_col = len_column - column+1;
                res_data = frame_size - frame_data_idx +1;
                if rest_col > res_data
                    img{img_num,1}(row,column:column+res_data-1) = frame_data(frame_data_idx:frame_size);
                    break;
                else
                    img{img_num,1}(row,column:len_column) = frame_data(frame_data_idx:frame_data_idx+rest_col-1);
                    row = row+1;
                    column = 1;
                    frame_data_idx = frame_data_idx + rest_col;
                end
            end
            i = i+head_size+frame_size-1;
%             subplot(1,2,1)
%             imshow(uint8(img))
%             subplot(1,2,2)
%             imshow(uint8(img_test))
        end
        i = i+1;
    end
    for i = 1:15
        imshow(uint8(img{i,1}));
        pause(0.2)
    end
end