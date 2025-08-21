#include<stdio.h>
int main()
{
    int arr[100];
    for(int i=0; i<100; i++)
    {
        arr[i] = i + 1; // Fill the array with numbers from 1 to 100
    }
    for(int i=0; i<100; i++)
    {
        arr[94]=3;
        if(arr[i] != (i+1))
        {
        printf("the missing element is %d\n", i+1);
        }
        else
        {
            continue;
        }
    }
    return 0;
}