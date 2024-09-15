#include <stdio.h>

void hello(char name[], int); //function prototype

int main(){

    // A function prototype is a declaration w/o a body before main()
    // Ensures that calls to a function are made with the correct arguements
    // Causes the compiler to have an error when arguements are missing for the function
    char name[] = "Bro";
    int age = 21;

    hello(name, age);

    return 0;
}

void hello(char name[], int age){
    printf("\nHello %s", name);
    printf("\nAge is %d", age);
}