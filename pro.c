// to let user to enter no. of no.s they want we will check for zero,postive or negetive until user quits
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
 int a;
 char yes[4]="yes";
 char no[3]="no";
 char choi[4];
 while(1)
 {
  printf("Enter the no. ");
  scanf("%d",&a);
  if(a>0)
  {
   printf("The entered no. is positive\n");
   printf("Do you want to quit ? ");
   scanf("%s",choi);
   if(strcmp(choi,yes)==0)
   {
    printf("Thanks\n");
    exit(0);
   }
   else if(strcmp(choi,no)==0)
    printf("You may continue\n");
  }
  else if(a==0)
  {
   printf("The entered no. is zero\n");
   printf("Do you want to quit ? ");
   scanf("%s",choi);
   if(strcmp(choi,yes)==0)
   {
    printf("Thanks\n");
    exit(0);
   }
   else if(strcmp(choi,no)==0)
    printf("You may continue\n");
  }
  else if(a<0)
  {
   printf("The entered no. is negetive\n");
   printf("Do you want to quit ? ");
   scanf("%s",choi);
   if(strcmp(choi,yes)==0)
   {
    printf("Thanks\n");
    exit(0);
   }
   else if(strcmp(choi,no)==0)
    printf("You may continue\n");
  }
 }
}
