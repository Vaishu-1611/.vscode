#include<stdio.h>
int main()
{int n,x;
printf("enter n:");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
if(i==1)
{
while (x<=2*n-2)
{
printf("*");
x++;
}
printf("\n");
}
else
{
   for(int j=1;j<=n+1-i;j++)
        {
            printf("*");
        }
        for(int k=1;k<=2*i-3;k++)
        {
            printf(" ");
        }
        for(int l=1;l<=n+1-i;l++)
        {
            printf("*");
        }
        printf("\n"); 
}
}
return 0;
}