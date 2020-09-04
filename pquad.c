// to find roots of a quadractic equation
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
 int a,b,c;
 float r1,r2,disc,rp,ip;
 printf("Enter the cofficients of equation ");
 scanf("%d %d %d",&a,&b,&c);
 if(a==0&&b==0)
 {
  printf("Enter valid cofficient\nWell it has root x = %d\n",c);
  exit(0);
 }
 else if(a==0)
 {
  printf("It is a linear equation\n");
  r1=-c/b;
  printf("Roots is %.2f\n",r1);
 }
 else
 {
  disc=pow(b,2)-(4*a*c);
  if(disc>0)
  {
   printf("Roots are real and distinct\n");
   r1=(-b+sqrt(disc))/(2*a);
   r2=(-b-sqrt(disc))/(2*a);
   printf("Roots are %.2f and %.2f\n",r1,r2);
  }
  else if(disc==0)
  {
   printf("Roots are real and equal\n");
   r1=-b/(2*a);
   printf("Roots are %.2f and %.2f\n",r1,r1);
  }
  else
  {
   printf("Roots are imaginary\n");
   rp=-b/(2*a);
   ip=sqrt(-disc)/(4*a);
   printf("Roots are %.2f + %.2fi and %.2f - %.2fi\n",rp,ip,rp,ip);
  }
 }
}
