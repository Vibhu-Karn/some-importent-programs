/* to develope pattern like
*******
   *
   *
   *
*  *
 * *
  **   */
#include<stdio.h>
void main()
{
 int n,i=0,b=0,d;
 printf("Enter the size ");
 scanf("%d",&n);
 d=n/2;
 if(n%2!=0)
 {
  while(i<n+2)
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
   if(i<d+2)
   {
    for(int a=0;a<(n/2)+1;a++)
     printf(" ");
    printf("*");
    printf("\n");
    i++;
   }
   else
   {
    for(int a=0;a<b;a++)
     printf(" ");
    printf("*");
    for(int c=0;c<d;c++)
     printf(" ");
     printf("*");
    printf("\n");
    d--;
    b++;
    i++;
   }
  }
 }
 else
 {
  while(i<n+2)
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
   if(i<d+1)
   {
    for(int a=0;a<(n/2)+1;a++)
     printf(" ");
    printf("*");
    printf("\n");
    i++;
   }
   else
   {
    for(int a=0;a<b;a++)
     printf(" ");
    printf("*");
    for(int c=0;c<d;c++)
     printf(" ");
    printf("*");
    printf("\n");
    d--;
    b++;
    i++;
   }
  }
 } 
}

