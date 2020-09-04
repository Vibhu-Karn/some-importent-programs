/* to develope the pattern
*     *
**   **
*** ***
*******
*** ***
**   **
*     *    */
#include<stdio.h>
void main()
{
 int n,i=0,b,c=1;
 printf("Enter the size ");
 scanf("%d",&n);
 b=n;
 if(n%2!=0)
 {
  while(i<n+2)
  {
   if(i<(n/2)+1)
   {
    for(int a=0;a<c;a++)
    printf("*");
    for(int a=0;a<b;a++)
     printf(" ");
    for(int a=0;a<c;a++)
    printf("*");
    printf("\n");
    i++;
    b=b-2;
    c++;
   }
   if(i==(n/2)+1)
   {
    for(int a=0;a<(2*c)-1;a++)
     printf("*");
    printf("\n");
    i++;
    c--;
    b=b+2;
   }
   if(i>(n/2)+1)
   { 
    for(int a=0;a<c;a++)
     printf("*");
    for(int a=0;a<b;a++)
     printf(" ");
    for(int a=0;a<c;a++)
     printf("*");
    printf("\n");
    i++;
    b=b+2;
    c--;
   }
  }
 }
 else
 {
  while(i<n+1)
  {
   if(i<n/2)
   {
    for(int a=0;a<c;a++)
    printf("*");
    for(int a=0;a<b;a++)
     printf(" ");
    for(int a=0;a<c;a++)
    printf("*");
    printf("\n");
    i++;
    b=b-2;
    c++;
   }
   if(i==n/2)
   {
    for(int a=0;a<2*c;a++)
     printf("*");
    printf("\n");
    i++;
    c--;
    b=b+2;
   }
   if(i>n/2)
   { 
    for(int a=0;a<c;a++)
     printf("*");
    for(int a=0;a<b;a++)
     printf(" ");
    for(int a=0;a<c;a++)
     printf("*");
    printf("\n");
    i++;
    b=b+2;
    c--;
   }
  }
 }
}
