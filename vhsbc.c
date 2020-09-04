/* to develope pattern like
     *
    ***
   *****
  *******
 *********
***********
*         *
**       **
***     ***
****   ****
***** *****
***********
***** *****
****   ****
***     ***
**       **
*         *
***********
 *********
  *******
   *****
    ***
     *    */
#include<stdio.h>
void main()
{
 int n,i=0,a,b=1,c=1;
 printf("Enter then size ");
 scanf("%d",&n);
 a=n;
 while(a>=0)
 {
  for(int q=0;q<a;q++)
   printf(" ");
  for(int q=0;q<b;q++)
   printf("*");
  printf("\n");
  a--;
  b=b+2;
 }
 b=b-4;
 while(i<(2*n)+1)
 {
  if(i<n)
  {
   for(int q=0;q<c;q++)
    printf("*");
   for(int q=0;q<b;q++)
    printf(" ");
   for(int q=0;q<c;q++)
    printf("*");
   printf("\n");
   i++;
   c++;
   b=b-2;
  }
  if(i==n)
  {
   for(int q=0;q<(2*n)+1;q++)
    printf("*");
   printf("\n");
   i++;
   c--;
   b=b+2;
  }
  if(i>n)
  {
   for(int q=0;q<c;q++)
    printf("*");
   for(int q=0;q<b;q++)
    printf(" ");
   for(int q=0;q<c;q++)
    printf("*");
   printf("\n");
   i++;
   c--;
   b=b+2;
  }
 }
 a++;
 while(a<n+1)
 {
  for(int q=0;q<a;q++)
   printf(" ");
  for(int q=0;q<b;q++)
   printf("*");
  printf("\n");
  a++;
  b=b-2;
 }
}
