/* write a code to accept name and no. of units consumed and calculate electricity bill as follows 
for first 200 units charge is 80 paisa for another 100 units is 90 paisa and beyond 300 units it is 1 rupee per unit and if total amount is more than 400 additional 15% of total amount will be charged 100 rupees will be charged as service charge*/
#include<stdio.h>
void main()
{
 char name[40];
 float n,amt=0;
 printf("Enter your name ");
 gets(name);
 printf("Enter units consumed ");
 scanf("%f",&n);
 if(n<=200)
  amt=(n*0.80);
 else if(n>200&&n<=300)
  amt=(200*0.80)+(300-n)*0.90;
 else if(n>300)
  amt=(200*0.80)+(100*0.90)+(n-300)*1;
 if(amt>400)
  amt=amt+(amt*15);
 amt=amt+100;
 printf("Your payable amount is %.3f Mr %s\n",amt,name);
}
