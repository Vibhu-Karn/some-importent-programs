/* to develope a pattern like
*******     
*     
*     
*     ***
*     * *
******   */
#include<stdio.h>
void main()
{
 int n,i=0;
 printf("Enter the size ");
 scanf("%d",&n);
 while(i<n+1)
 {
  if(i==0)
  {
   printf(" ");
   for(int a=0;a<n+(n/2);a++)
    printf("*");
   printf("\n");
   i++;
  }
  if(i<n/2)
  {
   printf("*");
   printf("\n");
   i++;
  }
  if(i==n/2)
  {
   printf("*");
   for(int a=0;a<n-2;a++)
    printf(" ");
   for(int b=0;b<(n/2)+2;b++)
    printf("*");
   printf("\n");
   i++;
  }
  if(i>n/2)
  {
   printf("*");
   for(int a=0;a<n;a++)
    printf(" ");
   printf("*");
   for(int b=0;b<(n/2)-2;b++)
    printf(" ");
   printf("*");
   printf("\n");
   i++;
  }
  if(i==n)
  {
   printf(" ");
   for(int a=0;a<n-1;a++)
    printf("*");
   printf("\n");
   i++;
  }
 }
}
