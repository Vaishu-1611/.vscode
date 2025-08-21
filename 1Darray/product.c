#include<stdio.h>
int main()
{
    int n;
    int p = 1;
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
        p=p*arr[i];
    }
    printf("product of all elements of the array is %d\n",p);
    return 0;
}