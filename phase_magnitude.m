close all;
clear;
fs = 11025; 
f0 = 100;
w = 0.3/f0;
Fs = input('Enter the sample frequency - rectangular pulse ');
Fs1 = input('Enter the sample frequency - sinc pulse ');
n = 0 : 1/Fs : 1;
n1 = 0 : 1/Fs1 : 5;
xn = pulstran (0:1/fs:4/f0, 0:1/f0:4/f0, "rectpuls", w);
xn1 = sinc(n1);
N = length(xn);
N1 = length(xn1);
xk = fft(xn,N);
xk1 = fft(xn1,N1);

subplot(2,3,1);
stem(n,xn,'r');
title('input signal');
xlabel('index');
ylabel('amplitude');

subplot(2,3,2);
stem(n,abs(xn),'g');
title('magnitude');
xlabel('index');
ylabel('amplitude');

subplot(2,3,3);
stem(n,angle(xn),'m');
title('phase');
xlabel('index');
ylabel('amplitude');

subplot(2,3,1);
stem(n1,xn1,'k');
title('input signal');
xlabel('index');
ylabel('amplitude');

subplot(2,3,2);
stem(n1,abs(xn1),'g');
title('magnitude');
xlabel('index');
ylabel('amplitude');

subplot(2,3,3);
stem(n1,angle(xn1),'m');
title('phase');
xlabel('index');
ylabel('amplitude');