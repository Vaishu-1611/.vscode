#include<stdio.h>
int main()
{
    int arr[7]={2,23,45,22,99,12,78};
    int s1=0;
    int s2=0;
    int diff;
    for(int i=0;i<=6;i++)
    {
        {
            if (i%2==0)
        {
            s1=s1+arr[i];
        }
        else
        {
            s2=s2+arr[i];
        }
        diff=s1-s2;
        }
    }
    printf("sum of even indices element is %d \n",s1);
    printf("sum of odd indices element is %d \n ",s2);
    printf(" diff of the sum is %d ",diff);
    return 0;
}
