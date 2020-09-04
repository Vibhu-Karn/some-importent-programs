/* to print pattern like
******    *
     *    *
     *    *
***********
*    *
*    *
*    ****** */
#include<stdio.h>
void main()
{
 int n,i,r;
 i=1;
 printf("Enter the no. ");
 scanf("%d",&n);
 if(n%2==1)
 {
  while(i!=n+3)
  {
   if(i==1)
   {
    printf("*");
    for(int a=0;a<n-1;a++)
     printf(" ");
    printf("*");
    for(int a=0;a<n+1;a++)
     printf("*");
    printf("\n");
    i++;
   }
   if(i<n/2+2)
   {
    printf("*");
    for(int a=0;a<n-1;a++)
     printf(" ");
    printf("*"); 
    printf("\n");
    i++;
   }
   if(i==n/2+2)
   {
    for(int a=0;a<n;a++)
     printf("*");
    printf("*"); 
    for(int a=0;a<n;a++)
     printf("*");
    printf("*");
    printf("\n");
    i++;
   }
   if(i>n/2+2&&i!=n+2)
   {
    for(int a=0;a<n;a++)
     printf(" ");
    printf("*");
    for(int a=0;a<n;a++)
     printf(" ");
    printf("*");
    printf("\n");
    i++;
   }
   if(i==n+2)
   {
    for(int a=0;a<n;a++)
     printf("*");
    printf("*");
    for(int a=0;a<n;a++)
     printf(" ");
    printf("*");
    printf("\n");
    i++;
   }
  }
 }
 else
 {
  i=1;
  r=n+3;
  while(i!=n+4)
  {
   if(i==1)
   {
    printf("*");
    for(int a=0;a<n-1;a++)
     printf(" ");
    for(int a=0;a<n+1;a++)
     printf("*");
    printf("\n");
    i++;
   }
   if(i<r/2+1)
   {
    printf("*");
    for(int a=0;a<n-1;a++)
     printf(" ");
    printf("*"); 
    printf("\n");
    i++;
   }
    if(i==r/2+1)
   {
    for(int a=0;a<n;a++)
     printf("*");
    printf("*"); 
    for(int a=0;a<n-1;a++)
     printf("*");
    printf("*");
    printf("\n");
    i++;
   }
   if(i>r/2+1&&i!=n+3)
   {
    for(int a=0;a<n;a++)
     printf(" ");
    printf("*");
    for(int a=0;a<n-1;a++)
     printf(" ");
    printf("*");
    printf("\n");
    i++;
   }
   if(i==n+3)
   {
    for(int a=0;a<n;a++)
     printf("*");
    printf("*");
    for(int a=0;a<n-1;a++)
     printf(" ");
    printf("*");
    printf("\n");
    i++;
   }
  }
 }
}
