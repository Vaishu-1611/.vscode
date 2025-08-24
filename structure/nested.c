#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char name [15];
    } pokemon;
    typedef struct legendarypokrmon
    {
        pokemon normal;
        char ability[10];
    } legendarypokrmon;

    legendarypokrmon newtwo;
    strcpy(newtwo.ability,"pressure");
    newtwo.normal.attack=100;
    newtwo.normal.speed=300;
    newtwo.normal.hp=200;
    strcpy (newtwo.normal.name,"newtwo");

    printf("the features of %s are:\n",newtwo.normal.name);
    printf("attack=%d \nhp=%d\nspeed=%d\nability=%s",newtwo.normal.attack,newtwo.normal.hp,newtwo.normal.speed,newtwo.ability);

    return 0;
}