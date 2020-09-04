// array progtamming
#include<stdio.h>
void main()
{
 int n,i,j=0;
 printf("Enter no. of items ");
 scanf("%d",&n);
 int a[n];
 for(i=0;i<n;i++)
 {
  printf("Enter item[%d] ",i+1);
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  if(a[i]%2!=0)
  {
   j++;
   printf("Item[%d] = %d is odd\n",i+1,a[i]);
  }
 }
 printf("No. of odd no is %d\n",j);
}
