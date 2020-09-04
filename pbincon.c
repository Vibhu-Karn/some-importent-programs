// to convert given binary equivalent to decimal equivalent
#include<stdio.h>
int con(int n)
{
 if(n==0)
  return 0;
 else
  return (n%10+2*con(n/10));
}
void main()
{
 int n,dec;
 printf("Enter binary equivalent ");
 scanf("%d",&n);
 dec=con(n);
 printf("Its decimal eqivalent is %d\n",dec);
}
