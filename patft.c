/* to develope pattrn like
*******
   *
   *
   *
   *  */ 
#include<stdio.h>
void main()
{
 int n,i=0;
 printf("Enter the size ");
 scanf("%d",&n);
 if(n%2!=0)
 {
  while(i<n)
  {
   if(i==0)
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
    for(int a=0;a<(n/2)+1;a++)
     printf(" ");
    printf("*");
    printf("\n");
    i++;
   }
  }
 }
 else
 {
  while(i<n-1)
  {
   if(i==0)
   {
    printf("*");
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
