#include<stdio.h>
int main()
{int n;
printf("enter n:");
scanf("%d",&n);
int nsp=1;
int nst=1;
{
int a=1;
for(int i=1;i<=2*n-1;i++)
{
    int d=a+64;
    char ch=(char)d;
    printf("%c",ch);
    a++;
}
}
printf("\n");
for(int i=1;i<=n;i++)
{
    int a=1;
    for(int j=1;j<=n-i;j++)
    {
    int d=a+64;
    char ch=(char)d;
    printf("%c",ch);
    a++;
    }
    for(int k=1;k<=nsp;k++)
    {
        printf(" ");
        a++;
    }
    for(int j=1;j<=n-i;j++)
    {
    int d=a+64;
    char ch=(char)d;
    printf("%c",ch);
    a++;
    }
    nst--;
    nsp=nsp+2;
    printf("\n");
}
return 0;
}