// to search a key element in a given array using binary search technique
#include<stdio.h>
#include<stdlib.h>
void main()
{
 int n,low,mid,high,i,key;
 printf("Enter no. of elements in array ");
 scanf("%d",&n);
 printf("Enter the key element ");
 scanf("%d",&key);
 int a[n];
 printf("Enter elements in array in ascending oder\n");
 for(i=0;i<n;i++)
 {
  printf("Enter element %d ",i+1);
  scanf("%d",&a[i]);
 }
 low=0;
 high=n-1;
 while(low<=high)
 {
  mid=(low+high)/2;
  if(a[mid]==key)
  {
   printf("Element is found at position %d\n",mid+1);
   exit(0);
  }
  else if(a[mid]>key)
   high=mid-1;
  else if(a[mid]<key)
   low=mid+1;
 }
 printf("Element is not present in array\n");
}
