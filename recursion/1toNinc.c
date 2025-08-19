#include<stdio.h>
void inc(int x,int n)
{
    if (x>n) return ;
    printf("%d ",x);
    inc(x+1,n);
    return;
}
int main ()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    inc(1,n);
    return 0;
}