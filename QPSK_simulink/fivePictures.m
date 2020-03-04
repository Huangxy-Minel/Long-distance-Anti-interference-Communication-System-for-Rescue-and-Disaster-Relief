%imaqhwinfo
%imaqhwinfo('winvideo')
%info=imaqhwinfo('winvideo')
%info.DeviceInfo.SupportedFormats

%obj = videoinput('winvideo',1,'MJPG_640x480')
%h = preview(obj)
function fiveP = fivePictures(len_row, len_column)
    imaqhwinfo
    imaqhwinfo('winvideo')
    info=imaqhwinfo('winvideo');
    info.DeviceInfo.SupportedFormats
    obj = videoinput('winvideo',1,'MJPG_960x540');
    h = preview(obj);
    fiveP = zeros(len_row,len_column,5);
    while ishandle(h)
        for j=1:5
            frame_new = getsnapshot(obj);  % 获取帧
            img_grey = double(rgb2gray(frame_new));
            img_grey=uint8(img_grey);
            img_grey=imresize(img_grey,[len_row,len_column]);
            fiveP(:,:,j) = img_grey;
    %         filename = sprintf('test%i.jpg',j);%用变量构造图片名
    %         imwrite(img_grey,filename);%写入图片
            pause(1);
        end
        break;
        drawnow
    end
% for i=1:5
%     input_filename = sprintf('test%i.jpg',i);%用变量构造图片名
%     img_grey = imread(input_filename);%读入图片
%     fiveP(:,:,i)= img_grey;
% end
end