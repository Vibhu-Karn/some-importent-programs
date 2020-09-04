// to write name in vertical oder
#include<stdio.h>
void a(int no1)
{
 int i1,a1,b1,c1,e1;
 i1=1;
 c1=1;
 b1=no1;
 if(no1>5)
 {
  while(i1!=no1+2)
  {
   if(i1==1)
   {
    for(a1=0;a1<b1;a1++)
     printf(" ");
    printf("*");
    printf("\n");
    b1--;
    i1++;
   }
   if(i1!=no1/2+1)
   {
    for(a1=0;a1<b1;a1++)
     printf(" ");
    printf("*");
    for(e1=0;e1<c1;e1++)
     printf(" ");
    printf("*");
    printf("\n");
    i1++;
    b1--;
    c1=c1+2;
   }
   if(i1==no1/2+1)
   {
    for(e1=0;e1<b1;e1++)
     printf(" ");
    printf("*");
    for(e1=0;e1<c1;e1++)
     printf("*");
    printf("*");
    printf("\n");
    i1++;
    b1--;
    c1=c1+2;
   }
  }
 }
 else
  printf("Enter the no. greater than 5\n");
 printf("\n");
}
void b(int no1)
{
  int i1=0;
 if(no1%2!=0)
 {
  while(i1<no1+4)
  {
   if(i1==0)
   {
    printf("*");
    for(int a1=0;a1<no1;a1++)
     printf("*");
    printf("*");
    printf("\n");
    i1++;
   }
   if(i1==(no1+3)/2)
   {
    printf("*");
    for(int a1=0;a1<no1;a1++)
     printf("*");
    printf("*");
    printf("\n");
    i1++;
   }
   else
   {
    printf("*");
    for(int a1=0;a1<no1+1;a1++)
     printf(" ");
    printf("*");
    printf("\n");
    i1++;
   }
   if(i1==no1+3)
   {
    printf("*");
    for(int a1=0;a1<no1;a1++)
     printf("*");
    printf("*");
    printf("\n");
    i1++;
   }
  } 
 }
 else
 {
  while(i1<no1+3)
  {
   if(i1==0)
   {
    printf("*");
    for(int a1=0;a1<no1;a1++)
     printf("*");
    printf("*");
    printf("\n");
    i1++;
   }
   if(i1==(no1+3)/2)
   {
    printf("*");
    for(int a1=0;a1<no1;a1++)
     printf("*");
    printf("*");
    printf("\n");
    i1++;
   }
   else
   {
    printf("*");
    for(int a1=0;a1<no1+1;a1++)
     printf(" ");
    printf("*");
    printf("\n");
    i1++;
   }
   if(i1==no1+2)
   {
    printf("*");
    for(int a1=0;a1<no1;a1++)
     printf("*");
    printf("*");
    printf("\n");
    i1++;
   }
  } 
 }
 printf("\n");
}
void c(int no1)
{
 int i1=0;
 while(i1<no1)
 {
  if(i1==0||i1==no1-1)
  {
   printf(" ");
   for(int a1=0;a1<no1;a1++)
    printf("*");
   printf("\n");
   i1++;
  }
  else
  {
   printf("*");
   printf("\n");
   i1++;
  }
 }
 printf("\n");
}
void d(int no1)
{
 int i1=0;
 while(i1<no1+2)
 {
  if(i1==0||i1==no1+1)
  {
   printf("*");
   for(int a1=0;a1<no1;a1++)
    printf("*");
   printf("*");
   printf("\n");
   i1++;
  }
  else
  {
   printf("*");
   for(int a1=0;a1<no1+1;a1++)
    printf(" ");
   printf("*");
   printf("\n");
   i1++;
  }
 }
 printf("\n");
}
void e(int no1)
{
 int i1=0;
 if(no1%2!=0)
 {
  while(i1<no1+2)
  {
   if(i1==0)
   {
    for(int a1=0;a1<no1+2;a1++)
     printf("*");
    printf("\n");
    i1++;
   }
   if(i1==(no1/2)+1)
   {
    for(int a1=0;a1<no1;a1++)
     printf("*");
    printf("\n");
    i1++;
   }
   else
   {
    printf("*");
    printf("\n");
    i1++;
   }
   if(i1==no1+1)
   {
    for(int a1=0;a1<no1+2;a1++)
     printf("*");
    printf("\n");
    i1++;
   }
  }
 }
 else
 {
  while(i1<no1+1)
  {
   if(i1==0)
   {
    for(int a1=0;a1<no1+2;a1++)
     printf("*");
    printf("\n");
    i1++;
   }
   if(i1==no1/2)
   {
    for(int a1=0;a1<no1;a1++)
     printf("*");
    printf("\n");
    i1++;
   }
   else
   {
    printf("*");
    printf("\n");
    i1++;
   }
   if(i1==no1)
   {
    for(int a1=0;a1<no1+2;a1++)
     printf("*");
    printf("\n");
    i1++;
   }
  }
 }
 printf("\n");
}
void f(int no1)
{
 int i1=0,b1;
 b1=no1;
 if(no1%2!=0)
 {
  while(i1<no1+2)
  {
   if(i1==0)
   {
    for(int a1=0;a1<b1+2;a1++)
     printf("*");
    printf("\n");
    i1++;
   }
   if(i1==(no1/2)+1)
   {
    for(int a1=0;a1<b1;a1++)
     printf("*");
    printf("\n");
    i1++;
   }
   else
   {
    printf("*");
    printf("\n");
    i1++;
   }
  }
 }
 else
 {
  while(i1<no1+1)
  {
   if(i1==0)
   {
    for(int a1=0;a1<b1+2;a1++)
     printf("*");
    printf("\n");
    i1++;
   }
   if(i1==no1/2)
   {
    for(int a1=0;a1<b1;a1++)
     printf("*");
    printf("\n");
    i1++;
   }
   else
   {
    printf("*");
    printf("\n");
    i1++;
   }
  }
 }
 printf("\n");
}
void g(int no1)
{
 int i1=0,b1;
 b1=no1;
 while(i1<no1+1)
 {
  if(i1==0)
  {
   printf(" ");
   for(int a1=0;a1<b1+(b1/2);a1++)
    printf("*");
   printf("\n");
   i1++;
  }
  if(i1<no1/2)
  {
   printf("*");
   printf("\n");
   i1++;
  }
  if(i1==no1/2)
  {
   printf("*");
   for(int a1=0;a1<b1-2;a1++)
    printf(" ");
   for(int c1=0;c1<(b1/2)+2;c1++)
    printf("*");
   printf("\n");
   i1++;
  }
  if(i1>no1/2)
  {
   printf("*");
   for(int a1=0;a1<b1;a1++)
    printf(" ");
   printf("*");
   for(int c1=0;c1<(b1/2)-2;c1++)
    printf(" ");
   printf("*");
   printf("\n");
   i1++;
  }
  if(i1==no1)
  {
   printf(" ");
   for(int a1=0;a1<b1-1;a1++)
    printf("*");
   printf("\n");
   i1++;
  }
 }
 printf("\n");
}
void h(int no1)
{
 int a1,i1;
 i1=1;
 if(no1>7)
 {
  if(no1%2!=0)
  {
   while(i1!=no1+1)
   {
    if(i1!=no1/2+1)
    {
     printf("*");
     for(a1=0;a1<no1;a1++)
      printf(" ");
     printf("*");
     printf("\n");
     i1++;
    }
    else
    {
     for(a1=0;a1<no1+2;a1++)
      printf("*");
     printf("\n");
     i1++;
    }
   }
  }
  else
  {
   while(i1!=no1)
   {
    if(i1!=no1/2)
    {
     printf("*");
     for(a1=0;a1<no1;a1++)
      printf(" ");
     printf("*");
     printf("\n");
     i1++;
    }
    else
    {
     for(a1=0;a1<no1+2;a1++)
      printf("*");
     printf("\n");
     i1++;
    }
   }
  }
 }
 else
  printf("Enter no. greater than 7\n");
 printf("\n");
}
void i(int no1)
{
 int i1,b1;
 i1=1;
 b1=no1;
 while(i1!=no1+1)
 {
  if(no1%2==0)
  {
   if(i1==1||i1==no1)
   {
    for(int a1=0;a1<b1+1;a1++)
     printf("*");
    printf("\n");
    i1++;
   }
   else
   {
    for(int a1=0;a1<b1/2;a1++)
     printf(" ");
    printf("*");
    printf("\n");
    i1++;
   }
  }
  else
  {
   if(i1==1||i1==no1)
   {
    for(int a1=0;a1<b1;a1++)
     printf("*");
    printf("\n");
    i1++;
   }
   else
   {
    for(int a1=0;a1<b1/2;a1++)
     printf(" ");
    printf("*");
    printf("\n");
    i1++;
   }
  }
 }
 printf("\n");
}
void j(int no1)
{
 int i1=0,b1=0,d1;
 d1=no1/2;
 if(no1%2!=0)
 {
  while(i1<no1+2)
  {
   if(i1==0)
   {
    printf("*");
    for(int a1=0;a1<no1;a1++)
     printf("*");
    printf("*");
    printf("\n");
    i1++;
   }
   if(i1<d1+2)
   {
    for(int a1=0;a1<(no1/2)+1;a1++)
     printf(" ");
    printf("*");
    printf("\n");
    i1++;
   }
   else
   {
    for(int a1=0;a1<b1;a1++)
     printf(" ");
    printf("*");
    for(int c1=0;c1<d1;c1++)
     printf(" ");
     printf("*");
    printf("\n");
    d1--;
    b1++;
    i1++;
   }
  }
 }
 else
 {
  while(i1<no1+2)
  {
   if(i1==0)
   {
    printf("*");
    for(int a1=0;a1<no1;a1++)
     printf("*");
    printf("*");
    printf("\n");
    i1++;
   }
   if(i1<d1+1)
   {
    for(int a1=0;a1<(no1/2)+1;a1++)
     printf(" ");
    printf("*");
    printf("\n");
    i1++;
   }
   else
   {
    for(int a1=0;a1<b1;a1++)
     printf(" ");
    printf("*");
    for(int c1=0;c1<d1;c1++)
     printf(" ");
    printf("*");
    printf("\n");
    d1--;
    b1++;
    i1++;
   }
  }
 } 
 printf("\n");
}
void k(int no1)
{
 int a1,b1,c1,s1,d1;
 d1=1;
 b1=no1;
 c1=no1;
 while(c1=no1+1)
 {
  if(b1>=0)
  {
   for(a1=0;a1<1;a1++)
    printf("*");
   for(s1=0;s1<b1;s1++)
    printf(" ");
   for(a1=0;a1<1;a1++)
    printf("*");
   printf("\n");
   b1--;
   c1--;
  }
  else
  {
   if(d1<=no1)
   {
    for(a1=0;a1<1;a1++)
     printf("*");
    for(s1=0;s1<d1;s1++)
     printf(" ");
    for(a1=0;a1<1;a1++)
     printf("*");
    printf("\n");
    d1++;
    c1++;
   }
   else
    break;
  }
 }
 printf("\n");
}
void l(int no1)
{
 int i1=0;
 while(i1<no1)
 {
  if(i1==no1-1)
  {
   for(int a1=0;a1<no1+2;a1++)
    printf("*");
   printf("\n");
   i1++;
  }
  else
  {
   printf("*");
   printf("\n");
   i1++;
  }
 }
 printf("\n");
}
void m(int no1)
{
 int i1,a1,b1,e1,q1,w1,t1,y1;
 i1=1;
 b1=1;
 y1=1;
 e1=no1;
 if(no1%2!=0)
 {
  while(e1!=-1)
  {
   if(i1==1||i1==2)
   {
    for(a1=0;a1<b1;a1++)
     printf("*");
    for(w1=0;w1<e1;w1++)
     printf(" ");
    for(q1=0;q1<b1;q1++)
     printf("*");
    b1++;
    i1++; 
    e1=e1-2;
   }
   else
   {
    for(a1=0;a1<1;a1++)
     printf("*");
    for(t1=0;t1<y1;t1++)
     printf(" ");
    for(a1=0;a1<1;a1++)
     printf("*");
    for(w1=0;w1<e1;w1++)
     printf(" ");
    for(a1=0;a1<1;a1++)
     printf("*");
    for(t1=0;t1<y1;t1++)
     printf(" ");
    for(a1=0;a1<1;a1++)
     printf("*");
    y1++;
    e1=e1-2;
    i1++;
   }
   printf("\n");
  }
  for(a1=0;a1<1;a1++)
   printf("*");
  for(t1=0;t1<y1;t1++)
   printf(" ");
  for(a1=0;a1<1;a1++)
   printf("*");
  for(t1=0;t1<y1;t1++)
   printf(" ");
  for(a1=0;a1<1;a1++)
   printf("*");
  printf("\n");
 }
 if(no1%2==0)
 {
  while(e1!=-2)
  {
   if(i1==1||i1==2)
   {
    for(a1=0;a1<b1;a1++)
     printf("*");
    for(w1=0;w1<e1;w1++)
     printf(" ");
    for(q1=0;q1<b1;q1++)
     printf("*");
    b1++;
    i1++; 
    e1=e1-2;
   }
   else
   {
    for(a1=0;a1<1;a1++)
     printf("*");
    for(t1=0;t1<y1;t1++)
     printf(" ");
    for(a1=0;a1<1;a1++)
     printf("*");
    for(w1=0;w1<e1;w1++)
     printf(" ");
    for(a1=0;a1<1;a1++)
     printf("*");
    for(t1=0;t1<y1;t1++)
     printf(" ");
    for(a1=0;a1<1;a1++)
     printf("*");
    y1++;
    e1=e1-2;
    i1++;
   }
   printf("\n");
  }
 }
 printf("\n");
}
void n(int no1)
{
 int i1,a1,b1,e1,c1,f1;
 i1=1;
 e1=0;
 f1=no1-1;
 if(no1>4)
 {
  while(i1!=no1+3)
  {
   if(i1==1||i1==no1+2)
   {
    printf("*");
    for(a1=0;a1<no1;a1++)
     printf(" ");
    printf("*");
    printf("\n");
    i1++;
   }
   else
   {
    printf("*");
    for(b1=0;b1<e1;b1++)
     printf(" ");
    printf("*");
    for(c1=0;c1<f1;c1++)
     printf(" ");
    printf("*");
    i1++;
    f1--;
    e1++;
    printf("\n");
   }
  }
 }
 else 
  printf("Enter no. greater than 4\n");
 printf("\n");
}
void o(int no1)
{
 int i1=0;
 while(i1<no1+1)
 {
  if(i1==0)
  {
   printf(" ");
   for(int a1=0;a1<no1;a1++)
    printf("*");
   printf("\n");
   i1++;
  }
  else
  {
   printf("*");
   for(int a1=0;a1<no1;a1++)
    printf(" ");
   printf("*");
   printf("\n");
   i1++;
  }
  if(i1==no1)
  {
   printf(" ");
   for(int a1=0;a1<no1;a1++)
    printf("*");
   printf("\n");
   i1++;
  }
 }
 printf("\n");
}
void p(int no1)
{
 int i1=0;
 while(i1<no1+3)
 {
  if(i1==0||i1==(no1/2)+1)
  {
   printf("*");
   for(int a1=0;a1<no1;a1++)
    printf("*");
   printf("*");
   printf("\n");
   i1++;
  }
  if(i1<(no1/2)+1)
  {
   printf("*");
   for(int a1=0;a1<no1+1;a1++)
    printf(" ");
   printf("*");
   printf("\n");
   i1++;
  }
  else
  {
   printf("*");
   printf("\n");
   i1++;
  }
 }
 printf("\n");
}
void q(int no1)
{
 int i1=0,c1,d1=2;
 c1=no1;
 while(i1<no1+4)
 {
  if(i1==0)
  {
   printf(" ");
   for(int a1=0;a1<no1+1;a1++)
    printf("*");
   printf("\n");
   i1++;
  }
  if(i1==no1-1)
  {
   printf("*");
   for(int a1=0;a1<no1-2;a1++)
    printf(" ");
   printf("*");
   printf("  ");
   printf("*");
   printf("\n");
   i1++;
  }
  if(i1==no1)
  {
   printf("*");
   for(int a1=0;a1<no1-1;a1++)
    printf(" ");
   printf("*");
   printf(" ");
   printf("*");
   printf("\n");
   i1++;
  }
  if(i1==no1+1)
  {
   printf(" ");
   for(int a1=0;a1<no1+1;a1++)
    printf("*");
   printf("\n");
   i1++;
  }
  if(i1>0&&i1<no1+2)
  {
   printf("*");
   for(int a1=0;a1<no1+1;a1++)
    printf(" ");
   printf("*");
   i1++;
   printf("\n");
  }
  if(i1>=no1+2)
  {
   for(int a1=0;a1<c1+2;a1++)
    printf(" ");
   printf("*");
   for(int a1=0;a1<d1;a1++)
    printf(" "); 
   printf("*"); 
   printf("\n");
   i1++;
   c1++;
   d1=d1-2;
  }
 }
 printf("\n");
}
void r(int no1)
{
 int i1=0,b1=0;
 while(i1<no1+4)
 {
  if(i1<(no1/2)+3)
  {
   if(i1==0||i1==(no1/2)+2)
   {
    printf("*");
    for(int a1=0;a1<no1;a1++)
     printf("*");
    printf("*");
    printf("\n");
    i1++;
   }
   else
   {
    printf("*");
    for(int a1=0;a1<no1+1;a1++)
     printf(" ");
    printf("*");
    printf("\n");
    i1++;
   }
  }
  else
  {
   printf("*");
   for(int a1=0;a1<b1;a1++)
    printf(" ");
   printf("*");
   printf("\n");
   i1++;
   b1+=2;
  }
 }
 printf("\n");
}
void s(int no1)
{
 int i1,a1,b1;
 i1=1;
 if(no1>7)
 {
  while(i1<=no1+1)
  {
   if(i1==1||i1==no1+1)
   {
    for(a1=0;a1<no1;a1++)
     printf("*");
    printf("\n");
    i1++;
   }
   if(i1<=no1/2)
   {
    for(a1=0;a1<1;a1++)
     printf("*");
    for(b1=0;b<(no1-1);b1++)
     printf(" ");
    printf("\n");
    i1++;
   }
   if(no1%2!=0)
   {
    if(i1==no1/2+1)
    { 
     for(a1=0;a1<no1;a1++)
      printf("*");
     printf("\n");
     i1++;
    }
   }
   else
   {
    if(i1==no1/2+1)
    { 
     for(a1=0;a1<no1;a1++)
      printf("*");
     printf("\n");
     i1++;
    }
   }
   if(i1>no1/2+1&&i1<=no1)
   {
    for(b1=0;b1<no1-1;b1++)
     printf(" ");
    for(a1=0;a1<1;a1++)
     printf("*");
    printf("\n");
    i1++;
   }
  }
 }
 else
  printf("Enter no. greater than 7\n");
 printf("\n");
}
void t(int no1)
{
 int i1=0;
 if(no1%2!=0)
 {
  while(i1<no1)
  {
   if(i1==0)
   {
    printf("*");
    for(int a1=0;a1<no1;a1++)
     printf("*");
    printf("*");
    printf("\n");
    i1++;
   }
   else
   {
    for(int a1=0;a1<(no1/2)+1;a1++)
     printf(" ");
    printf("*");
    printf("\n");
    i1++;
   }
  }
 }
 else
 {
  while(i1<no1-1)
  {
   if(i1==0)
   {
    printf("*");
    for(int a1=0;a1<no1;a1++)
     printf("*");
    printf("\n");
    i1++;
   }
   else
   {
    for(int a1=0;a1<no1/2;a1++)
     printf(" ");
    printf("*");
    printf("\n");
    i1++;
   }
  }
 }
 printf("\n");
}
void u(int no1)
{
 int i1;
 i1=1;
 if(no1>5)
 {
  while(i1!=no1+1)
  {
   if(i1!=no1)
   {
    printf("*");
    for(int b1=0;b1<no1;b1++)
     printf(" ");
    printf("*");
    i1++;
    printf("\n");
   }
   else 
   {
    printf(" ");
    for(int b1=0;b1<no1;b1++)
     printf("*");
    i1++;
    printf("\n");
   }
  }
 }
 else 
  printf("Enter the no. greater than 5\n");
 printf("\n");
}
void v(int no1)
{
 int d1,e1;
  d1=0;
  e1=no1;
  printf("\n");
  if(no1>5)
  {
   if(no1%2!=0)
   {
    while(e1!=-1)
    {
     for(int c1=0;c1<d1;c1++)
      printf(" ");
     printf("*");
     for(int a1=0;a1<e1;a1++)
      printf(" ");
    printf("*");
    printf("\n");
    d1++;
    e1=e1-2;
   }
   for(int c1=0;c1<d1;c1++)
    printf(" ");
   printf("*");
   printf("\n");
  }
  if(no1%2==0)
  {
   while(e1!=-2)
   {
    for(int c1=0;c1<d1;c1++)
     printf(" ");
    printf("*");
    for(int a1=0;a1<e1;a1++)
     printf(" ");
    printf("*");
    printf("\n");
    d1++;
    e1=e1-2;
   }
  }
 }
 else
  printf("Enter no. larger than 5\n");
 printf("\n");
}
void w(int n)
{
 int i=0,d,c=1;
 d=n/2;
 if(n%2!=0)
 {
  while(i<n)
  {
   if(i<n-(n/2)-2)
   {
    printf("*");
    for(int a=0;a<n;a++)
     printf(" ");
    printf("*");
    printf("\n");
    i++;
   }
   if(i==n-(n/2)-2)
   {
    printf("*");
    for(int a=0;a<d;a++)
     printf(" ");
    printf("*");
    for(int a=0;a<d;a++)
     printf(" ");
    printf("*");
    printf("\n");
    i++;
    d--;
   }
   if(i>n-(n/2)-2)
   {
    printf("*");
    for(int a=0;a<d;a++)
     printf(" ");
    printf("*");
    for(int a=0;a<c;a++)
     printf(" ");
    printf("*");
    for(int a=0;a<d;a++)
     printf(" ");
    printf("*");
    printf("\n");
    i++;
    d--;
    c=c+2;
   }
   if(i==n-1)
   {
    printf("*");
    for(int a=0;a<n;a++)
     printf(" ");
    printf("*");
    printf("\n");
    i++;
   }
  }
 }
 else 
 {
  while(i<n)
  {
   if(i<n-(n/2)-2)
   {
    printf("*");
    for(int a=0;a<n+1;a++)
     printf(" ");
    printf("*");
    printf("\n");
    i++;
   }
   if(i==n-(n/2)-2)
   {
    printf("*");
    for(int a=0;a<d;a++)
     printf(" ");
    printf("*");
    for(int a=0;a<d;a++)
     printf(" ");
    printf("*");
    printf("\n");
    i++;
    d--;
   }
   if(i>n-(n/2)-2)
   {
    printf("*");
    for(int a=0;a<d;a++)
     printf(" ");
    printf("*");
    for(int a=0;a<c;a++)
     printf(" ");
    printf("*");
    for(int a=0;a<d;a++)
     printf(" ");
    printf("*");
    printf("\n");
    i++;
    d--;
    c=c+2;
   }
   if(i==n-1)
   {
    printf("*");
    for(int a=0;a<n+1;a++)
     printf(" ");
    printf("*");
    printf("\n");
    i++;
   }
  }
 }
 printf("\n");
}
void x(int no1)
{
 int i1=0,b1=0,c1=0,d1=1,e1;
 c1=no1;
 e1=(no1/2)+1;
 if(no1%2==1)
 {
  while(i1<no1+2)
  {
   if(i1<no1-(no1/2))
   {
    for(int a1=0;a1<b1;a1++)
     printf(" ");
    printf("*");
    for(int a1=0;a1<c1;a1++)
     printf(" ");
    printf("*");
    printf("\n");
    i1++;
    b1++;
    c1=c1-2;
   }
   if(i1==no1-(no1/2))
   {
    for(int a1=0;a1<e1;a1++)
     printf(" ");
    printf("*");
    printf("\n");
    i1++;
    e1--;
   } 
   if(i1>no1-(no1/2))
   {
    for(int a1=0;a1<e1;a1++)
     printf(" ");
    printf("*");
    for(int a1=0;a1<d1;a1++)
     printf(" ");
    printf("*");
    printf("\n");
    i1++;
    e1--;
    d1=d1+2;
   }
  }
 }
 else
 {
  e1=no1/2;
  while(i1<no1+2)
  {
   if(i1<no1-(no1/2)+1)
   {
    for(int a1=0;a1<b1;a1++)
     printf(" ");
    printf("*");
    for(int a1=0;a1<c1;a1++)
     printf(" ");
    printf("*");
    printf("\n");
    i1++;
    b1++;
    c1=c1-2;
   }
   if(i1>=no1-(no1/2)+1)
   {
    for(int a1=0;a1<e1;a1++)
     printf(" ");
    printf("*");
    for(int a1=0;a1<d1-1;a1++)
     printf(" ");
    printf("*");
    printf("\n");
    i1++;
    e1--;
    d1=d1+2;
   }
  }
 }
 printf("\n");
}
void y(int no1)
{
 int i1=0,b1=1,c1;
 c1=no1;
 if(no1%2!=0)
 {
  while(i1<no1+2)
  {
   if(i1==0)
   {
    printf("*");
    for(int a1=0;a1<no1;a1++)
     printf(" ");
    printf("*");
    printf("\n");
    i1++;
   }
   if(i1<no1-(no1/2))
   {
    for(int a1=0;a1<b1;a1++)
     printf(" ");
    printf("*");
    for(int a1=0;a1<c1-2;a1++)
     printf(" ");
    printf("*");
    i1++;
    b1++;
    c1=c1-2;
    printf("\n");
   }
   else
   {
    for(int a1=0;a1<(no1/2)+1;a1++)
     printf(" ");
    printf("*");
    printf("\n");
    i1++;
   }
  }
 }
 else
 {
  c1=no1+1;
  while(i1<no1+3)
  {
   if(i1==0)
   {
    printf("*");
    for(int a1=0;a1<no1+1;a1++)
     printf(" ");
    printf("*");
    printf("\n");
    i1++;
   }
   if(i1<no1-(no1/2)+1)
   {
    for(int a1=0;a1<b1;a1++)
     printf(" ");
    printf("*");
    for(int a1=0;a1<c1-2;a1++)
     printf(" ");
    printf("*");
    i1++;
    b1++;
    c1=c1-2;
    printf("\n");
   }
   else
   {
    for(int a1=0;a1<(no1/2)+1;a1++)
     printf(" ");
    printf("*");
    printf("\n");
    i1++;
   }
  }
 }
 printf("\n");
}
void z(int no1)
{
 int i1=0,b1;
 b1=no1;
 while(i1<no1+2)
 {
  if(i1==0||i1==no1+1)
  {
   for(int a1=0;a1<no1+2;a1++)
    printf("*");
   printf("\n");
   i1++;
  }
  if(i1>0&&i1<no1+1)
  {
   for(int a1=0;a1<b1;a1++)
    printf(" ");
   printf("*");
   i1++;
   printf("\n");
   b1--;
  }
 }
 printf("\n");
}
void main()
{
 int no,i1=0;
 char str[100];
 printf("Enter the name ");
 gets(str);
 printf("Enter size(enter more than 7) ");
 scanf("%d",&no);
 while(str[i1]!='\0')
 {
  switch(str[i1])
  {
   case 'a' :a(no);break;
   case 'b' :b(no);break;
   case 'c' :c(no);break;
   case 'd' :d(no);break;
   case 'e' :e(no);break;
   case 'f' :f(no);break;
   case 'g' :g(no);break;
   case 'h' :h(no);break;
   case 'i' :i(no);break;
   case 'j' :j(no);break;
   case 'k' :k(no);break;
   case 'l' :l(no);break;
   case 'm' :m(no);break;
   case 'n' :n(no);break;
   case 'o' :o(no);break;
   case 'p' :p(no);break;
   case 'q' :q(no);break;
   case 'r' :r(no);break; 
   case 's' :s(no);break;
   case 't' :t(no);break;
   case 'u' :u(no);break;
   case 'v' :v(no);break;
   case 'w' :w(no);break;
   case 'x' :x(no);break;
   case 'y' :y(no);break;
   case 'z' :z(no);break;
   default :printf("\n");break;
  }
  i1++;
 }
}

