/* to acccept size of array , elements of array and printf no. of factor of which a's element is a factor and b's element is also a factor*/
#include<stdio.h>
#include<stdlib.h>
int hcf(int a,int b)
{
 while(a!=b)
 {
  if(a>b)
   a=a-b;
  else
   b=b-a;
 }
 return a;
}
void main()
{
 int m,n,k=0,lcm=1,i=0,fac=0,div=0,no,j,cnt,l;
 printf("Please enter size of element a ");
 scanf("%d",&m);
 printf("Please enter size of element b ");
 scanf("%d",&n);
 int x[m],y[n];
// to accept elements of both arrays
 printf("Please enter elements of 1st array (provide in ascending oder)\n");
 for(int q=0;q<m;q++)
  scanf("%d",&x[q]);
 printf("Please provide elements of 2nd array (provide in ascending oder)\n");
 for(int q=0;q<n;q++)
  scanf("%d",&y[q]);
// to find hcf of elemnts of 1st array
 while(i<m) 
 {
  k=hcf(lcm,x[i]);
  lcm=(lcm*x[i])/k;
  i++;
 }
 printf("HCF = %d\n",lcm);
// to check for if all elements are factors in 2nd array
 j=0;
 while(j<n)
 {
  if((y[j]%lcm)!=0)
  {
   printf("Number of factor is 0\n");
   exit(0);
   j++;
  }
  else
   j++;
 }
// applying conditions to check for factor
 if(lcm==x[m-1])
  fac=1;
 else
  fac=2;
 div=y[0]/lcm;
 l=2;k=0;
 while(l<=div)
 {
  no=l*lcm;
  for(k=0;k<n;k++)
  {
   if(y[k]%no==0)
    cnt=1;
   else 
   {
    cnt=0;
    break;
   }
  }
  if(cnt==1)
   fac++;
  l++;
 }
 printf("Number of factors are %d\n",fac);
}
