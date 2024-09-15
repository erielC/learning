#include <stdio.h>

enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thurs = 5, Fri = 6, Sat = 7};


int main(){

    //  enum = a user defined type of named integer identifier that helps the program make it more readable
    enum Day today = Sun; 

    // printf("%d\n", today); // enums not strings, treated as integers

    if (today == Sun || today == Sat){
        printf("Its the weekend! Party Time\n");

    } else {
        printf("I have to work today\n");
    }

    return 0;
}