#include <stdio.h>

int main(){

    // memory = an array of bytes within RAM (street)
    // memory block = single unit (byte) within memory, used to hold some value (person)
    // memory address = the address of where a memory block is located (house address)

    char a = 'X';
    char b = 'Y';
    char c = 'Z';

    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(b));
    printf("%d\n", sizeof(c));

    printf("%p\n", &a); // How to display address of operator
    printf("%p\n", &b); // How to display address of operator
    printf("%p\n", &c); // How to display address of operator

    return 0;
}