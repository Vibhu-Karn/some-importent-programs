close all;
clear;

x1 = input('Enter the 1st sequence ');
x2 = input('Enter the 2nd sequence ');

N = max(length(x1) , length(x2));

if length(x1) > length(x2)
  x2(length(x2) + 1 : N) = 0;
elseif length(x2) > length(x1)
  x1(length(x2) + 1 : N) = 0;
end
  
for n = 0 : N-1
   y(n+1) = 0;
   for m = 0 : N-1
     i = mod((n-m),N);
     y(n+1) = y(n+1) + x1(m+1) * x2(i+1);
   end
end

disp('The circilar convulation is ');
disp(y);