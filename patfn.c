/* to print patern like
*     *
**    *
* *   *
*  *  *
*   * *
*    **
*     * */
#include<stdio.h>
void main()
{
 int n,i,a,b,e,c,f;
 printf("Enter the no. ");
 scanf("%d",&n);
 i=1;
 e=0;
 f=n-1;
 if(n>4)
 {
  while(i!=n+3)
  {
   if(i==1||i==n+2)
   {
    printf("*");
    for(a=0;a<n;a++)
     printf(" ");
    printf("*");
    printf("\n");
    i++;
   }
   else
   {
    printf("*");
    for(b=0;b<e;b++)
     printf(" ");
    printf("*");
    for(c=0;c<f;c++)
     printf(" ");
    printf("*");
    i++;
    f--;
    e++;
    printf("\n");
   }
  }
 }
 else 
  printf("Enter no. greater than 4\n");
}
