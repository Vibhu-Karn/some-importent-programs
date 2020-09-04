/* to built user defined funtion to calculate length,concat two strings and to compare two strings*/
#include<stdio.h>
int length(char a[])
{
 int len=0;
 while(a[len]!='\0')
  len++;
 return len;
}
void concat(char a[],char b[])
{
 int len=0,i,j;
 i=length(a);
 for(j=0;b[len]!='\0';i++,j++)
 {
  a[i]=b[j];
  len++;
 }
 a[i]='\0';
 printf("String after concatenation is %s\n",a);
}
int compare(char b[],char c[])
{
 int i,j,k;
 i=length(b);
 j=length(c);
 if(i==j)
 {
  for(k=0;k<i;k++)
  {
   if(b[k]==c[k]);
   else
    break;
  }
  return 0;
 }
 else
  return 0;
}
void main()
{
 printf("Enter 3 stings\n");
 int i,j;
 char a[50],b[50],c[50];
 gets(a);
 gets(b);
 gets(c);
 i=length(a);
 j=compare(a,c);
 printf("Length of first string is %d\n",i);
 concat(a,b);
 if(j==0)
  printf("Both strings aren't same\n");
 else
  printf("Both strings are same\n");
}
