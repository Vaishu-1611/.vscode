#include<stdio.h>
int main ()
{
int a,b;
printf("enter pt (x,y):");
scanf("%d %d",&a,&b);
if (a==0 && b==0)
{
    printf("pt lies on origin");
}
else if (a==0)
{
    printf("pt lies Y axis");
}
else
{
    printf("pt lies X axis");
}
return 0;
}