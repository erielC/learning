    
#include <stdio.h>
#include <string.h>

int main(){

    char name[25]; //25 bytes allocated
    int age;

    printf("Whats your name?\n");
    // scanf("%s", &name);

    //if user input includes any whitespaces you need fget() function already includes \n new line
    fgets(name, 25, stdin); // doesnt need address so just name, 25 bytes, stdin is input
    name[strlen(name) - 1] = '\0';// this is for a new line (\n) that comes with the fget function

    printf("How old are you?\n"); 
    // accept user input
    scanf("%d", &age); //read user input

    printf("Hello %s, how are you?\n", name);
    printf("You are %d years old\n", age);
    return 0;
}