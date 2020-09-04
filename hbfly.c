/* to develope pattern like
************
 *********
  *******
   *****
    ***
     *
    ***
   *****
  *******
 *********
***********  */
#include<stdio.h>
void main()
{
 int n,a,i=0,c=0;
 printf("Enter the size ");
 scanf("%d",&n);
 a=(2*n)+1;
 while(i<(2*n)+1)
 {
  if(i<n)
  {
   for(int q=0;q<c;q++)
    printf(" ");
   for(int q=0;q<a;q++)
    printf("*");
   printf("\n");
   i++;
   c++;
   a=a-2;
  }
  if(i==n)
  {
   for(int q=0;q<c;q++)
    printf(" ");
   printf("*");
   printf("\n");
   i++;
   c--;
   a=a+2;
  }
  if(i>n)
  {
   for(int q=0;q<c;q++)
    printf(" ");
   for(int q=0;q<a;q++)
    printf("*");
   printf("\n");
   i++;
   c--;
   a=a+2;
  }
 }
}
