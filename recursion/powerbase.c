#include<stdio.h>
int power(int a,int b)
{
    if (b==0) return 1;
    int recpower=a*power(a,b-1);
    return recpower;
}
int main()
{
    int a,b;
    printf("enter a(base) and b(power): ");
    scanf("%d %d",&a,&b);
    int p=power(a,b);
    printf("a(base) to the power b:%d ",p);
    return 0;
}