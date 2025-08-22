#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the num of students and num of subjects : ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    printf("Enter the roll numbers and marks obtained :\n");
    for(int i = 0; i < r; i++)  
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The roll numbers and marks obtained are:\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}