#include<stdio.h>
int main()
{
    int arr[7]={2,23,45,22,99,12,78};
    for(int i=0;i<=6;i++)
    {
        {
            if (i%2==0)
        {
            arr[i]=arr[i]*10;
        }
        else
        {
            arr[i]=arr[i]*2;
        }
        printf(" %d ",arr[i]);
        }
    }
    return 0;
}
