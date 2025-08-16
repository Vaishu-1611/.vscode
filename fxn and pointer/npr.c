#include<stdio.h>
int fact(int n)
{
    int fact=1;
    for(int i=1; i<=n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main ()
{
    int n, r;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);
    int npr = fact(n) / (fact(n - r));
    printf("nPr of %d and %d is %d\n", n, r, npr);
    return 0;
}