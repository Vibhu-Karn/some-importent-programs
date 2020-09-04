/* to draw pattern like
     *
    * *
   *   *
    * *
     *
    * *
   *   *
    * *
     *  */
#include<stdio.h>
void main()
{
 int n,l,i,b,e;
 i=1;
 printf("Enter no. ");
 scanf("%d",&n);
 b=n;
 e=1;
 printf("Enter no. of loops ");
 scanf("%d",&l);
 if(n>4)
 {
  while(l>0)
  {
   i=1;
   b=n;
   e=1;
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
   }
   if(n%2!=0)
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
   } 
  l--;
  }
  for(int a=0;a<n;a++)
   printf(" ");
  printf("*");
  printf("\n"); 
 }
 else 
  printf("Enter no. greater than 4\n");
}
