#include <stdio.h>
#include <string.h>

int main(){

    // Copy test for Tomas

    char cars[][10] = {"Mustang", "Corvette", "Camaro"}; //Second straight bracket specifies the maximum size of the elements 
    strcpy(cars[0], "Tesla");// only way to modify an array of strings

    for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++){
        printf("%s\n", cars[i]);
    }


    return 0;
}