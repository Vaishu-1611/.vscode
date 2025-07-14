#include<stdio.h>
int main()
{
    int n,r=0,LD=0;
    printf("enter a number:");
    scanf("%d",&n);
    while (n!=0)
    {
        LD=n%10;
        r=LD+r;
        r=r*10;
        n=n/10;
    }
    r=r/10;
    printf("reverse of the number is %d",r);
    return 0;
}