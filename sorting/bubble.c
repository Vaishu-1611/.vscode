#include<stdio.h>
int main()
{
    int arr[7]={6,4,2,3,8,9,1};
    int n=7;
    for (int i=0;i<n;i++)
{
    printf("%d ",arr[i]);
}
for (int i=0;i<=n-1;i++)
{
    for(int j=0;j<=n-2;j++)
    {
        if(arr[j]>arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
printf("\n");
for (int i=0;i<=n-1;i++)
{
    printf("%d ",arr[i]);
}
return 0;
}