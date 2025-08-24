#include<stdio.h>
int main()
{
    struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char grade;
    };
    struct pokemon pikachu;
    pikachu.hp=100;
    pikachu.speed=200;
    pikachu.attack=300;
    pikachu.grade='A';

    struct pokemon charizard;
    charizard.hp=200;
    charizard.speed=300;
    charizard.attack=400;
    charizard.grade='S';

    struct pokemon bulbasaur;
    bulbasaur.hp=150;   
    bulbasaur.speed=250;
    bulbasaur.attack=350;
    bulbasaur.grade='B';

    printf("pikachu hp=%d speed=%d attack=%d grade=%c\n",pikachu.hp,pikachu.speed,pikachu.attack,pikachu.grade);
    printf("charizard hp=%d speed=%d attack=%d grade=%c\n",charizard.hp,charizard.speed,charizard.attack,charizard.grade);
    printf("bulbasaur hp=%d speed=%d attack=%d grade=%c\n",bulbasaur.hp,bulbasaur.speed,bulbasaur.attack,bulbasaur.grade);
    return 0;
}