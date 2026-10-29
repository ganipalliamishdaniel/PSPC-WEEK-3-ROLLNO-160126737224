//Write a C program to check whether triangle is valid or not if angles are given.

#include<stdio.h>
int main()

{
    int a,b,c,x;//variable declaration
    printf("Angle a:");
    scanf("%d",&a);
    printf("Angle b:");
    scanf("%d",&b);
    printf("Angle c:");
    scanf("%d",&c);
    x=a+b+c;
    if(x=180)
    {
      printf("triangle is valid") ;
    }
    else
    {
       printf("triangle is not valid");
    }
             return 0;
 
}
