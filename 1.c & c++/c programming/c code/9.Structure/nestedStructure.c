#include <stdio.h>
#include <string.h>
typedef struct pokemon{
    char name[20];
    char type[20];
    char ability[50];
    int attack;
} pkm;
typedef struct legendryPokemon{
    pkm normal;
    char specialAbility[50];
    int specialAttack;
} lpkm;
void printNormalPokemon(pkm x);
void printSpecialPokemon(lpkm x);
int main(){
    pkm p1 ={"pikachu", "Electric", "Iron tail,quick attack,electric current", 80};
    pkm p2 ={"Charizad","Fire","dragon claw ,fire blast ",120};
    lpkm p3 ={"Zygarde","grass type","dragon fire",100,"thousand Arrow",91};
    printNormalPokemon(p1);
    printNormalPokemon(p2);
    printSpecialPokemon(p3);
    printf("Name is : %s\n", p3.normal.name);
    printf("Name is : %s\n", p2.name);



    return 0;
    
}
// print 
// void printSpecialPokemon(lpkm x){
//     printNormalPokemon(x.normal);
//     printf(" Special Ability : %s \n", x.specialAbility);
//     printf("Special Attack : %d\n",x.specialAttack);
// }

// void printNormalPokemon(pkm x){
//     printf("\n");
//     printf("Name is : %s\n", x.name);
//     printf("Type :  %s\n", x.type);
//     printf("Ability : %s \n", x.ability);
//     printf("attack speed : %d\n", x.attack);
// }
