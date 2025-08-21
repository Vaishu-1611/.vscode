#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    int max=-1;
    int smax=INT_MIN;
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
        if(max<arr[i])
        max=arr[i];
    }
    printf("largest element of the array is %d \n",max);
    for(int i=0;i<=n-1;i++)
    {
        if(arr[i]!=max && smax<arr[i])
        smax=arr[i];
    }
    printf("second largest element of the array is %d",smax);
    return 0;
}