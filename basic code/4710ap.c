#include<stdio.h>
int main()
{
    int n;
    printf("enter number of terms:");
    scanf("%d",&n);
    {for(int i=4;i<=3*n+1;i=i+3)
    printf("%d \n",i);
    }
    return 0;
}