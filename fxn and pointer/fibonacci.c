#include<stdio.h>
void fib(int n)
{
    int a=0,b=1,c,i;
    if (n<=0)
    {
        printf("Please enter a positive integer\n");
        return;
    }
    else if (n==1)
    {
        printf("Fibonacci series: %d\n", a);
        return;
    }
    else if (n==2)
    {
        printf("Fibonacci series: %d %d\n", a, b);
        return;
    }
    printf("Fibonacci series: %d %d ", a, b);
    for (i = 3; i <= n; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
    return;
}
int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fib(n);
    return 0;
}