#include<stdio.h>
int main()
{
    int m,n,p,q;
    printf("Enter the number of rows(m) and columns(n) of the first 2D array:\n");
    scanf("%d%d",&m,&n);
    printf("Enter the number of rows(p) and columns(q) of the second 2D array:\n");
    scanf("%d%d",&p,&q);
    if(n!=p)
    {
        printf("Matrix multiplication is not possible\n");
        return 0;
    }
    int a[m][n], b[p][q];
    printf("Enter the elements of the first 2D array:\n");
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of the second 2D array:\n");
    for(int i = 0; i < p; i++)  
    {
        for(int j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    int mul[m][q];
    printf("The multiplication of the two 2D arrays is:\n");
    for(int i = 0; i < m; i++)  
    {
        for(int j = 0; j < q; j++)
        {
            mul[i][j] = 0;
            for(int k = 0; k < n; k++)
            {
                mul[i][j] = mul[i][j] + (a[i][k] * b[k][j]);
            }
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}