#include<stdio.h>
main()
{
  int i,fact=1,n;
  printf("\n enter n=");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    fact=fact*i;
  }
  printf("\n fact=%d",fact);
  add():
  sub();
}
void add()
{
  int a,b,c;
  printf("\n enter the two no");
  scanf("%d%d",&a,&b);
  c=a+b;
  printf("\n addition of two no,%d",c);
}
void sub()
{
  int a,b,c;
  printf("\n enter the two no");
  scanf("%d%d",&a,&b);
  c=a-b;
  printf("\n sub of two no=%d",c);
}
}
