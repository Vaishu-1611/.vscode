#include<stdio.h>
#include<string.h>
 struct book
{
    char name[25];
    char author[25];
    int callno;
} book;

void display(struct book *b)
{
    printf("name=%s,author=%s,callno=%d\n",b->name,b->author,b->callno);
    return;
}

int main()
{
    struct book b1 ={"let us c","yashwant kanetkar",101};
    display(&b1);
    return 0;
}