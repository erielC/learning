#include <stdio.h>

int main(){

    double prices[5];
    prices[0] = 100.0;  
    prices[1] = 200.0;
    prices[2] = 300.0;
    prices[3] = 400.0;
    prices[4] = 500.0;

    for (int i = 0; i < 5; i++){
        printf("Price of item %d is %.2f\n", i+1, prices[i]);
    }

    return 0;
}