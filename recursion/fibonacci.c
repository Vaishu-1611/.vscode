#include<stdio.h>
int fib(int n)
{
    if(n==1||n==0) return n; // Base case: fib(0) = 0, fib(1) = 1
    int Ans1=fib(n-1);
    int Ans2=fib(n-2);
    int Ans=Ans1+Ans2;
    return Ans;
}
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    fib(n);
    printf("nth fibonnaci is: %d ",fib(n));
    return 0;
}