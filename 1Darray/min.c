#include<stdio.h>
int main()
{
    int n;
    int min=10000;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements or array:");
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++)
    {
        if(min>arr[i])
        min=arr[i];
    }
    printf("largest element of the array is %d",min);
    return 0;
}