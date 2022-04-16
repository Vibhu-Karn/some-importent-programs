close all;
clear;
 
Fp = input('Enter the passband edge frequency ');
Fs = input('Enter the stopband edge frequency ');
fs = input('Enter the sampling frequency ');
N = input('Enter the order of filter ');

wp = 2 * pi * Fp / fs;
ws = 2 * pi * Fs / fs;
wcn = (ws + wp) * 0.5 / fs;
n = 0 : 79;

x1 = cos(2 * pi * 100 * n / fs);
x2 = cos(2 * pi * 1500 * n / fs);
x3 = cos(2 * pi * 4000 * n / fs);
x = [x1 x2 x3];

hn = freqz(fir1(N , wcn , hamming(N+1)));
[m,w] = freqz(hn,1);
mag = 20 * log(abs(m));
F = w * 0.5 * fs / pi;
y = filter(hn,1,x);

subplot(3,1,1);
plot(F,mag,'r');

subplot(3,1,2);
stem(x,'k');

subplot(3,1,3);
stem(y,'m');