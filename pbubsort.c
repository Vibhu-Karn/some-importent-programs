// to arrange elements in ascending oder using bubble sort technique
#include<stdio.h>
#include<string.h>
void main()
{
 int n;
 printf("Enter no. of elements in array ");
 scanf("%d",&n);
 int i,j,temp=0;
 int a[n],b[n];
 printf("Enter elemts of array\n");
 char asc[11]="ascending";
 char desc[12]="descending";
 char bo[5]="both"
 char ch[12];
 for(i=0;i<n;i++)
 {
  printf("Enter element %d ",i+1);
  scanf("%d",&a[i]);
 }
 printf("You may optimise the no.s in ascending order and desending order\n");
 printf("Enter how do you wanna see this list\n");
 printf("You have 3 options\nPlease enter valid choice as 'ascending','descending' and 'both'\n");
 if(strcmp(ch,asc)==0)
 {
  printf("Sorting in ascending order\n");
  for(i=0;i<n-1;i++)
  {
   for(j=0;j<n-i;j++)
   {
    if(a[j]>a[j+1])
    {
     temp=a[j];
     a[j]=a[j+1];
     a[j+1]=temp;
    }
   }
  }
  printf("The sorted array is (ascending order) ");
  for(i=0;i<n;i++)
   printf("%d ",a[i]);
  printf("\n");
 }
 printf("Sorting in descending order\n");
 for(i=0;i<n-1;i++)
 {
  for(j=0;j<n-i;j++)
  {
   if(a[j]<a[j+1])
   {
    temp=b[j];
    b[j]=b[j+1];
    b[j+1]=temp;
   }
  }
 }
 printf("The sorted array is (descending order) ");
 for(i=0;i<n;i++)
  printf("%d ",a[i]);
 printf("\n");
}
