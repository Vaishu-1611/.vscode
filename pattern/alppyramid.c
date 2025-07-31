#include<stdio.h>
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int nsp=n-1;
    for (int i = 1; i <= n; i++)
    {
        int a=1;
        int x=i-1;
        for(int j=1; j <=nsp; j++)
        {
            printf(" ");
        }
        nsp--;
        for (int k=1;k<=i;k++)
        {
        int d=a+64;
        char ch=(char)d;
        {
            printf("%c", ch);
        }
        a++;
        }
        for (int l=i-1;l>=1;l--)
        {
        int y=x+64;
        char CH=(char)y;
        {
            printf("%c", CH);
        }
        x--;
        }
        printf("\n");
    }
    return 0;
}