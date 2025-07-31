#include<stdio.h>
int main()
{int n,x=1;
printf("enter n:");
scanf("%d",&n);
int nsp=1;
int nst=1;
for(int i=1;i<=2*n-1;i++)
{
    if(i<=n)
{
    printf("%d",i);
}
else
{
    printf("%d",2*n-i);
}
}
printf("\n");
for(int i=1;i<=n;i++)
{
int a=0;
{
    if(a<n-1)
{
    a++;
}
else
{
   a--;
}
    for(int j=1;j<=n-i;j++)
    {
        printf("%d",a);
        a++;
    }
    for(int k=1;k<=nsp;k++)
    {
        printf(" ");
    }
    for(int j=1;j<=n-i;j++)
    { 
        a--;
        printf("%d",a);
    }
    nst--;
    nsp=nsp+2;
    printf("\n");
}
}
return 0;
}