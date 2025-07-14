#include<stdio.h>
int main()
{
    int a,b,c;
    printf ("enter 3 different positive integers: ");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c)
    {
        printf("%d is gratest of three",a); 
    }
    if (b>a && b>c)
    {
        printf("%d is gratest of three",b); 
    }
    if (c>a && c>b)
    {
        printf("%d is gratest of three",c); 
    }
    return 0;
}