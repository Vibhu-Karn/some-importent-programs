// to develope some advance string operation
#include<stdio.h>
#include<string.h>
void main()
{
 char s[100]; // to accept the string
 printf("Enter the string ");
 gets(s);
 int a,i=0,j,k=0,l=0,m=0;
 int v[6];
 a=strlen(s);
 while(i<a)
 {
  for(j=m;s[j]!='\0';j++)
   m++;
  v[l]=j;
  k++;
  l++;
 }
 while(k>0)
 { 
  
