#include <stdio.h>
int main() 
{
	int d,y,m,r;
	printf("enter days:");
	scanf("%d",&d);
	y=d/365;
	m=(d%365)/30;
	r=(d%365)%30;
	printf("years:%d\n",y);
	printf("months:%d\n",m);
	printf("remaing days:%d\n",r);
	
}
