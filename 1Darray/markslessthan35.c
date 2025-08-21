#include<stdio.h>
int main()
{
int arr[10]={ 91,34, 56, 78, 23, 45, 67, 89, 12, 11, 10 };
    for (int i = 0; i<=9; i++)
    {
        if (arr[i] < 35)
        {
             printf("Roll Number of students who have marks less than 35: %d\n", i + 1);
            
        }
    }
    return 0;
}