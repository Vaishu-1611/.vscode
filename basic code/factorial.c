#include<stdio.h>
int main()
{
    int n,f=1,i;
    printf("enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("factorial of n is %d",f);
    return 0;
}