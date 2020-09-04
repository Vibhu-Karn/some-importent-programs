/* to print pattern like 
*     *
*    *
*   *
*  *
* *
**
* *
*  *
*   *
*    *
*     * */
#include<stdio.h>
void main()
{
 int n,a,b,c,s,d;
 d=1;
 printf("Enter the no. ");
 scanf("%d",&n);
 b=n;
 c=n;
 while(c!=n+1)
 {
  if(b>=0)
  {
   for(a=0;a<1;a++)
    printf("*");
   for(s=0;s<b;s++)
    printf(" ");
   for(a=0;a<1;a++)
    printf("*");
   printf("\n");
   b--;
   c--;
  }
  else
  {
   if(d<=n)
   {
    for(a=0;a<1;a++)
     printf("*");
    for(s=0;s<d;s++)
     printf(" ");
    for(a=0;a<1;a++)
     printf("*");
    printf("\n");
    d++;
    c++;
   }
   else
    break;
  }
 }
}
