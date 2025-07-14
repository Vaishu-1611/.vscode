#include<stdio.h>
int main()
{
    int n,LD=0,sum=0;
    printf("enter a number");
    scanf("%d",&n);
    while (n!=0)
    {
    LD=n%10;
    {
        if(LD%2==0)
        {
            sum=sum+LD;
        }
    }
    n=n/10;
    }
    printf("sum of all even digits of the number is %d",sum);
    return 0;
    
}