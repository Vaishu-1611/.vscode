#include<stdio.h>
int summ(int n)
{
    if (n == 0) return 0; // Base case: sum of 0 is 0
    return n+summ(n - 1);   
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum=summ(n);
    printf("sum of %d numbers is %d\n", n, sum);
    return 0;
}