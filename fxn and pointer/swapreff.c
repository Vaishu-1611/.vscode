#include<stdio.h>
void swap(int*x,int*y)
{
int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("After swapping: a = %d, b = %d\n", *x+, *y);
}
int main()
{
    int a=5,b=3;
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a,&b);
    return 0; 
}