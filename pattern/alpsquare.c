#include<stdio.h>
int main()
{
    int n,a=1;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            int d=a+64;
            char ch = (char)d;
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}