// Swapping Values of Two Variables
#include <stdio.h>
#include <string.h>

int main(){

    char x[15] = "Water";
    char y[115] = "Soda";
    char temp[15];

// When swapping strings make sure to set an array size otherwise the strcpy function wont work if one string is less than the other being swapped/copied
    strcpy(temp, x);
    strcpy(x,y);
    strcpy(y, temp);

    printf("x = %s\n", x);
    printf("y = %s\n", y);

    return 0;
}