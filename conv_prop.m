close all;
clear;

% input1
x1 = input('Enter the sequence X1 ');
n1 = input('Enter the time index of X1 ');

% input2
x2 = input('Enter the sequence X2 ');
n2 = input('Enter the time index of X2 ');

% input3
x3 = input('Enter the sequence X3 ');
n3 = input('Enter the time index of X3 ');

%input4
x4 = input('Enter the sequence 1 for Circular Convulation ');

%input5
x5 = input('Enter the sequence 2 for Circular Convulation ');

start1 = n1(1) + n2(1);
end1 = n1(length(n1)) + n2(length(n2));
ny1 = start1 : end1;

start2 = n2(1) + n3(1);
end2 = n2(length(n2)) + n3(length(n3));
ny2 = start2 : end2;

% input plots
subplot(3,1,1);
stem(n1,x1,'g');
title('input sequence X1');
xlabel('[n]');
ylabel('X1[n]');

subplot(3,1,2);
stem(n2,x2,'g');
title('input sequence X2');
xlabel('[n]');
ylabel('X2[n]');

% linear convulation
y1 = conv(x1,x2);
subplot(3,1,3);
stem(ny1,y1,'r');
title('Linear convulation');
xlabel('[n]');
ylabel('conv(X1,X2)');

% verifying properties of linear convulation
% commutative law
figure
subplot(2,3,1);
stem(n1,x1,'g');
title('input sequence X1');
xlabel('[n]');
ylabel('X1[n]');

subplot(2,3,2);
stem(n2,x2,'g');
title('input sequence X2');
xlabel('[n]');
ylabel('X2[n]');

subplot(2,3,3);
stem(n3,x3,'g');
title('input sequence X3');
xlabel('[n]');
ylabel('X3[n]');

y1 = conv(x1,x2);

subplot(2,3,4);
stem(ny1,y1,'r');
ylabel('X1 * X2');
xlabel('[n]');
title('conv(X1,X2)');

y2 = conv(x2,x1);
subplot(2,3,5);
stem(ny1,y2,'r');
ylabel('X2 * X1');
xlabel('[n]');
title('conv(X2,X1)');

% X2 and X3 convulation
y3 = conv(x2,x3);

% associative law
start4 = ny1(1) + n3(1);
end4 = ny1(length(ny1)) + n3(length(n3));
ny4 = start4 : end4;

start3 = n1(1) + ny2(1);
end3 = n1(length(n1)) + ny2(length(ny2));
ny3 = start3 : end3;

y4 = conv(y1,x3);
y3 = conv(x1,y3);

figure
subplot(2,3,1);
stem(n1,x1,'g');
title('input sequence X1');
xlabel('[n]');
ylabel('X1[n]');

subplot(2,3,2);
stem(n2,x2,'g');
title('input sequence X2');
xlabel('[n]');
ylabel('X2[n]');

subplot(2,3,3);
stem(n3,x3,'g');
title('input sequence X3');
xlabel('[n]');
ylabel('X3[n]');

subplot(2,3,4);
stem(ny3,y3,'r');
title('X1 * ( X2 * X3 )');
xlabel('[n]');
ylabel('X1 * Y3');

subplot(2,3,5);
stem(ny4,y4,'r');
title('( X1 * X2 ) * X3');
xlabel('[n]');
ylabel('Y3 * X3');

% distributive law
x11 = zeros(1,21);
start5 = n1(1) + 11;
end5 = n1(length(n1)) + 11;
x11(start5 : end5) = x1;

x22 = zeros(1,21);
start6 = n2(1) + 11;
end6 = n2(length(n2)) + 11;
x22(start6 : end6) = x2;

x33 = zeros(1,21);
start7 = n3(1) + 11;
end7 = n3(length(n3)) + 11;
x33(start7 : end7) = x3;

n5 = -20 : 20;

x23 = x22 + x33;
y5 = conv(x11 , x23);
y7 = conv(x11 , x22);
y8 = conv(x11 , x33);
y6 = y7 + y8;

figure
subplot(2,3,1);
stem(n1,x1,'g');
title('input sequence X1');
xlabel('[n]');
ylabel('X1[n]');

subplot(2,3,2);
stem(n2,x2,'g');
title('input sequence X2');
xlabel('[n]');
ylabel('X2[n]');

subplot(2,3,3);
stem(n3,x3,'g');
title('input sequence X3');
xlabel('[n]');
ylabel('X3[n]');

subplot(2,3,4);
stem(n5,y5,'r');
title('LHS of distributive property');
xlabel('[n]');
ylabel('X1 * ( X2 + X3 )');

subplot(2,3,5);
stem(n5,y6,'r');
title('RHS of distributive property');
xlabel('[n]');
ylabel('( X1 + X2 ) * ( X2 + X3 )');

% circular convulation
N = max(length(x4) , length(x5));
if length(x4) > length(x5)
  x5(length(x5)+1:N)=0;
elseif length(x4) < length(x5)
  x4(length(x4)+1:N)=0;
end
for n = 0 : N-1
  y(n+1) = 0;
  for m = 0 : N-1
    i = mod((n-m),N)
    y(n+1) = y(n+1) + x4(m+1) * x5(i+1);
  end
end
n4 = 0 : N-1;

disp('Circular Convulation is ');
disp(y);
figure
subplot(2,2,1);
stem(n4,x4,'g');
title('Sequence 1');
xlabel('[n]');
ylabel('circular_convulation');

subplot(2,2,2);
stem(n4,x5,'g');
title('Sequence 2');
xlabel('[n]');
ylabel('circular_convulation');

subplot(2,2,3);
stem(n4,y,'r');
title('Sequence 1 convulation with Sequence 2');
xlabel('[n]');
ylabel('circular_convulation')