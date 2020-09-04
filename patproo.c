#include<stdio.h>
void main()
{
 int a=6,e=6,d=4,i=0;
 for(int b=0;b<a;b++)
  printf(" ");
 printf("@");
 printf("\n");
 a--;
 while(a>0)
 {
  for(int b=0;b<a;b++)
   printf(" ");
  for(int b=0;b<d;b++)
   printf("@");
  a--;
  d=d+i;
  i=i+2;
  printf("\n");
 }
 d=d-(2*i);
 a+=2;
 while(e>0)
 {
  for(int b=0;b<a;b++)
   printf(" ");
  for(int b=0;b<d;b++)
   printf("@");
  a++;
  d=d-i;
  i=i-2;
  e--;
  printf("\n");
 }
}
