// to print a pattern
#include<stdio.h>
void main()
{
 int a,b=0,c,d=0,e,f;
 printf("Enter the size of pyramid ");
 scanf("%d",&a);
 c=a;
 e=a;
 f=a;
 for(int i=0;i<=a;i++)
 {
  for(int m=0;m<=e;m++)
   printf(" ");
  for(int j=0;j<=b;j++)
   printf(" *");
  printf("\n");
  e=e-1;
  b=b+1;
 }
 for(int k=0;k<=f;k++)
 {
  for(int n=0;n<=d;n++)
   printf(" ");
  for(int l=0;l<=c;l++)
   printf(" *");
  printf("\n");
  d=d+1;
  c=c-1;
 }
}
