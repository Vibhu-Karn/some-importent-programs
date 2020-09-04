/* to develope pattern like
 ******
*      *
*      *
*      *
*      *
 ******   */
#include<stdio.h>
void main()
{
 int n,i=0;
 printf("Enter the size ");
 scanf("%d",&n);
 while(i<n+1)
 {
  if(i==0)
  {
   printf(" ");
   for(int a=0;a<n;a++)
    printf("-");
   printf("\n");
   i++;
  }
  else
  {
   printf("|");
   for(int a=0;a<n;a++)
    printf(" ");
   printf("|");
   printf("\n");
   i++;
  }
  if(i==n)
  {
   printf(" ");
   for(int a=0;a<n;a++)
    printf("-");
   printf("\n");
   i++;
  }
 }
}
