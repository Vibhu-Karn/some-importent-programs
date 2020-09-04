/* to develope pattern like
***************
 ****** ******
  ****   ****
   **     **
    *******
     *****
      ***
       *  */
#include<stdio.h>
void main()
{
 int n,i=0,a=0,e=1,r,w;
 printf("Enter no. greater than 10 to observe beauty of pattern\n");
 printf("Enter the size ");
 scanf("%d",&n);
 w=n-2;
 r=(2*n)-1;
 while(i<n)
 {
  if(i==0)
  {
   for(int q=0;q<(2*n)-1;q++)
    printf("*");
   printf("\n");
   i++;
   a++;
   r=r-2;
  }
  if(i>0&&w>=2)
  {
   for(int q=0;q<a;q++)
    printf(" ");
   for(int q=0;q<w;q++)
    printf("*");
   for(int q=0;q<e;q++)
    printf(" ");
   for(int q=0;q<w;q++)
    printf("*");
   printf("\n");
   i++;
   a++;
   e=e+2;
   w=w-2;
   r=r-2;
  }
  else
  {
   for(int q=0;q<a;q++)
    printf(" ");
   for(int q=0;q<r;q++)
    printf("*");
   printf("\n");
   i++;
   a++;
   r=r-2;
  }
 }
}
