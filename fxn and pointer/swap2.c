#include<stdio.h>

int swap (int a, int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return a, b;
}
int main()
{
    int a,b;
    printf("enter a,b :");
    scanf("%d %d", &a,&b);
    swap (a,b);
    return 0;
}