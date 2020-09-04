/* to develope code to print
********
*     
*   
*
********
       *
       *
       *
******** */   
#include<stdio.h>
void main()
{
 int n,i,a,b;
 i=1;
 printf("Enter the no ");
 scanf("%d",&n);
 if(n>7)
 {
  while(i<=n+1)
  {
   if(i==1||i==n+1)
   {
    for(a=0;a<n;a++)
     printf("*");
    printf("\n");
    i++;
   }
   if(i<=n/2)
   {
    for(a=0;a<1;a++)
     printf("*");
    for(b=0;b<n-1;b++)
     printf(" ");
    printf("\n");
    i++;
   }
   if(n%2!=0)
   {
    if(i==n/2+1)
    { 
     for(a=0;a<n;a++)
      printf("*");
     printf("\n");
     i++;
    }
   }
   else
   {
    if(i==n/2+1)
    { 
     for(a=0;a<n;a++)
      printf("*");
     printf("\n");
     i++;
    }
   }
   if(i>n/2+1&&i<=n)
   {
    for(b=0;b<n-1;b++)
     printf(" ");
    for(a=0;a<1;a++)
     printf("*");
    printf("\n");
    i++;
   }
  }
 }
 else
 printf("Enter no. greater than 7\n");
}
