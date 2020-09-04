// to construct a no. triangle
#include<stdio.h>
void main()
{
 int a,b=0,z,c;
 printf("Enter the starting digit ");
 scanf("%d",&a);
 b=a;
 c=a;
 while(a!=0)
 {
  for(z=a;z<=c;z++)
   printf(" ");
  for(int y=b;y>=1;y--)
   printf("%d",b);
  printf("\n");
  a=a-1;
  b=b-1;
 }
}
