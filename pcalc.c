// to built a simple calculator
#include<stdio.h>
#include<stdlib.h>
void main()
{
 float a,b;
 char c;
 float res;
 printf("Enter a expression ");
 scanf("%f %c %f",&a,&c,&b);
 switch(c)
 {
  case '+':res=a+b;break;
  case '-':res=a-b;break;
  case '*':res=a*b;break;
  case '/':
          if(b!=0)
          {
           res=a/b;
           break;
          }
	  else
          {
 	   printf("Denominator can't be zero!!\n");
           exit(0);
          }
  default:printf("Enter a valid operator +,-,*,/\n");exit(0);
 }
 printf("The required result of %.1f %c %.1f is %.2f\n",a,c,b,res);
}
