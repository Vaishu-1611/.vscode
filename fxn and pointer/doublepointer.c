#include<stdio.h>
int main()
{
    int a=25;
    int *x=&a;
    int **y=&x;
    int ***z=&y;
    printf("Value of a: %d\n", a);
    printf("Value of a using pointer x: %d\n", *x);
    printf("Value of a using double pointer y: %d\n", **y); 
    printf("Value of a using triple pointer z: %d\n", ***z);
    printf("Address of a: %p\n", &a);    
    printf("Address of x: %p\n", &x);
    printf("Address of y: %p\n", &y);
    printf("Address of z: %p\n", &z);
    return 0;
}