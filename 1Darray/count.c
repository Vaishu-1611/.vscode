#include<stdio.h>
int main()
{
    int arr[7]={2,6,8,4,3,0,9};
    int count=0;
    for(int i=0;i<=6;i++)
    {
        {
        int x=2;
        if(x<arr[i])
        count ++;
        }
    }
    printf("num grater than 2 in the arr are %d",count);
return 0;
}