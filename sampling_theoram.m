close all;
clear;

tfinal = 0.02;
t = 0 : 0.00002 : tfinal;
fa = input('Enter the sampling frequency ');

xt = cos(2 * pi * fa * t);
subplot(4,1,1);
plot(t,xt,'r');
title('CTS');
xlabel('t');
ylabel('amplitude');

% for undersampled signal

fs1 = 1.3 * fa;
n1 = 0 : 1/fs1 : tfinal;
xn1 = cos(2 * pi * fa * n1);
subplot(4,1,2);
stem(n1,xn1,'r');
title('DTS undersampled');
xlabel('n');
ylabel('amplitude');

% for critically signal

fs2 = 2 * fa;
n2 = 0 : 1/fs2 : tfinal;
xn2 = cos(2 * pi * fa * n2);
subplot(4,1,3);
stem(n2,xn2,'r');
title('DTS critically sampled');
xlabel('n');
ylabel('amplitude');

% for oversampled

fs3 = 10 * fa;
n3 = 0 : 1/fs3 : tfinal;
xn3 = cos(2 * pi * fa * n3);
subplot(4,1,4);
stem(n3,xn3,'r');
title('DTS oversampled');
xlabel('n');
ylabel('amplitude');

% reconstruction for undersampled signal

figure
x1t = interp2(xn1,2);
t1 = interp2(n1,2);
subplot(3,1,1);
plot(t1,x1t);
title('CTS undersampled');
xlabel('t');
ylabel('amplitude');

% reconstruction for critically sampled signal

x2t = interp2(xn2,2);
t2 = interp2(n2,2);
subplot(3,1,2);
plot(t2,x2t);
title('CTS critcally sampled');
xlabel('t');
ylabel('amplitude');

% reconstruction for oversampled signal

x3t = interp2(xn3,2);
t3 = interp2(n3,2);
subplot(3,1,3);
plot(t3,x3t);
title('CTS oversampled');
xlabel('t');
ylabel('amplitude');