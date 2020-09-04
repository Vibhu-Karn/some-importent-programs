/* to develope pattern like
*******
*      *
*      *
*      *
*******
* *
*   *
*     *
*       *    */
#include<stdio.h>
void main()
{
 int n,i=0,b=0;
 printf("Enter the size ");
 scanf("%d",&n);
 while(i<n+4)
 {
  if(i<(n/2)+3)
  {
   if(i==0||i==(n/2)+2)
   {
    printf("*");
    for(int a=0;a<n;a++)
     printf("*");
    printf("*");
    printf("\n");
    i++;
   }
   else
   {
    printf("*");
    for(int a=0;a<n+1;a++)
     printf(" ");
    printf("*");
    printf("\n");
    i++;
   }
  }
  else
  {
   printf("*");
   for(int a=0;a<b;a++)
    printf(" ");
   printf("*");
   printf("\n");
   i++;
   b+=2;
  }
 }
}
