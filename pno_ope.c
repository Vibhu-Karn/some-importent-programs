// to find sum,mean and standered deviation of given n natural no.
#include<stdio.h>
#include<math.h>
void main()
{
 int n,i;
 float sum=0,mean=0,sd=0,*ptr;
 printf("Enter the value of N ");
 scanf("%d",&n);
 float a[n];
 printf("Enter %d no.\n",n);
 for(i=0;i<n;i++)
  scanf("%f",&a[i]);
 ptr=&a[0];
 for(i=0;i<n;i++)
 {
  sum=sum+*ptr;
  ptr++;
 }
 mean=sum/n;
 ptr=&a[0];
 for(i=0;i<n;i++)
 {
  sd=sd+pow(*ptr-mean,2);
  ptr++;
 }
 sd=sqrt(sd);
 sd=sd/n;
 printf("Sum = %.2f\n",sum);
 printf("Mean = %.2f\n",mean);
 printf("Standered Deviation = %.2f\n",sd);
}
