/* to develope pattern like 
 *      *
 **    **
 ***  ***
 ******** */
#include<stdio.h>
void main()
{
 int a,n,b,c,e,f;
 c=1;
 printf("Enter the no. ");
 scanf("%d",&n);
 e=n;
 if(n%2!=0)
 {
  do
  {
   for(a=1;a<=c;a++)
    printf("*");
   for(b=0;b<e;b++)
    printf(" ");
   for(f=1;f<=c;f++)
    printf("*");
   c=c+1; 
   e=e-2;
   printf("\n");
  }while(e!=-1);
  for(int x=0;x<n+2;x++)
   printf("*"); 
  printf("\n");
 }
 if(n%2==0)
 {
  while(e!=0)
  {
   for(a=1;a<=c;a++)
     printf("*");
    for(b=0;b<e;b++)
     printf(" ");
    for(f=1;f<=c;f++)
     printf("*");
    c++; 
    e=e-2;
    printf("\n");
  }
  for(int y=0;y<n+2;y++)
   printf("*");
  printf("\n");
 }
}
