#include<stdio.h>
int main()
{int n,x=1;
printf("enter n:");
scanf("%d",&n);
int nsp=1;
int nst=1;
for(int i=1;i<=2*n-1;i++)
{
    printf("%d",i);
}
printf("\n");
for(int i=1;i<=n;i++)
{
int a=1;
    for(int j=1;j<=n-i;j++)
    {
        printf("%d",a);
    a++;
    }
    for(int k=1;k<=nsp;k++)
    {
        printf(" ");
        a++;
    }
    for(int j=1;j<=n-i;j++)
    {
        printf("%d",a);
        a++;
    }
    nst--;
    nsp=nsp+2;
    printf("\n");
}
return 0;
}