#include<stdio.h>
#include<stdbool.h>
int main()
{
    int arr[5]={4,2,3,4,4};
    int x=4;
    for (int i=0;i<=4;i++)
    {
        if(arr[i]==x)
        {
            printf("Element %d found at index %d\n", x, i);
        }
    }
    return 0;
}