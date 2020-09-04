/* to develope pattern like
*******
*      *
*      *
*      *
*    * *
*******
       *
        *  */
#include<stdio.h>
void main()
{
 int n,i=0,c,d=2;
 printf("Enter the size ");
 scanf("%d",&n);
 c=n;
 while(i<n+4)
 {
  if(i==0)
  {
   for(int a=0;a<n+2;a++)
    printf("*");
   printf("\n");
   i++;
  }
  if(i==n-1)
  {
   printf("*");
   for(int a=0;a<n-2;a++)
    printf(" ");
   printf("*");
   printf("  ");
   printf("*");
   printf("\n");
   i++;
  }
  if(i==n)
  {
   printf("*");
   for(int a=0;a<n-1;a++)
    printf(" ");
   printf("*");
   printf(" ");
   printf("*");
   printf("\n");
   i++;
  }
  if(i==n+1)
  {
   for(int a=0;a<n+2;a++)
    printf("*");
   printf("\n");
   i++;
  }
  if(i>0&&i<n+2)
  {
   printf("*");
   for(int a=0;a<n+1;a++)
    printf(" ");
   printf("*");
   i++;
   printf("\n");
  }
  if(i>=n+2)
  {
   for(int a=0;a<c+2;a++)
    printf(" ");
   printf("*");
   for(int a=0;a<d;a++)
    printf(" "); 
   printf("*"); 
   printf("\n");
   i++;
   c++;
   d=d-2;
  }
 }
}
