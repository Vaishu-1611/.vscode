#include<stdio.h>
int main()
{
    int a;
    printf("enter a positive number:");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("entered number is even");
    }
    else 
    {
        printf("entered number is odd");
    }
    return 0;
}