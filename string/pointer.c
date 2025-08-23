#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="hello";
    char *ptr=str;
    int i=0;
    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        i++;
        ptr++;
    }
    printf("\nLength of the string is: %d\n", i);
    return 0;
}