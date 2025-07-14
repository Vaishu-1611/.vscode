#include<stdio.h>
int main()
{
    int count=0,n;
    printf("enter the number:");
    scanf("%d",&n);
    while (n!=0)
    {
        n=n/10;
        count++ ;
    }
    printf("the number contain %d digits in it",count);
    return 0;
}