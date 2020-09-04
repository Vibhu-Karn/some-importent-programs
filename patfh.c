/* to print pattern like
*     *
*     *
*******
*     *
*     * */
#include<stdio.h>
void main()
{
 int n,a,i;
 i=1;
 printf("Enter the no. ");
 scanf("%d",&n);
 if(n>7)
 {
  if(n%2!=0)
  {
   while(i!=n+1)
   {
    if(i!=n/2+1)
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
     for(a=0;a<n+2;a++)
      printf("*");
     printf("\n");
     i++;
    }
   }
  }
  else
  {
   while(i!=n)
   {
    if(i!=n/2)
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
     for(a=0;a<n+2;a++)
      printf("*");
     printf("\n");
     i++;
    }
   }
  }
 }
 else
  printf("Enter no. greater than 7\n");
}
