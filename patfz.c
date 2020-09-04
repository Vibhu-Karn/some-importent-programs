/* to develope pattren like
*******
     *
    *
   *
  *
 *
*******  */
#include<stdio.h>
void main()
{
 int n,i=0,b;
 printf("Enter the size ");
 scanf("%d",&n);
 b=n;
 while(i<n+2)
 {
  if(i==0||i==n+1)
  {
   for(int a=0;a<n+2;a++)
    printf("*");
   printf("\n");
   i++;
  }
  if(i>0&&i<n+1)
  {
   for(int a=0;a<b;a++)
    printf(" ");
   printf("*");
   i++;
   printf("\n");
   b--;
  }
 }
}
