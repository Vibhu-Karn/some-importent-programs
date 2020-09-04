// to construct no. pyaramid but upside down
#include<stdio.h>
void main()
{
 int a,b,c;
 printf("Enter the no. ");
 scanf("%d",&a);
 b=a;
 c=0;
 for(int i=0;i<=a;i++)
 {
  for(int j=0;j<=b;j++)
   printf(" ");
  for(int k=0;k<=c;k++)
   printf(" %d",c);
  printf("\n");
  b=b-1;
  c=c+1;
 }
}
 
