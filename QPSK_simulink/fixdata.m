%将数据长度修改为frame_size整数倍,并限幅
function res = fixdata(data, frame_size)
    len = length(data);
    d=10;
    for i = 1:len
        if data(i) > 250
            data(i) = 250;
        end
        if data(i) < 5
            data(i) = 5;
        end
%         data(i) = d;
%         if mod(i,18) == 0
%             d = d+10;
%             if(d == 200)
%                 d = 10;
%             end
%         end
    end
    %补齐数据为frame_size的倍数
    temp = rem(len,frame_size);
    Num_zero = frame_size-temp;
    res = zeros(1,len+Num_zero);
    res(1:len) = data;
end