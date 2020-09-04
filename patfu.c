/* to print pattern like
*     *
*     *
*     *
*     *
******* */
#include<stdio.h>
void main()
{
 int n,i;
 i=1;
 printf("Enter the no. ");
 scanf("%d",&n);
 if(n>5)
 {
  while(i!=n+1)
  {
   if(i!=n)
   {
    printf("*");
    for(int b=0;b<n;b++)
     printf(" ");
    printf("*");
    i++;
    printf("\n");
   }
   else 
   {
    printf(" ");
    for(int b=0;b<n;b++)
     printf("*");
    i++;
    printf("\n");
   }
  }
 }
 else 
  printf("Enter the no. greater than 5\n");
}
