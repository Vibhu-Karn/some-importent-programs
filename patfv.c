/* to print pattern like
*     *
 *   *
  * *
   *    */
 #include<stdio.h>
 void main()
 {
  int n,d,e;
  d=0;
  printf("Enter the no.  ");
  scanf("%d",&n);
  e=n;
  printf("\n");
  if(n>5)
  {
   if(n%2!=0)
   {
    while(e!=-1)
    {
     for(int c=0;c<d;c++)
      printf(" ");
     printf("*");
     for(int a=0;a<e;a++)
      printf(" ");
    printf("*");
    printf("\n");
    d++;
    e=e-2;
   }
   for(int c=0;c<d;c++)
    printf(" ");
   printf("*");
   printf("\n");
  }
  if(n%2==0)
  {
   while(e!=-2)
   {
    for(int c=0;c<d;c++)
     printf(" ");
    printf("*");
    for(int a=0;a<e;a++)
     printf(" ");
    printf("*");
    printf("\n");
    d++;
    e=e-2;
   }
  }
 }
 else
  printf("Enter no. larger than 5\n");
}
