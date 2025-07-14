#include<stdio.h>
int main()
{
    int s,c,l,p;
    printf("enter cost price and selling price ");
    scanf("%d %d",&c,&s);
    if (s<c)
    {
        printf("u made loss\n");
        int l=c-s;
        printf("ur loss is %d",l);
    }
    if(c<s)
    {
        printf("u made profit\n");
        int p=s-c;
        printf("ur profit is %d",p);
    }
    if(s==c)
    {
        printf("no profit no loss");
    }
    return 0;
}