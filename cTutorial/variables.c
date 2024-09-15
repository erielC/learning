#include <stdio.h>

int main(){
    // declaring variables
    
    int x; //declaring variable
    x = 10; //initilization

    int y = 1;
    int age = 21;
    float gpa = 3.51; 
    char grade = 'A';
    char name[] = "Bro"; //array of characters

    printf("Hello %s\n",name);
    printf("you are %d years old\n", age); // %d is int
    printf("Your average grade is %c\n", grade);
    printf("Your gpa is %f\n", gpa);
     

    return 0;
}