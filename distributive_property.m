close all;
clear;

x1 = input('Enter 1st sequence ');
n1 = input('Enter time index ');

x2 = input('Enter 2nd sequence ');
n2 = input('Enter time index ');

x3 = input('Enter 3rd sequence ');
n3 = input('Enter time index ');

x11 = zeros(1,21);
start1 = n1(1) + 11;
end1 = n1(length(n1)) + 11;
x11(start1 : end1) = x1;

x22 = zeros(1,21);
start2 = n2(1) + 11;
end2 = n2(length(n2)) + 11;
x22(start2 : end2) = x2;

x33 = zeros(1,21);
start3 = n3(1) + 11;
end3 = n3(length(n3)) + 11;
x33(start3 : end3) = x3;

x23 = x22 + x33 ;

y1 = conv(x11,x23);
y2 = conv(x11,x22) + conv(x11,x33);

h = -20 : 20;

subplot(2,1,1);
stem(h,y1,'m');
title('LHS of distributive property');
xlabel('n');
ylabel('amplitude');

subplot(2,1,2);
stem(h,y2,'m');
title('RHS of distributive property');
xlabel('n');
ylabel('amplitude');
