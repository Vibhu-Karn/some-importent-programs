/* to print pattern like 
      *
     * *
    *   *
   *     *
  *********
 *         * 
*           *   */
#include<stdio.h>
void main()
{
 int n,i,a,b,c,e;
 i=1;
 c=1;
 printf("Enter the no. ");
 scanf("%d",&n);
 b=n;
 if(n>5)
 {
  while(i!=n+2)
  {
   if(i==1)
   {
    for(a=0;a<b;a++)
     printf(" ");
    printf("*");
    printf("\n");
    b--;
    i++;
   }
   if(i!=n/2+1)
   {
    for(a=0;a<b;a++)
     printf(" ");
    printf("*");
    for(e=0;e<c;e++)
     printf(" ");
    printf("*");
    printf("\n");
    i++;
    b--;
    c=c+2;
   }
   if(i==n/2+1)
   {
    for(e=0;e<b;e++)
     printf(" ");
    printf("*");
    for(e=0;e<c;e++)
     printf("*");
    printf("*");
    printf("\n");
    i++;
    b--;
    c=c+2;
   }
  }
 }
 else
  printf("Enter the no. greater than 5\n");
}
