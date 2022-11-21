#include<stdio.h>
#include<string.h>
main()
{
	//reverse string without using library fumction()
	char s1[20];
	int i,len;
	printf("\n enter the string=");
	scanf("%s",&s1);
	len=strlen(s1);
	for(i=len-1;i>=0;i--)
	{
		printf("%c",s1[i]);
	}
}
