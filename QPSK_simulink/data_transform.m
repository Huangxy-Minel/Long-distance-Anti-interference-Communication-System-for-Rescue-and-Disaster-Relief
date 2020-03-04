%128*128Í¼Ïñ×ªÎª1Î¬¾ØÕó
function res = data_transform(data, len_row, len_column)
    res = zeros(1,len_row*len_column);
    res_idx = 1;
    for row = 1:len_row
        res(res_idx:res_idx+len_column-1) = data(row,:);
        res_idx = res_idx + len_column;
%         res = [res data(row,:)];
    end
end