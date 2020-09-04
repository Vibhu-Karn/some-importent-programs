/* to draw pattern like 
*     *
 *   *
  * *
   *
  * *
 *   *
*     *

*      *
 *    *
  *  *
   **
  *  *
 *    *
*      *  */
#include<stdio.h>
void main()
{
 int no1,i1=0,b1=0,c1=0,d1=1,e1;
 printf("Enter the size ");
 scanf("%d",&no1);
 c1=no1;
 e1=(no1/2)+1;
 if(no1%2==1)
 {
  while(i1<no1+2)
  {
   if(i1<no1-(no1/2))
   {
    for(int a1=0;a1<b1;a1++)
     printf(" ");
    printf("*");
    for(int a1=0;a1<c1;a1++)
     printf(" ");
    printf("*");
    printf("\n");
    i1++;
    b1++;
    c1=c1-2;
   }
   if(i1==no1-(no1/2))
   {
    for(int a1=0;a1<e1;a1++)
     printf(" ");
    printf("*");
    printf("\n");
    i1++;
    e1--;
   } 
   if(i1>no1-(no1/2))
   {
    for(int a1=0;a1<e1;a1++)
     printf(" ");
    printf("*");
    for(int a1=0;a1<d1;a1++)
     printf(" ");
    printf("*");
    printf("\n");
    i1++;
    e1--;
    d1=d1+2;
   }
  }
 }
 else
 {
  e1=no1/2;
  while(i1<no1+2)
  {
   if(i1<no1-(no1/2)+1)
   {
    for(int a1=0;a1<b1;a1++)
     printf(" ");
    printf("*");
    for(int a1=0;a1<c1;a1++)
     printf(" ");
    printf("*");
    printf("\n");
    i1++;
    b1++;
    c1=c1-2;
   }
   if(i1>=no1-(no1/2)+1)
   {
    for(int a1=0;a1<e1;a1++)
     printf(" ");
    printf("*");
    for(int a1=0;a1<d1-1;a1++)
     printf(" ");
    printf("*");
    printf("\n");
    i1++;
    e1--;
    d1=d1+2;
   }
  }
 }
}
