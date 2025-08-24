#include<stdio.h>
#include<string.h>
int main()
{
struct person
{
    char name[50];
    int age;
    float salary;
} john,alice,bob;

    strcpy(john.name, "John");
    john.age = 30;
    john.salary = 50000.50;

    strcpy(alice.name, "Alice");
    alice.age = 28; 
    alice.salary = 60000.75;

    strcpy(bob.name, "Bob");
    bob.age = 35;
    bob.salary = 70000.00;

    printf("john name=%s \n age=%d \n salary=%f\n",john.name,john.age,john.salary);
    printf("alice name=%s \n age=%d \n salary=%f\n",alice.name,alice.age,alice.salary);
    printf("bob name=%s \n age=%d \n salary=%f\n",bob.name,bob.age,bob.salary);
    return 0;

}