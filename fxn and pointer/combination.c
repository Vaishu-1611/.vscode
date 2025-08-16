#include<stdio.h>
int ncr(int n ,int r)
{
    int nfact = 1, rfact = 1, nrfact = 1;
    for(int i = 1; i <= n; i++)
    {
        nfact =nfact* i;
    }
    for(int i = 1; i <= r; i++)
    {
        rfact =rfact* i;
    }
    for(int i = 1; i <= (n - r); i++)
    {
        nrfact =nrfact* i;
    }
    return nfact/(rfact*nrfact);
}
int main()
{
    int n,r;
    printf("enter n and r:");
    scanf("%d %d", &n, &r);
    printf("ncr of %d and %d = %d\n", n, r, ncr(n, r));
    return 0;
}