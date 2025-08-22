#include<stdio.h>
int main()
{
    int a[3][4], b[3][4], sum[3][4];
    printf("Enter the elements of the first 2D array:\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of the second 2D array:\n");
    for(int i = 0; i < 3; i++)  
    {
        for(int j = 0; j < 4; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("The sum of the two 2D arrays is:\n");
    for(int i = 0; i < 3; i++)  
    {
        for(int j = 0; j < 4; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}