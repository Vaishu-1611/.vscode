#include<stdio.h>
int main()
{
    char arr[]="my name is vaishnavi\0";
    int i=0;
    while(arr[i]!='\0')
    {
        printf("%c",arr[i]);
        i++;
    }
}