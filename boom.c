/*to develope pattern like
*
 **
  ***
   ****
    *****
   ****
  ***
 **
*  */
#include<stdio.h>
void main()
{
 int n,i=0,b=0,c=1;
 printf("Enter the size ");
 scanf("%d",&n);
 while(i<(2*n)+1)
 {
  if(i<n)
  {
   for(int a=0;a<b;a++)
    printf(" ");
   for(int a=0;a<c;a++)
    printf("*");
   printf("\n");
   i++;
   b++;
   c++;
  }
  if(i==n)
  {
   for(int a=0;a<b;a++)
    printf(" ");
   for(int a=0;a<c;a++)
    printf("*");
   printf("\n");
   i++;
   b--;
   c--;
  }
  if(i>n)
  {
   for(int a=0;a<b;a++)
    printf(" ");
   for(int a=0;a<c;a++)
    printf("*");
   printf("\n");
   i++;
   b--;
   c--;
  }
 }
}
