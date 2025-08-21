#include<stdio.h>
int main()
{
    int arr[7]={2,10,3,9,4,6,8};
    int x=22;
    int TP=0;
    for(int i=0;i<=6;i++)
    {
     for(int j=i+1;j<=7;j++)
     {
        for(int k=1+j;k<=8;k++)
        {
        if(arr[i]+arr[j]+arr[k]== x)
        TP ++;
        }
     }
    }
    printf("total num of triplets formaing %d are %d",x,TP);
    return 0;
}