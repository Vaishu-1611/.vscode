#include<stdio.h>
void reverse (int arr[],int si,int ei)
{
    int j ;
    int i;
    for(i=si ; j=ei; i<j)
    {
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    j--;
    i++;
    }
    return;
}
int main()
{
    int arr[7]={3,5,7,8,1,0,9};
    reverse(arr,2,5);
    for(int i=0;i<=6;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
