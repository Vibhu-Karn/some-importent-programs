// to find square root of a no.
#include<stdio.h>
void main()
{
 float m,i;
 printf("Enter the no. ");
 scanf("%f",&m);
 if(m>0)
 {
  for(i=0.000001;i*i<=m;i=i+0.000001);
   printf("Square root is %.2f\n",i);
 }
 else
  printf("We can't calculate square root of a -ve no.\n");
}
