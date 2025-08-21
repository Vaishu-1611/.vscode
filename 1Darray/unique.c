#include<stdio.h>
#include<stdbool.h>
int main()
{
    int arr[7]={2,3,4,5,4,3,2};
    for(int i=0;i<=6;i++)
    {
        bool flag=false;
     for(int j=1+i;j<=6;j++)
     {
        if(arr[i]==arr[j])
        {
            flag = true;
        }
     }
     if (flag ==false)
     {
        printf("%d ",arr[i]);
        break;
    }
    }
    return 0;
}