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

    printf("enter date a (day month year):\n");
    scanf("%d %d %d",&a.day,&a.month,&a.year);
    printf("enter date b (day month year):\n");
    scanf("%d %d %d",&b.day,&b.month,&b.year);

    printf(" the 1st date is %d/%d/%d \n",a.day,a.month,a.year);
    printf(" the 2st date is %d/%d/%d \n",b.day,b.month,b.year);

    bool flag=true;
    if(a.day!=b.day) flag = false;
    if(a.month!=b.month) flag = false;
    if(a.year!=b.year) flag = false;

    if (flag==true)
    {
        printf("Date a and b are equal\n");
    }
    else
    {
        printf("Date a and b are not equal\n");
    }

    date c;
    c=a;

    bool Flag=true;
    if(a.day!=c.day) Flag = false;
    if(a.month!=c.month) Flag = false;
    if(a.year!=c.year) Flag = false;

    if (Flag==true)
    {
        printf("Date a and c are equal\n");
    }
    else
    {
        printf("Date a and c are not equal\n");
    }
    return 0;
}