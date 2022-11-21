#include<stdio.h>
main()
{
	int i,n,r,sum=0,temp;
	printf("enter no=");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	if(temp==sum)
	{
		printf("\n it is pallindrome number");
	}
	else
	{
		printf("\n it is not palindrome number");
	}
	
}
