// to accept name,bill amount,mode of payment,offer,additional offer from different users and print there net payable amount and discount
#include<stdio.h>
#include<string.h>
void main()
{
 int n;
 float netamt,dis;
 printf("WELCOME TO THE MARKET\nWE ARE PLEASE TO SERVE FOR YOU\nCard users will get a discount of 25 percent\nOnline payment can earn you 10 percent discount\n");
 printf("\n");
 printf("Please enter all details in upper case letter\n");
 printf("Enter the no. of customer "); 
 scanf("%d",&n);
 printf("\n");
 struct cusdet
 {
  char name[40];
  float amt,netamt;
  char modpay[7];
  char addoff[8];
 }x[n];
 char csh[5]="CASH";
 char crd[5]="CARD";
 char onlyn[7]="ONLINE";
 char cr[6]="VIBHU";
 char nbie[7]="NEWBIE";
 char rglr[8]="REGULAR";
 char yes[4]="YES";
 char no[3]="NO";
 char choi[4];
 for(int i=0;i<n;i++)
 {
  printf("Enter details of customer %d\n",i+1);
  printf("Enter name ");
  scanf("%s",x[i].name);
  printf("Enter bill amount ");
  scanf("%f",&x[i].amt);
  printf("\n");
  printf("Hello MR./MRs. %s\n",x[i].name);
  printf("Sir/Mam how would you like to pay ");
  scanf("%s",x[i].modpay);
  printf("\n");
  if(strcmp(x[i].modpay,csh)==0)
  {
   printf("Sir/Mam do you have an additional offer\n");
   printf("Enter referral code ");
   scanf("%s",x[i].addoff);
   if(strcmp(x[i].addoff,cr)==0)
   {
    netamt=x[i].amt-0.50*x[i].amt;
    dis=0.50*x[i].amt;
   }
   else if(strcmp(x[i].addoff,nbie)==0)
   {
    netamt=x[i].amt-0.40*x[i].amt;
    dis=0.40*x[i].amt;
   }
   else if(strcmp(x[i].addoff,rglr)==0)
   {
    netamt=x[i].amt-0.30*x[i].amt;
    dis=0.30*x[i].amt;
   }
   else
   {
    netamt=x[i].amt;
    dis=0;
   }
   printf("Sir/Mam your net amount is %.2f\n",netamt);
   printf("Sir/Mam will you wish to see through discount amount ");
   scanf("%s",choi);
   if(strcmp(choi,yes)==0)
    printf("You have been given discount of Rs %.2f\n",dis);
   else
    printf("Thank you for using our service\n");
   printf("\n");
   netamt=0;
   dis=0;
  }
  else if(strcmp(x[i].modpay,crd)==0)
  {
   printf("Sir/Mam do you have an additional offer\n");
   printf("Enter referral code ");
   scanf("%s",x[i].addoff);
   if(strcmp(x[i].addoff,cr)==0)
   {
    netamt=x[i].amt-0.50*x[i].amt-0.25*x[i].amt;
    dis=0.50*x[i].amt+0.25*x[i].amt;
   }
   else if(strcmp(x[i].addoff,nbie)==0)
   {
    netamt=x[i].amt-0.40*x[i].amt-0.25*x[i].amt;
    dis=0.40*x[i].amt+0.25*x[i].amt;
   }
   else if(strcmp(x[i].addoff,rglr)==0)
   {
    netamt=x[i].amt-0.30*x[i].amt-0.25*x[i].amt;
    dis=0.30*x[i].amt+0.25*x[i].amt;
   }
   else
   {
    netamt=x[i].amt;
    dis=0.25*x[i].amt;
   }
   printf("Sir/Mam your net amount is %.2f\n",netamt);
   printf("Sir/Mam will you wish to see through discount amount ");
   scanf("%s",choi);
   if(strcmp(choi,yes)==0)
    printf("You have been given discount of Rs %.2f\n",dis);
   else
    printf("Thank you for using our service\n");
   printf("\n");
   netamt=0;
   dis=0;
  }
   else if(strcmp(x[i].modpay,onlyn)==0)
  {
   printf("Sir/Mam do you have an additional offer\n");
   printf("Enter referral code ");
   scanf("%s",x[i].addoff);
   if(strcmp(x[i].addoff,cr)==0)
   {
    netamt=x[i].amt-0.50*x[i].amt-0.10*x[i].amt;
    dis=0.50*x[i].amt+0.10*x[i].amt;
   }
   else if(strcmp(x[i].addoff,nbie)==0)
   {
    netamt=x[i].amt-0.40*x[i].amt-0.10*x[i].amt;
    dis=0.40*x[i].amt+0.10*x[i].amt;
   }
   else if(strcmp(x[i].addoff,rglr)==0)
   {
    netamt=x[i].amt-0.30*x[i].amt-0.10*x[i].amt;
    dis=0.30*x[i].amt+0.10*x[i].amt;
   }
   else
   {
    netamt=x[i].amt-0.10*x[i].amt;
    dis=0.10*x[i].amt;
   }
   printf("Sir/Mam your net amount is %.2f\n",netamt);
   printf("Sir/Mam will you wish to see through discount amount ");
   scanf("%s",choi);
   if(strcmp(choi,yes)==0)
    printf("You have been given discount of Rs %.2f\n",dis);
   else
    printf("Thank you for using our service\n");
   printf("\n");
   netamt=0;
   dis=0;
  }
 }
}
  
