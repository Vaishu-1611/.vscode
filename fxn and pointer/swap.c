#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a n b numbers: ");
    scanf("%d %d", &a, &b); 
    int temp;
    temp = a;
    a = b;  
    b = temp;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}