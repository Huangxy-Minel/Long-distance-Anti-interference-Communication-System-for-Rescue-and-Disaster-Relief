function res = produce_img_head(img_maxnum, img_num, head_num)
    head = zeros(1,20);
    head(1) = 255;
    head(2) = img_maxnum;
    head(3) = img_num;
    head(4) = head_num;   
    res = head;
end