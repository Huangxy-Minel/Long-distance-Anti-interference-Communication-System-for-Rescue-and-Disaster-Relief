function p = img_div(image)
    img = imresize(image,[512,512]);
    a = 1;
    w = 128;
    p = uint8(zeros(w,w,16));
    for i = 1:w:512
        for j = 1:w:512
            p(:,:,a) = img(i:i+w-1,j:j+w-1);
            a = a+1;
        end
    end
end
