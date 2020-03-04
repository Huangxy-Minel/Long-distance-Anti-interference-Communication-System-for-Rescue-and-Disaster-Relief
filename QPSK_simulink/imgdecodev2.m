function img = imgdecodev2(data,img_test)
    len = length(data);
    img = zeros(87,100);
    i = 1;
    len_column = 100;
    len_row = 87;
    err = 0; %�������
    while(i<=len)
        if(data(i) == 255) %��⵽��ͷ
            if i+20 >= len  %�жϱ����Ƿ�Խ��
                break;
            end
            flag = 0;
            row = int16(data(i+1));
            column = int16(data(i+2));
            frame_size = 17;
            %��ⱨͷ�Ƿ�����
            if row == 0 || column == 0
                i = i+3+frame_size;
                continue
            end
            
            frame_data_idx = 1;
            frame_data = data(i+3:i+3+frame_size-1);
            %���֡�Ƿ�����
            for j = 1:length(frame_data)
                if frame_data(j) < 5 || frame_data(j) > 250
                    err = err + 1;
                    flag = 1;
                    break;
                end
            end
            if flag == 1
                i = i+3+frame_size;
                continue;
            end
            for j = 1:2
                if img(row,column)~=0
                    break;
                end
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
            i = i+3+frame_size-1;
%             subplot(1,2,1)
%             imshow(uint8(img))
%             subplot(1,2,2)
%             imshow(uint8(img_test))
        end
        i = i+1;
    end
    subplot(1,2,1)
    imshow(uint8(img))
    subplot(1,2,2)
    imshow(uint8(img_test))
end