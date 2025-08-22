#include<stdio.h>
int main()
{
    int arr[3][4];
    printf("Enter the elements of the 2D array:\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The elements of the 2D array are:\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}