#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int target;
    printf("enter your target:");
    scanf("%d",&target);
    int i=0;
    int j=9;
    while(i<j)
{
    if (arr[i]+arr[j]==target)
    {
        printf("%d %d",arr[i],arr[j]);
        break;
    }
    else if (arr[i]+arr[j]>target)
    {
        j--;
    }
    else if (arr[i]+arr[j]<target)
    {
        i++;
    }
}
    return 0;
}