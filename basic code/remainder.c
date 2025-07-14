#include<stdio.h>
int main()
{
    int a,b;
    printf("enter values of a,b:");
    scanf("%d %d",&a,&b);
    int remainder=a%b;
    printf("remainder is :%d",remainder);
    return 0;
}