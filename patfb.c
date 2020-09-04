/* to print pattern like
*******
*      *
*      *
*      *
******
*      *
*      *
*      *
******   */
#include<stdio.h>
void main()
{
 int n,i=0;
 printf("Enter the size ");
 scanf("%d",&n);
 if(n%2!=0)
 {
  while(i<n+4)
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
   if(i==(n+3)/2)
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
   if(i==n+3)
   {
    printf("*");
    for(int a=0;a<n;a++)
     printf("*");
    printf("*");
    printf("\n");
    i++;
   }
  } 
 }
 else
 {
  while(i<n+3)
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
   if(i==(n+3)/2)
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
   if(i==n+2)
   {
    printf("*");
    for(int a=0;a<n;a++)
     printf("*");
    printf("*");
    printf("\n");
    i++;
   }
  } 
 }
}
