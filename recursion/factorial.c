#include<stdio.h>
int factorial(int n)
{
    if(n==1) return 1; // Base case: factorial of 1 is 1
    if(n==0) return 1; // Base case: factorial of 0 is 1
    if(n < 0) return -1; // Factorial is not defined for negative numbers
    return n * factorial(n - 1);   
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int fact=factorial(n);
    printf("Factorial of %d is %d\n", n, fact);
    return 0;
}