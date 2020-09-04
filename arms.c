// to check for armstrong no. and print armstrong no. between a given range
#include<stdio.h>
#include<math.h>
#include<string.h>
int isarm(int n)
{
 int a,sum=0,num;
 num=n;
 while(n!=0)
 {
  a=n%10;
  sum=sum+pow(a,3);
  n=n/10;
 }
 if(num==sum)
  return 1;
 else 
  return 0;
}
void main()
{
 int b,k,r1,r2,k1;
 char yes[4]="yes";
 char no[3]="no";
 char choi[4];
 printf("Enter a no. ");
 scanf("%d",&b);
 k=isarm(b);
 if(k==0)
  printf("This is not armstrong no.\n");
 else if(k==1)
  printf("This is armstrong no.\n");
 printf("\nWould you wish to look at some armstrong no ");
 scanf("%s",choi);
 if(strcmp(choi,yes)==0)
 {
  printf("Enter the range ");
  scanf("%d-%d",&r1,&r2);
  for(int i=r1;i<=r2;i++)
  {
   k1=isarm(i);
   if(k1==1)
    printf("%d ",i);
  }
  printf("\n");
 }
 else if(strcmp(choi,no)==0)
  printf("ok\n");
 else
  printf("Enter a valid choice\n");
}
