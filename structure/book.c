#include<stdio.h>
#include<string.h>
int main()
{
struct book
{
    char Name[50];
    int price;
    int pages;
} english,math,computer;

    strcpy(english.Name, "english");
    english.price = 200;
    english.pages = 300;

    strcpy(math.Name, "math");
    math.price = 300; 
    math.pages = 400;

    strcpy(computer.Name, "computer");
    computer.price = 400;
    computer.pages = 500;

    printf("english name=%s price=%d pages=%d\n",english.Name,english.price,english.pages);
    printf("math name=%s price=%d pages=%d\n",math.Name,math.price,math.pages);
    printf("computer name=%s price=%d pages=%d\n",computer.Name,computer.price,computer.pages);
    return 0;

}
