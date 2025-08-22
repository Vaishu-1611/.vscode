#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the number of rows and columns of the 2D array:\n");
    scanf("%d%d",&r,&c);
    int a[r][c];
    printf("Enter the elements of the first 2D array:\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("the array is \n ");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf ("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("the transpose of the above array is \n");
    for(int i = 0; i < c; i++)  
    {
        for(int j = 0; j < r; j++)
        {
            printf ("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}