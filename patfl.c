/* to develope pattern like
*
*
*
*
******* */
#include<stdio.h>
void main()
{
 int n,i=0;
 printf("Enter the size ");
 scanf("%d",&n);
 while(i<n)
 {
  if(i==n-1)
  {
   for(int a=0;a<n+2;a++)
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
