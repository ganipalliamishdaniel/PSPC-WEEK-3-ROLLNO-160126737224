#include<stdio.h>
int main()
{
	char ch;
	printf("enter the alphabet to check whether it is a vowel or consonant:");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'|| ch=='i'|| ch=='o'||ch=='u')
	{
		printf("%c is a vowel:",ch);
	}
	else if(ch=='A'||ch=='E'|| ch=='I'|| ch=='O'||ch=='U')
	{
		printf("%c is a vowel:",ch);
	}
	else
	{
		printf("%c is a consonant",ch);
	}
}
