#include<stdio.h>
#include<string.h>
 typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char grade;
        char name [15];
    } pokemon;

    void change(pokemon *p)
    {
        (*p).hp=500;
        (*p).speed=600;
        (*p).attack=700;
        (*p).grade='S';
        strcpy(p->name,"mewtwo");
        return;
    }

    int main()
    {
        pokemon pikachu;
        pikachu.attack=1000;
        pikachu.hp=199;
        pikachu.speed=1789;
        pikachu.grade='A';
        strcpy(pikachu.name,"pikachu");

        printf("before change function call:\n");
        printf("name=%s,hp=%d,attack=%d,speed=%d,grade=%c \n",pikachu.name,pikachu.hp,pikachu.attack,pikachu.speed,pikachu.grade);

        change(&pikachu);

        printf("after change function call:\n");
        printf("name=%s,hp=%d,attack=%d,speed=%d,grade=%c \n",pikachu.name,pikachu.hp,pikachu.attack,pikachu.speed,pikachu.grade);

        return 0;
    }