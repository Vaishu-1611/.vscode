#include<stdio.h>
int main()
{
    int arr[5];
    for (int i=0;i<= 4;i++)
    {
        printf("Enter element %d: ", i+1 );
        scanf("%d", &arr[i]);
    }
    printf("The elements in the array are:\n");
    for (int i=0;i<=4;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("the reverse of the array is:\n");
    for (int i=4;i>=0;i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}