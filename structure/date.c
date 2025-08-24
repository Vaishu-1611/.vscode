#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    typedef struct date
    {
        int day ;
        int month;
        int year;
    } date;
    date a,b;
    a.day = 5;
    a.month = 1;
    a.year = 2024;

    b.day = 6;
    b.month = 2;
    b.year = 2025;

    printf("Date a: %d/%d/%d\n",a.day,a.month,a.year);
    printf("Date b: %d/%d/%d\n",b.day,b.month,b.year);

    bool flag=true;
    if(a.day!=b.day) flag = false;
    if(a.month!=b.month) flag = false;
    if(a.year!=b.year) flag = false;

    if (flag==true)
    {
        printf("Dates are equal\n");
    }
    else
    {
        printf("Dates are not equal\n");
    }
    return 0;
}