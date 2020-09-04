//to calculate HCf of giuven two no.s
#include<stdio.h>
void main()
{
 int m,n;
 printf("Enter the two no.s ");
 scanf("%d %d",&m,&n);
 while(m!=n)
 {
  if(m>n)
   m=m-n;
  else
   n=n-m;
 }
 printf("The HCF is %d\n",m);
}
