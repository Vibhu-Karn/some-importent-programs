// to write a code for number pyramid
#include<stdio.h>
void main()
{
 int a,b;
 printf("Enter the starting digit ");
 scanf("%d",&a);
 b=a;
 while(b!=0)
 {
  for(int x=a;x>=0;x--)
  {
   printf(" ");
   for(int y=0;y<=(a-1);y++)
    printf("%d",a);
   printf("\n"); 
   a=a-1;
  }
  b=b-1;
 } 
}
