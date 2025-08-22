#include<stdio.h>
int main()
{
    int arr[5][5];
    int x;
    printf("enter the value of x:");
    scanf("%d",&x);
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ",x );
        }
        printf("\n");
    }
    return 0;
}