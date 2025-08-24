#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct cricketer
    {
        char name[15];
        int age;
        int matches;
        float average;
    } cricketer;
    cricketer arr[3];
    for(int i=0;i<3;i++)
    {
        printf("Enter name, age, matches, average of cricketer %d:\n",i+1);
        scanf("%s %d %d %f",arr[i].name,&arr[i].age,&arr[i].matches,&arr[i].average);
    }
    for(int i=0;i<3;i++)
    {
        printf("Cricketer %d: name=%s age=%d matches=%d average=%.2f\n",i+1,arr[i].name,arr[i].age,arr[i].matches,arr[i].average);
    }
    return 0;
}