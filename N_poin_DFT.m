close all;
clear;

x = input('Enter the seq. ');
N = input('Enter the point of DFT ');

for k = 0 : N-1
  xk(k+1) = 0;
  for n = 0 : length(x) - 1
    xk(k+1) = xk(k+1) + x(n+1) * exp(-j * 2 * pi * k * n / N);
  end
end

disp('The N point DFT is ');
disp(xk);

xk1 = fft(x,N);
disp('The N point DFT by fft() funtion ');
disp(xk1);

n1 = 0 : N-1;

subplot(2,1,1);
stem(n1,abs(xk),'m');
title('Magnitude');
xlabel('n');
ylabel('amplitude');

subplot(2,1,2);
stem(n1,angle(xk),'m');
title('Phase');
xlabel('n');
ylabel('amplitude');
