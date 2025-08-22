#include<stdio.h>
int main()
{
    int arr[3][3];
    printf("Enter the elements of the 2D array:\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The elements of the 2D array are:\n");
    for(int i = 0; i < 3; i++)
    {
        if(i%2==0)
        {
            for(int j = 0; j < 3; j++)
            {
                printf("%d ", arr[i][j]);
            }
        }
        else
        {
            for(int j = 2; j >= 0; j--)
            {
                printf("%d ", arr[i][j]);
            }
        }
        
    }
    return 0;
}