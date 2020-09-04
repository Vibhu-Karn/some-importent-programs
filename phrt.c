/* to develope pattern like
    ****       ****
   ******     ******
  ********   ********
 ********** **********
***********************
 *********************
  *******************
   *****************
    *************** 
     *************
      ***********
       *********
        *******
         *****
          ***
           *     */
#include<stdio.h>
void main()
{
 int n,a,b,c,i=0,d=1,q;
 printf("Enter the size ");
 scanf("%d",&n);
 a=n;
 if(n%2!=0)
 {
  c=(2*n)-1;
  while(i<n)
  {
   if(i==0)
   {
    for(int b=0;b<a;b++)
     printf(" ");
    for(int b=0;b<n;b++)
     printf("_");
    for(int b=0;b<c;b++)
     printf(" ");
    for(int b=0;b<n;b++)
     printf("_");
    printf("\n");
    i++;
    a--;
    c=c-2;
   }
   if(i>0)
   {
    for(int b=0;b<a;b++)
     printf(" ");
    printf("_");
    for(int b=0;b<d+n-1;b++)
     printf("_");
    printf("_");
    for(int b=0;b<c;b++)
     printf(" ");
    printf("_");
    for(int b=0;b<d+n-1;b++)
     printf("_");
    printf("_");
    i++;
    a--;
    d=d+2;
    c=c-2;
    printf("\n");
   }
  }
  printf("_");
  for(int b=0;b<d+n-1;b++)
   printf("_");
  printf("_");
  for(int b=0;b<d+n-1;b++)
   printf("_");
  printf("_");
  printf("\n");
 }
 else
 {
  c=(2*n)-1;
  while(i<n)
  {
   if(i==0)
   {
    for(b=0;b<a;b++)
     printf(" ");
    for(int b=0;b<n;b++)
     printf("_");
    for(b=0;b<c;b++)
     printf(" ");
    for(int b=0;b<n;b++)
     printf("_");
    printf("\n");
    i++;
    a--;
    c=c-2;
   }
   if(i>0)
   {
    for(b=0;b<a;b++)
     printf(" ");
    printf("_");
    for(b=0;b<d+n-1;b++)
     printf("_");
    printf("_");
    for(b=0;b<c;b++)
     printf(" ");
    printf("_");
    for(b=0;b<d+n-1;b++)
     printf("_");
    printf("_");
    i++;
    a--;
    d=d+2;
    c=c-2;
    printf("\n");
   }
  }
  printf("_");
  for(int b=0;b<d+n-1;b++)
   printf("_");
  printf("_");
  for(int b=0;b<d+n-1;b++)
   printf("_");
  printf("_");
  printf("\n");
 }
 i=1;
  q=(2*d)+1;
 while(i<d+n)
 {
  for(int b=0;b<i;b++)
   printf(" ");
  printf("_");
  for(int b=0;b<q+(2*n)-4;b++)
   printf("_");
  printf("_");
  printf("\n");
  i++;
  q=q-2;
 }
 for(int b=0;b<d+n;b++)
  printf(" ");
 printf("_");
 printf("\n");
}
