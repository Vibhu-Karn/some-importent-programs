close all;
clear;

% verification of commutative law

x1 = input('Enter the sequence X1 ');
n1 = input('Enter the time index of X1 ');

x2 = input('Enter the sequence X2 ');
n2 = input('Enter the time index of X2 ');

x3 = input('Enter the sequence X3 ');
n3 = input('Enter the time index X3 ');

start1 = n1(1) + n2(1);
end1 = n1(length(n1)) + n2(length(n2));
ny1 = start1 : end1;

y1 = conv(x1 , x2);
disp('X1 * X2 is ');
disp(y1);

y2 = conv(x2 , x1);
disp('X2 * X1 is ');
disp(y2);

y3 = conv(x2 ,x3);
y4 = conv(y1 , x3);
y5 = conv(x1 , y3);

disp('[ X1 * X2 ] * X3 is ');
disp(y4);

disp('X1 * [ X2 * X3 ] is ');
disp(y5);

start2 = n2(1) + n3(1);
end2 = n2(length(n2)) + n3(length(n3));
ny2 = start2 : end2;

start3 = ny1(1) + n3(1);
end3 = ny1(length(ny1)) + n3(length(n3));
ny3 = start3 : end3;

start4 = n1(1) + ny2(1);
end4 = n1(length(n1)) + ny2(length(ny2));
ny4 = start4 : end4;

subplot(3,1,1);
stem(n1,x1,'r');
title('Sequence X1');
xlabel('n');
ylabel('X1[n]');

subplot(3,1,2);
stem(n2,x2,'y');
title('Sequence X2');
xlabel('n');
ylabel('X2[n]');

subplot(3,1,3);
stem(n3,x3,'g');
title('Sequence X3');
xlabel('n');
ylabel('X3[n]');

figure
subplot(2,2,1);
stem(ny1,y1,'r');
title('X1 * X2');
xlabel('n');
ylabel('Y1');

subplot(2,2,2);
stem(ny1,y2,'r');
title('X2 * X1');
xlabel('n');
ylabel('Y2');

subplot(2,2,3);
stem(ny3,y4,'g');
title('[ X1 * X2 ] * X3');
xlabel('n');
ylabel('Y1 * X3');

subplot(2,2,4);
stem(ny4,y5,'g');
title('X1 * [ X2 * X3 ]');
xlabel('n');
ylabel('X1 * Y2');
