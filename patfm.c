/* to draw pattern like
*         *
**       **
* *     * *
*  *   *  *
*   * *   *
*    *    * */
#include<stdio.h>
void main()
{
 int n,i,a,b,e,q,w,t,y;
 i=1;
 b=1;
 y=1;
 printf("Enter the no. ");
 scanf("%d",&n);
 e=n;
 if(n%2!=0)
 {
  while(e!=-1)
  {
   if(i==1||i==2)
   {
    for(a=0;a<b;a++)
     printf("*");
    for(w=0;w<e;w++)
     printf(" ");
    for(q=0;q<b;q++)
     printf("*");
    b++;
    i++; 
    e=e-2;
   }
   else
   {
    for(a=0;a<1;a++)
     printf("*");
    for(t=0;t<y;t++)
     printf(" ");
    for(a=0;a<1;a++)
     printf("*");
    for(w=0;w<e;w++)
     printf(" ");
    for(a=0;a<1;a++)
     printf("*");
    for(t=0;t<y;t++)
     printf(" ");
    for(a=0;a<1;a++)
     printf("*");
    y++;
    e=e-2;
    i++;
   }
   printf("\n");
  }
  for(a=0;a<1;a++)
   printf("*");
  for(t=0;t<y;t++)
   printf(" ");
  for(a=0;a<1;a++)
   printf("*");
  for(t=0;t<y;t++)
   printf(" ");
  for(a=0;a<1;a++)
   printf("*");
  printf("\n");
 }
 if(n%2==0)
 {
  while(e!=-2)
  {
   if(i==1||i==2)
   {
    for(a=0;a<b;a++)
     printf("*");
    for(w=0;w<e;w++)
     printf(" ");
    for(q=0;q<b;q++)
     printf("*");
    b++;
    i++; 
    e=e-2;
   }
   else
   {
    for(a=0;a<1;a++)
     printf("*");
    for(t=0;t<y;t++)
     printf(" ");
    for(a=0;a<1;a++)
     printf("*");
    for(w=0;w<e;w++)
     printf(" ");
    for(a=0;a<1;a++)
     printf("*");
    for(t=0;t<y;t++)
     printf(" ");
    for(a=0;a<1;a++)
     printf("*");
    y++;
    e=e-2;
    i++;
   }
   printf("\n");
  }
 }
}
