#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("enetr opertation ((op):+,-,*,/) :");
    scanf(" %c",&op);
    if (op == '+')
    {
    int c=a+b;
    printf("addition of a and b is %d \n",c);
    }
    else if (op == '-' )
    {
     int c=a-b;
    printf("substraction of a and b is %d \n",c);
    }
    else if (op == '*')
    {
    int c=a*b;
    printf("multiplication of a and b is %d \n",c);
    }
    else if (op == '/')
    {
        if (b!=0)
        {
        int c=a/b;
        printf("division of a and b is %d \n",c);
        }
        else
        {
        printf("division by 0 is not allowed \n");
        }
    }
    else
    {
    printf("invalid operation enterd.\n");
    }
    return 0;
}