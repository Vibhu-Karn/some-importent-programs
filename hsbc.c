/* to develope pattern like 
    ***********
   ** ******* **
  ***  *****  ***
 ****   ***   ****
*****    *    *****
 ****   ***   ****
  ***  *****  ***
   ** ******* **
    ***********  */
#include<stdio.h>
void main()
{
 int n,i=1,b,c=1,d=0,e;
 printf("Enter the size ");
 scanf("%d",&n);
 b=n;
 e=(2*n)-1;
 while(i<2*n)
 {
  if(i<n)
  {
   for(int a=0;a<b;a++)
    printf(" ");
   for(int a=0;a<c;a++)
    printf("*");
   for(int a=0;a<d;a++)
    printf(" ");
   for(int a=0;a<e;a++)
    printf("*");
   for(int a=0;a<d;a++)
    printf(" ");
   for(int a=0;a<c;a++)
    printf("*");
   printf("\n");
   i++;b--;c++;d++;
   e=e-2;
  }
  if(i==n)
  {
   for(int a=0;a<b;a++)
    printf(" ");
   for(int a=0;a<c;a++)
    printf("*");
   for(int a=0;a<d;a++)
    printf(" ");
   for(int a=0;a<e;a++)
    printf("*");
   for(int a=0;a<d;a++)
    printf(" ");
   for(int a=0;a<c;a++)
    printf("*");
   printf("\n");
   i++;b++;c--;d--;
   e=e+2;
  }
  if(i>n)
  {
   for(int a=0;a<b;a++)
    printf(" ");
   for(int a=0;a<c;a++)
    printf("*");
   for(int a=0;a<d;a++)
    printf(" ");
   for(int a=0;a<e;a++)
    printf("*");
   for(int a=0;a<d;a++)
    printf(" ");
   for(int a=0;a<c;a++)
    printf("*");
   printf("\n");
   i++;b++;c--;d--;
   e=e+2;
  }
 }
}
   
