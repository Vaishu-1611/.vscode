#include<stdio.h>
int main()
{
    int a[3][4], max = 0,min=100000;
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
            if(a[i][j]>max)
                max=a[i][j];
            if(a[i][j]<min)
                min=a[i][j];
        }
    }
    printf("The largerst elements of the 2D array is: %d\n",max);
    printf("The smallest elements of the 2D array is: %d\n",min);
    return 0;
}

