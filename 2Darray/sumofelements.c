#include<stdio.h>
int main()
{
    int a[3][4], sum = 0;
    printf("Enter the elements of the first 2D array:\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    for(int i = 0; i < 3; i++)  
    {
        for(int j = 0; j < 4; j++)
        {
            sum =sum + a[i][j];
        }
    }
    printf("The sum of the elements of the 2D array is: %d\n",sum);\
}

