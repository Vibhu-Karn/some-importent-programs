/* to develope pattern like
*****
  *
  *
  *
  *
***** */
#include<stdio.h>
void main()
{
 int n,i;
 i=1;
 printf("Enter the no. ");
 scanf("%d",&n);
 while(i!=n+1)
 {
  if(n%2==0)
  {
   if(i==1||i==n)
   {
    for(int a=0;a<n+1;a++)
     printf("*");
    printf("\n");
    i++;
   }
   else
   {
    for(int a=0;a<n/2;a++)
     printf(" ");
    printf("*");
    printf("\n");
    i++;
   }
  }
  else
  {
   if(i==1||i==n)
   {
    for(int a=0;a<n;a++)
     printf("*");
    printf("\n");
    i++;
   }
   else
   {
    for(int a=0;a<n/2;a++)
     printf(" ");
    printf("*");
    printf("\n");
    i++;
   }
  }
 }
}
  
