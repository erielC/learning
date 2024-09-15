#include <stdio.h>

void printAge(int *pAge){
    printf("You are %d years old", *pAge); //derefernce
}

int main(){
    // a pointer is a variable-like reference that holds a memory address to another varaible some tasked are performed more easily with pointers
    // * = indirection of operator (value at address)

    int age = 21;
    int *pAge = NULL;
    pAge = &age;
 
    // printf("address of age: %p\n", &age);
    // printf("address of pAge: %p\n", pAge);
    
    // printf("vaue of age %d\n", age);
    // printf("vaue at stored address %d\n", *pAge);

    printAge(pAge);
}