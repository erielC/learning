#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // psuedo random numbers = A set of values or elements that are statistically random

    srand(time(0)); // s for seed rand for random time(0) is current time

    int number1 = (rand() % 6) +1; //rand number between 1 and 6
    printf("%d\n", number1);

    return 0;
}