/* to develope pattern like
     *
    ***
   *****
  *******
 *********
***********
 *********
  *******
   *****
    ***
     *
    ***
   *****  */
#include<stdio.h>
void main()
{
 int n,i=0,a,c=1;
 printf("Enter the size ");
 scanf("%d",&n);
 a=n;
 while(i<(2*n)+(n/3)+2)
 {
  if(i<n)
  {
   for(int q=0;q<a;q++)
    printf(" ");
   for(int q=0;q<c;q++)
    printf("*");
   printf("\n");
   i++;
   a--;
   c=c+2;
  }
  if(i==n)
  {
   for(int q=0;q<(2*n)+1;q++)
    printf("*");
   printf("\n");
   a++;
   i++;
   c=c-2;
  }
  if(i<(2*n)&&i>n)
  {
   for(int q=0;q<a;q++)
    printf(" ");
   for(int q=0;q<c;q++)
    printf("*");
   printf("\n");
   i++;
   a++;
   c=c-2;
  }
  if(i==(2*n))
  {
   for(int q=0;q<n;q++)
    printf(" ");
   printf("*");
   printf("\n");
   i++;
   a--;
   c=c+2;
  }
  if(i>(2*n))
  {
   for(int q=0;q<a;q++)
    printf(" ");
   for(int q=0;q<c;q++)
    printf("*");
   printf("\n");
   i++;
   a--;
   c=c+2;
  }
 }
}
