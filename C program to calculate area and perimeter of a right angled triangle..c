//C program to calculate area and perimeter of a right angled triangle.
#include<stdio.h>
#include<math.h>
int main()
{
    float h,b,hyp,perimeter;
    printf("enter height:");
    scanf("%f",&h);
    printf("enter base:");
    scanf("%f",&b);
    hyp=sqrt(h*h+b*b);
    perimeter=h+b+sqrt(h*h+b*b);
    printf("the hypotenuse of right angled traianle is:%f\n",hyp);
    printf("the perimeter of right angled triangle is:%f\n",perimeter);
    
}

