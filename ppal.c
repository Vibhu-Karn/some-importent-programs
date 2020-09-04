// to find reverse of a number and check whrther it is pallindrome or not
#include<stdio.h>
void main()
{
 int n,num,rev=0,rem;
 printf("Enter the no. ");
 scanf("%d",&num);
 n=num;
 while(num!=0)
 {
  rem=num%10;
  rev=rev*10+rem;
  num=num/10;
 }
 printf("The reverse of the no. is %d\n",rev);
 if(rev==n)
  printf("This no. is pallindrome\n");
 else
  printf("This no. is not pallindrome\n");
}
