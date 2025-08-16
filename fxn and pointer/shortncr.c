#include<stdio.h>
int fact(int n)
{
    int fact=1;
    for (int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n,r;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);
    int ncr = fact(n) / (fact(r) * fact(n - r));
    printf("nCr of %d and %d is %d\n", n, r, ncr);
    return 0;
}