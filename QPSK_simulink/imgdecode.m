function img = imgdecode(data,img_test)
    len = length(data);
    img = zeros(87,100);
    i = 1;
    while(i<=len)
        if(data(i) == 255)
            if i+20 >= len  %判断报头是否越界
                break;
            end
            frame_size = data(i+3);
            if i+20+frame_size >= len %判断frame_data有无越界
                break;
            end
            for j = 1:frame_size
                if data(i+20+j) == 255
                    frame_size = j;
                    break;
                end
            end
            frame_data = data(i+20:i+20+frame_size-1);
            len_row = data(i+1);
            len_column = data(i+2);
            row = data(i+4);
            column = data(i+5);
            frame_data_idx = 1;
            for j = 1:ceil(frame_size/len_column)+1
                rest_col = len_column - column+1;
                res_data = frame_size - frame_data_idx +1;
                if rest_col > res_data
                    img(row,column:column+res_data-1) = frame_data(frame_data_idx:frame_size);
                    break;
                else
                    img(row,column:len_column) = frame_data(frame_data_idx:frame_data_idx+rest_col-1);
                    row = row+1;
                    column = 1;
                    frame_data_idx = frame_data_idx + rest_col;
                end
            end
            i = i+20+frame_size-1;
%             subplot(1,2,1)
%             imshow(uint8(img))
%             subplot(1,2,2)
%             imshow(uint8(img_test))
        end
        i = i+1;
        
    end
    img = uint8(img);
    imshow(img)
end