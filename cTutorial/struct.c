#include <stdio.h>
#include <string.h>

struct Player
{
    char name[12];
    int score;   
};


int main(){

    // struct = collection of related members
    // diff datatypes
    // list under one name in block of memory
    // very similiar to classes but no methods  
    
    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Marcos");
    player1.score = 4;
    
    strcpy(player2.name, "Brah");
    player2.score = 5;

    printf("\n%s", player1.name);
    printf(" %d", player1.score);

    printf("\n%s", player2.name);
    printf(" %d", player2.score);
    return 0;
}