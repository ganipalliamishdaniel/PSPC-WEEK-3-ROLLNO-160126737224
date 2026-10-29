#include<stdio.h>
int main()
{
	int a,b,c,small;
	printf("enter 3 numbers:");
	scanf("%d %d %d",&a,&b,&c);
	if(a<b&&a<c)
	{
		small=a;
	}
	else if(b<a&&b<c)
	{
		small=b;
	}
	else
	{
		small=c;
	}
	printf("the smallest of 3 numbers is %d",small);
}
