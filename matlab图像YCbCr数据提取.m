%% 图像大小变换
i = imread('D:/WINDOWS/Desktop/img1.png');      %图像数据读取
ycbcr = rgb2ycbcr(i);                           %RGB转换为YCbCr
reduce4 = imresize(ycbcr,0.25);                 %图片大小缩减
pixel_4 = size(reduce4);                        %图片大小读取
%figure,imshow(reduce4);                         %显示图片
reduce4_y_n  = (reduce4(:,:,1))';               %数据矩阵行列变换，图片YCbCr Y分量读取
reduce4_cb_n = (reduce4(:,:,2))';               %数据矩阵行列变换，图片YCbCr Cb分量读取
reduce4_cr_n = (reduce4(:,:,3))';               %数据矩阵行列变换，图片YCbCr Cr分量读取
% 矩阵数据导出至txt文件
dlmwrite('D:\WINDOWS\Desktop\y.txt',reduce4_y_n(:),'delimiter','\n','precision',16);
dlmwrite('D:\WINDOWS\Desktop\cb.txt',reduce4_cb_n(:),'delimiter','\n','precision',16);
dlmwrite('D:\WINDOWS\Desktop\cr.txt',reduce4_cr_n(:),'delimiter','\n','precision',16);

% 外部数据导入
load_y = load('D:\WINDOWS\Desktop\y.txt');
load_cb = load('D:\WINDOWS\Desktop\cb.txt');
load_cr = load('D:\WINDOWS\Desktop\cr.txt');
reshape_y = (reshape(load_y,pixel_4(2),pixel_4(1)))';        %数据转换矩阵(reshape(数据,行,列))
reshape_cb = (reshape(load_cb,pixel_4(2),pixel_4(1)))';
reshape_cr = (reshape(load_cr,pixel_4(2),pixel_4(1)))';
reshape_load = zeros(270,480,3);            %图像三维数组定义
reshape_load(:,:,1) = reshape_y;            %图像数组赋值 Y分量
reshape_load(:,:,2) = reshape_cb;           %图像数组赋值 Cb分量
reshape_load(:,:,3) = reshape_cr;           %图像数组赋值 Cr分量
uint8_load = uint8(round(reshape_load));    %数据类型转换为uint8
%figure,imshow(uint8_load);                  %图像显示
figure
subplot(2,2,1);imshow(i);title('原图像');
subplot(2,2,2);imshow(ycbcr);title('ycbcr'); 
subplot(2,2,3);imshow(uint8_load);title('uint8_load');
subplot(2,2,4);imshow(ycbcr2rgb(uint8_load));title('ycbcr2rgb');