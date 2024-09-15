#include <stdio.h>
#include <string.h>

// typedef char user[25];
typedef struct
{
    char name[25];
    char password[12];
    int id;
} User;


int main(){
    
    // typedef = reserved keyword that gives an existing datatype a "nickname"
    // typedefs are normally used with structs

    User user1 = {"Bro", "password", 6465025};
    User user2 = {"Brah", "coconut", 431597};

    printf("%s", user1.name);
    printf("\n%s", user1.password);
    printf("\n%d\n", user1.id);
    
    return 0;
}