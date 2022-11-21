#include<stdio.h>
main()
{
	int i,range;
	printf("\n enter renge=");
	scanf("%d",&range);
	for(i=1;i<=range;i++)
	{
		if(i%3==0 && i%5==0)
		{
			printf("\n no is divisible by 3 or 5 =%d",i);
		}
	}
}
