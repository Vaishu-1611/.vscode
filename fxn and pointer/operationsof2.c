#include<stdio.h>
int add(int x, int y)
{
    return x + y;
}
int subtract(int x, int y)
{
    return x - y;
}
int multiply(int x, int y)
{
    return x * y;
}
int divide(int x, int y)
{
    if (y != 0)
        return x / y;
    else
    {
        printf("Error: Division by zero\n");
        return 0; // Return 0 or handle error appropriately
    }
}
int remain(int x, int y)
{
    if (y != 0)
        return x % y;
    else
    {
        printf("Error: Division by zero\n");
        return 0; // Return 0 or handle error appropriately
    }
}
int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Addition: %d\n", add(a, b));
    printf("Subtraction: %d\n", subtract(a, b));
    printf("Multiplication: %d\n", multiply(a, b));
    printf("Division: %d\n", divide(a, b));
    printf("Remainder: %d\n", remain(a, b));

    return 0;
}