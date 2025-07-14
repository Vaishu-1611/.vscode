#include<stdio.h>
int main()
{
    int a,b,c;
    printf ("enter 3 different positive integers: ");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b)>c && (a+c)>b && (c+b)>a)
    {
        printf ("this forms a triangle");
    }
    else
    {
    printf ("this does not forms a triangle");
    }
    return 0;
}