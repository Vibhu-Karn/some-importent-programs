/* to draw pattern like
*******
*      *
*      *
*******
*
*
*
* */
#include<stdio.h>
void main()
{
 int n,i=0;
 printf("Enter the size ");
 scanf("%d",&n);
 while(i<n+3)
 {
  if(i==0||i==(n/2)+1)
  {
   printf("*");
   for(int a=0;a<n;a++)
    printf("*");
   printf("*");
   printf("\n");
   i++;
  }
  if(i<(n/2)+1)
  {
   printf("*");
   for(int a=0;a<n+1;a++)
    printf(" ");
   printf("*");
   printf("\n");
   i++;
  }
  else
  {
   printf("*");
   printf("\n");
   i++;
  }
 }
}
