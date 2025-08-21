#include<stdio.h>
int main()
{
    int arr[7]={2,10,3,9,4,6,8};
    int x=12;
    int TP=0;
    for(int i=0;i<=6;i++)
    {
     for(int j=i+1;j<=7;j++)
     {
        if(arr[i]+arr[j]== x)
        TP ++;
     }
    }
    printf("total num of pairs formaing 12 are %d",TP);
    return 0;
}