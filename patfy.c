/* to develope pattern like
*     *
 *   *
  * *
   *
   *
   *
   *    */
#include<stdio.h>
void main()
{
 int n,i=0,b=1,c;
 printf("Enter the size ");
 scanf("%d",&n);
 c=n;
 if(n%2!=0)
 {
  while(i<n+2)
  {
   if(i==0)
   {
    printf("*");
    for(int a=0;a<n;a++)
     printf(" ");
    printf("*");
    printf("\n");
    i++;
   }
   if(i<n-(n/2))
   {
    for(int a=0;a<b;a++)
     printf(" ");
    printf("*");
    for(int a=0;a<c-2;a++)
     printf(" ");
    printf("*");
    i++;
    b++;
    c=c-2;
    printf("\n");
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
  c=n+1;
  while(i<n+3)
  {
   if(i==0)
   {
    printf("*");
    for(int a=0;a<n+1;a++)
     printf(" ");
    printf("*");
    printf("\n");
    i++;
   }
   if(i<n-(n/2)+1)
   {
    for(int a=0;a<b;a++)
     printf(" ");
    printf("*");
    for(int a=0;a<c-2;a++)
     printf(" ");
    printf("*");
    i++;
    b++;
    c=c-2;
    printf("\n");
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
}
