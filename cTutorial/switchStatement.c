#include <stdio.h>

int main(){

    char grade;

    printf("Enter a letter grade: ");
    scanf("%c", &grade);

    switch (grade){
    case 'A':
        printf("Perfect!\n");
        break;
    case 'B':
        printf("You did good\n");
        break;
    case 'C':
        printf("You did OK");
        break;
    case 'D':
        printf("Atleast you didn't fail");
        break;
    case 'F':
        printf("You failed!");
        break;
    default:
        printf("Please enter valid grades");
        break;
    }
    return 0;
}