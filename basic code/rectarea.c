#include<stdio.h>
int main()
{
    float b,l;
    printf("enter length of rectangle:");
    scanf("%f",&l);
    printf("enter breadth of rectangle:");
    scanf("%f",&b);
    float area=l*b;
    printf("area of rectangle is:%f",area);
    return 0;
}