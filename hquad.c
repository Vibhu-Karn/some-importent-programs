/* to print pattern like
       *
      * *
     *   *
    *     *
     *   *
      * * 
       *  */
#include<stdio.h>
void main()
{
 int n,i,b,e;
 i=1;
 e=1;
 printf("Enter the no. ");
 scanf("%d",&n);
 b=n;
 if(n>4)
 {
  if(n%2==0)
  {
   while(i!=n+1)
   {
    if(i==1)
    {
     for(int a=0;a<b;a++)
      printf(" ");
     printf("*");
     printf("\n");
     i++;
     b--;
    }
    if(i<n/2+2)
    {
     for(int a=0;a<b;a++)
      printf(" ");
     printf("*");
     for(int c=0;c<e;c++)
      printf(" ");
     printf("*");
     printf("\n");
     i++;
     b--;
     e=e+2;
    }
    if(i>=n/2+2)
    {
     for(int a=0;a<b+2;a++)
      printf(" ");
     printf("*");
     for(int c=0;c<e-4;c++)
      printf(" ");
     printf("*");
     printf("\n");
     i++;
     b++;
     e=e-2;
    }
   }   
   for(int a=0;a<n;a++)
    printf(" ");
   printf("*");
   printf("\n");
  }
  else if(n%2!=0)
  {
   while(i!=n)
   {
    if(i==1)
    {
     for(int a=0;a<b;a++)
      printf(" ");
     printf("*");
     printf("\n");
     i++;
     b--;
    }
    if(i<n/2+2)
    {
     for(int a=0;a<b;a++)
      printf(" ");
     printf("*");
     for(int c=0;c<e;c++)
      printf(" ");
     printf("*");
     printf("\n");
     i++;
     b--;
     e=e+2;
    }
    if(i>=n/2+2)
    {
     for(int a=0;a<b+2;a++)
      printf(" ");
     printf("*");
     for(int c=0;c<e-4;c++)
      printf(" ");
     printf("*");
     printf("\n");
     i++;
     b++;
     e=e-2;
    }
   }   
   for(int a=0;a<n;a++)
    printf(" ");
   printf("*");
   printf("\n");
  }
 }
 else
  printf("Enter no. greater than 4\n");
}
 
