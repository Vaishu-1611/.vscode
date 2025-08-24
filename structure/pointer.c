#include<stdio.h>
#include<string.h>
typedef struct person
{
    int age;
    float weight;
} person;

int main()
{
    person p1;
    p1.age=21;
    p1.weight=70.5;

    person *ptr;
    ptr=&p1;

    printf("details of person 1 are:\n");
    printf("age=%d\nweight=%f\n",ptr->age,ptr->weight);

    return 0;
}