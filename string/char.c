#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50]=("Hello, World!");
    char s2[80]=("vaishnavi");
    printf("The string is: %s\n", s1);
    printf("The string is: %s\n", s2);
    printf("The length of the string is: %lu\n", strlen(s1));
    printf("The size of the string is: %lu\n", strlen(s2));
    printf("The first character is: %s\n", strcpy (s1,s2));
    printf("The concatenated string is: %s\n", strcat(s1,s2));
    printf("The comparison of the two strings is: %d\n", strcmp( s1, s2));
    printf("the reverse of the string is: %s\n", strrev(s1));
    printf("the reverse of the string is: %s\n", strrev(s2));
    printf("the new string is:%s\n",strncpy(s1,s2,3));
    return 0;
}