#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int a=0;
    for (int i=2;i<=n-1;i++)
    {
        if (n%i==0)
        {
            a=1;
            break;
        }
    }
    if (a==0)
    {
        printf("%d is prime number \n",n);
    }
    else if (a==1)
    {
        printf("%d is nither prime nor composit number \n",n);
    }
    else
    {
        printf("%d is composit number \n",n);
    }
    return 0;
}