/* to develope pattern like
*
 **
  ***
   ****
    *****
     ******
***********
***********
******
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
 while(i<n+1)
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
 while(i==n+1||i==n+2)
 {
  for(int a=0;a<b+c;a++)
   printf("*");
  printf("\n");
  i++;
 }
 i=0;b=0;
 while(i<n+2)
 {
  for(int a=0;a<b;a++)
   printf(" ");
  for(int a=0;a<c;a++)
   printf("*");
  printf("\n");
  i++;
  b=b+2;
  c--;
 }
}
