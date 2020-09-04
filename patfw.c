/* to develope pattern like
*      *
*  **  *
* *  * *
**    **
*      * */
#include<stdio.h>
void main()
{
 int n,i=0,d,c=1;
 printf("Enter the size ");
 scanf("%d",&n);
 d=n/2;
 if(n%2!=0)
 {
  while(i<n)
  {
   if(i<n-(n/2)-2)
   {
    printf("*");
    for(int a=0;a<n;a++)
     printf(" ");
    printf("*");
    printf("\n");
    i++;
   }
   if(i==n-(n/2)-2)
   {
    printf("*");
    for(int a=0;a<d;a++)
     printf(" ");
    printf("*");
    for(int a=0;a<d;a++)
     printf(" ");
    printf("*");
    printf("\n");
    i++;
    d--;
   }
   if(i>n-(n/2)-2)
   {
    printf("*");
    for(int a=0;a<d;a++)
     printf(" ");
    printf("*");
    for(int a=0;a<c;a++)
     printf(" ");
    printf("*");
    for(int a=0;a<d;a++)
     printf(" ");
    printf("*");
    printf("\n");
    i++;
    d--;
    c=c+2;
   }
   if(i==n-1)
   {
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
  while(i<n)
  {
   if(i<n-(n/2)-2)
   {
    printf("*");
    for(int a=0;a<n+1;a++)
     printf(" ");
    printf("*");
    printf("\n");
    i++;
   }
   if(i==n-(n/2)-2)
   {
    printf("*");
    for(int a=0;a<d;a++)
     printf(" ");
    printf("*");
    for(int a=0;a<d;a++)
     printf(" ");
    printf("*");
    printf("\n");
    i++;
    d--;
   }
   if(i>n-(n/2)-2)
   {
    printf("*");
    for(int a=0;a<d;a++)
     printf(" ");
    printf("*");
    for(int a=0;a<c;a++)
     printf(" ");
    printf("*");
    for(int a=0;a<d;a++)
     printf(" ");
    printf("*");
    printf("\n");
    i++;
    d--;
    c=c+2;
   }
   if(i==n-1)
   {
    printf("*");
    for(int a=0;a<n+1;a++)
     printf(" ");
    printf("*");
    printf("\n");
    i++;
   }
  }
 }
}
