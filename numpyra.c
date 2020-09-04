/* to construct a no. pyramid 
 10 10 10 10 10 10 10 10 10 10
   9  9  9  9  9  9  9  9  9
     8 8 8 8 8 8 8 8
      7 7 7 7 7 7 7
      6  6  6  6  6  6
       5  5  5  5  5 
        4  4  4  4 
         3  3  3
          2  2
           11    */
#include<stdio.h>
void main()
{
 int a,b=1,c;
 printf("Enter the no. ");
 scanf("%d",&a);
 c=a;
 if(a<10)
 {
  for(int i=0;i<=a;i++)
  {
   for(int j=0;j<b;j++)
    printf(" ");
   for(int k=0;k<c;k++)
    printf(" %d",c);
   printf("\n");
   c=c-1;
   b=b+1;
  }  
 }
 else
 {
  b=0;
  while(a>0)
  {
   if(c>=10)
   {
    for(int q=0;q<b;q++)
     printf(" ");
    for(int q=0;q<c;q++)
     printf(" %d",c);
    printf("\n");
    a--;
    c--;
    b++;
   }
   if(c>1&&c<10)
   {
    for(int q=0;q<b;q++)
     printf(" ");
    for(int q=0;q<=c-1;q++)
     printf("  %d",c);
    printf("\n");
    a--;
    c--;
    b++;
   }
   if(c==1)
   {
    for(int q=0;q<b;q++)
     printf(" ");
    printf("  ");
    for(int q=0;q<=c;q++)
     printf("%d",c);
    printf("\n");
    a--;
    c--;
    b++;
   }
  }
 } 
}
