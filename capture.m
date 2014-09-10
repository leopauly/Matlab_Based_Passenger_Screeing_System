%program for capturing image from camera

%function name capturecode;

function capturecode()

imaqhwinfo;
vid=videoinput('winvideo');
set(vid, 'ReturnedColorSpace', 'RGB'); 

preview(vid);
%{I'm going to guess that the problem is the color space that your camera returns data in is not RGB. This is common for a lot of webcams. The commands commonly used to display images such as image or imshow expect RGB data. If you pass in YCbCr (or YUV) data, the result is an image that looks vaguely correct but has a pink and green hue to it.There are a number of ways to work around this, but in your case, I suspect that the easiest will be to change the ReturnedColorSpace property of the videoinput object:}

imag=getsnapshot(vid);
b = imresize(imag,512/147);
%figure , imshow(b);

figure , imshow(b);
delete(vid);
end
