#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    puts("enter a string:");
    scanf("%[^\n]",str);
    int size=0;
    int k=0;
    while(str[k]!='\0')
    {
        size++;
        k++;
    }
    int a=size-1;
    printf("The size of the string is: %d\n", size);
    int i=0; int j=a;
    printf("The reverse of the string is: ");
    for(i=0; j=a; i<=j)
    {
        char temp=str[i];
        str[i]=str[j];  
        str[j]=temp;
        printf("%c", str[i]);
         i++; j--;
    } 
    return 0;
}