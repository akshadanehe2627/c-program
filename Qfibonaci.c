#include<stdio.h>
main()
{
	int a=0,b=1,c,n,i;
	printf("\n enter range");
	scanf("%d",&n);
	printf("\n fibonacci series:\n");
	printf("\t%d",a,b);
	for(i=1;i<=n;i++)
	{
		c=a+b;
		printf("\t%d",c);
		a=b;
		b=c;
	}
}
