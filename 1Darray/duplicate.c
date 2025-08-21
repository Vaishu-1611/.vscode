#include<stdio.h>
int main()
{
    int arr[7]={2,10,3,9,3,2,8};
    int x=12;
    int TP=0;
    for(int i=0;i<=6;i++)
    {
     for(int j=i+1;j<=7;j++)
     {
        if(arr[i]==arr[j])
        printf("the duplicate num is %d \n",arr[i]);
     }
    }
    return 0;
}