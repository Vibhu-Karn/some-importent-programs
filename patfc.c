/* to develope pattern like
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
 int n,i=0;
 printf("Enter the size ");
 scanf("%d",&n);
 while(i<n)
 {
  if(i==0||i==n-1)
  {
   printf(" ");
   for(int a=0;a<n;a++)
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
