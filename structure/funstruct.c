#include<stdio.h>
#include<string.h>
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char name [15];
    } pokemon;
    void fun (pokemon p)
    {
        printf("name=%s,hp=%d,attack=%d,speed=%d \n",p.name,p.hp,p.attack,p.speed);
        return;
    }
    int main()
    {
        pokemon pikachu;
        pikachu.attack=1000;
        pikachu.hp=199;
        pikachu.speed=1789;
        strcpy(pikachu.name,"pikachu");

        fun(pikachu);

        pokemon charizard;
        charizard.hp=200;
        charizard.speed=300;
        charizard.attack=400;
        strcpy(charizard.name,"charizard");

        fun(charizard);    

        return 0;
    }