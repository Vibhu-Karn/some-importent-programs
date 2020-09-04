//program related to biilin
#include<stdio.h>
#include<string.h>
void main()
{
 char name[7];
 char nam1[7]="madhav";
 char nam2[6]="radha";
 char nam3[6]="nitai";
 float a,b,c;
 printf("Enter name ");
 gets(name);
 if(strcmp(name,nam1)==0)
 {
  printf("Welcome Mr madhav\nplease enter quantity of items\n");
  printf("Enter quantity of air conditioner ");
  scanf("%f",&a);
  printf("Enter quantity of speaker ");
  scanf("%f",&b);
  printf("Enter quantity of refrigenrator ");
  scanf("%f",&c);
  printf("You will have to pay rs %.2f\n",(a*10000)+(b*2100)+(c*8000));
 }
 else if(strcmp(name,nam2)==0)
 {
  printf("Enter quantity of air conditioner ");
  scanf("%f",&a);
  printf("Enter quantity of speaker ");
  scanf("%f",&b);
  printf("Enter quantity of refrigenrator ");
  scanf("%f",&c);
  printf("You will have to pay rs %.2f\n",(a*7500)+(b*3000)+(c*8000));
 }
 else if(strcmp(name,nam3)==0)
 {
  printf("Enter quantity of air conditioner ");
  scanf("%f",&a);
  printf("Enter quantity of speaker ");
  scanf("%f",&b);
  printf("Enter quantity of refrigenrator ");
  scanf("%f",&c);
  printf("You will have to pay rs %.2f\n",(a*10000)+(b*2700)+(c*6800));
 }
 else 
  printf("name not found\n");
}
