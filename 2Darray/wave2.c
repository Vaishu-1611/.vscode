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
    for(int j = 0; j < 3; j++)
    {
        if(j%2==0)
        {
            for(int i= 2; i >= 0; i--)
            {
                printf("%d ", arr[i][j]);
            }
        }
        else
        {
            for(int i = 0; i < 3; i++)
            {
                printf("%d ", arr[i][j]);
            }
        }
        
    }
    return 0;
}