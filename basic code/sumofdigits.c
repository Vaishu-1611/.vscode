#include<stdio.h>
int main()
{
    int LD=0,sum=0,n;
    printf("enter the number:");
    scanf("%d",&n);
    while (n!=0)
    {
       LD=n%10;
       sum=sum+LD;
       n=n/10; /* code */
    }
    printf("te sum of all digits of the number is %d",sum);
    return 0;
    
}