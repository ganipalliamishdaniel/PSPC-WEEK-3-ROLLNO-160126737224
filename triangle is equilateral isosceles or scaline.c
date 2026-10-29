//Write a C program to find whether given triangle is scalene or isosceles or equilateral.
#include<stdio.h>
int main()
{
    int side1,side2,side3;//varaiable declaration
    printf("enter side1:");
    scanf("%d",&side1);
    printf("enter side2:");
    scanf("%d",&side2);
    printf("enter side3:");
    scanf("%d",&side3);
    if(side1==side2 && side2==side3)
    {
        printf("the triangle is equilateral");
    }
    else if(side1 == side2 || side2 == side3 || side1 == side3 )
    {
        printf("the triangle is isosceles");
    }
    else
    {
        printf("the triangle is scalene");
    }
    return 0;
}

