/* to accept details of N students and calculate no. of student above and below average marks and print all details*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
 int n,i,ca=0,cb=0,sum=0;
 float avg;
 printf("Enter no. of students ");
 scanf("%d",&n);
 struct details
 { 
  char name[40];
  char usn[12];
  char branch[5];
  int marks;
 }x[n];
 printf("Enter details of stdents\n");
 for(i=0;i<n;i++)
 {
  printf("For student %d\n",i+1);
  printf("Enter name ");
  scanf("%s",x[i].name);
  printf("Enter USN ");
  scanf("%s",x[i].usn);
  printf("Enter Branch ");
  scanf("%s",x[i].branch);
  printf("Enter marks(out of 600) ");
  scanf("%d",&x[i].marks);
  printf("\n");
 }
 for(i=0;i<n;i++)
 {
  if(strcmp(x[i].usn,x[i+1].usn)==0)
  {
   printf("Duplicate entry is found at position %d\n",i+2);
   printf("PLease re enter all data again\n");
   exit(0);
  }
 }
  sum=sum+x[i].marks;
 avg=sum/n;
 for(i=0;i<n;i++)
 {
  if(x[i].marks>=avg)
   ca=ca+1;
  else
   cb=cb+1;
 }
 printf("Details of students are\n");
 for(i=0;i<n;i++)
 {
  printf("For student %d\n",i+1);
  printf("Name : %s\n",x[i].name);
  printf("USN : %s\n",x[i].usn);
  printf("Branch : %s\n",x[i].branch);
  printf("Marks : %d\n",x[i].marks);
  printf("\n");
 }
 printf("No. of students above average %d\n",ca);
 printf("No. of students below average %d\n",cb);
 char y[4]="YES";
 char no[3]="NO";
 char na[5]="NAME";
 char u[4]="USN";
 char br[7]="BRANCH";
 char ma[6]="MARKS";
 char cho[4];
 char choi[7];
 char choic[4];
 char ch1[7];
 char nam[40];
 char us[12];
 char bran[5];
 char inam;
 char ibra;
 int mar;
 printf("You may retrive all data\nDo you want to retrive ?\nEnter yes or no ");
 scanf("%s",cho);
 if(strcmp(cho,y)==0)
 {
  printf("Good\nYou may retrive all data\nYou may retrive through name usn marks and branch\n");
  printf("Tell us how do you want to check\n");
  printf("Enter your retrival choice ");
  scanf("%s",choi);
  if(strcmp(choi,na)==0)
  {
   printf("Good\nYou may now organise list through Name\n");
   printf("Please enter name of student ");
   scanf("%s",nam);
   for(i=0;i<n;i++)
   {
    if(strcmp(nam,x[i].name)==0)
    {
     printf("Details are\n");
     printf("USN : %s\n",x[i].usn);
     printf("Branch : %s\n",x[i].branch);
     printf("Marks : %d\n",x[i].marks);
     printf("\n");
    }
   printf("Entry not found\n");
   }
  }
  else if(strcmp(choi,u)==0)
  {
   printf("Good\nYou may now organise list through USN\n");
   printf("please enter USN of student ");
   scanf("%s",us);
   for(i=0;i<n;i++)
   {
    if(strcmp(us,x[i].usn)==0)
    {
     printf("Details are\n");
     printf("Name : %s\n",x[i].name);
     printf("Branch : %s\n",x[i].branch);
     printf("Marks : %d\n",x[i].marks);
     printf("\n");
    }
   }
  }
  else if(strcmp(choi,br)==0)
  {  
   printf("Good\nYou may now organise list through Branch\n");
   printf("please enter Branch of student ");
   scanf("%s",bran);
   for(i=0;i<n;i++)
   {
    if(strcmp(bran,x[i].branch)==0)
    {
     printf("Details are\n");
     printf("Name : %s\n",x[i].name);
     printf("USN : %s\n",x[i].usn);
     printf("Marks : %d\n",x[i].marks);
     printf("\n");
    }
   printf("Entry not found\n");
   }
  }
  else if(strcmp(choi,ma)==0)
  {
   printf("Good\nYou may now organise list through Marks\n");
   printf("please enter Marks of student ");
   scanf("%d",&mar);
   for(i=0;i<n;i++)
   {
    if(mar==x[i].marks)
    {
     printf("Details are\n");
     printf("Name : %s\n",x[i].name);
     printf("USN : %s\n",x[i].usn);
     printf("Branch : %s\n",x[i].branch);
     printf("\n");
    }
   printf("Entry not found\n");
   }
  }
  else
  {
   printf("Thanks for using our service\n");
   exit(0);
  }
 }
}
