// to print patern like 1+1/4+1/7+1/10.....
#include<stdio.h>
void main()
{
 int a,b=4,c=1;
 printf("Enter the no. of terms ");
 scanf("%d",&a);
 while(c<=a)
 {
  if(c==1)
   printf("1 ");
  else
  {
   printf(" + ");
   printf("1/%d ",b);
  }
  b=b+3;
  c++;
 }
 printf("\n");
}
