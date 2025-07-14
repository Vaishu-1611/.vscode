#include<stdio.h>
int main()
{
    int n,x;
    printf("enter n:");
    scanf("%d",&n);
    printf("enter x:");
    scanf("%d",&x);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=x;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}