#include<stdio.h>
void primefac(int n)
{
    while (n%2==0)
    {
        printf("%d ",2);
        n=n/2;
    }
    for (int i=3;i*i<=n;i=i+2)
    {
        while(n%i==0)
        {
            printf("%d ",i);
            n=n/i;
        }
    }
    if (n>2)
    {
        printf("%d ",n);
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("prime factors of %d are: ",n);
    primefac(n);
    printf("\n");
    return 0;
}