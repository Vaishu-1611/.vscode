#include<stdio.h>
fac(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("factorial of %d is:%d ", n, fac(n));
    return 0;
}