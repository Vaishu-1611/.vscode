#include<stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements or array:");
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<=n-1;i++)
    {
        sum=sum+arr[i];
    }
    printf("sum of all elements of the array is %d\n",sum);
    return 0;
}