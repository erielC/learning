#include <stdio.h>

void birthday(char name[], int age){
    printf("\nHappy Birthdya dear %s!!", name);
    printf("\nYou are %d years old!!", age);
}

int main(){

    char name[] = "Eriel";
    int age = 19;
    birthday(name, age);
    
    return 0;
}