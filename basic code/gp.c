#include<stdio.h>
int main()
{
    int n,a=1;
    printf("enter number of terms:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {printf("%d ",a);
    a=a*2;
    }
    return 0;
}