#include <stdio.h>
#include <stdbool.h>

int main(){
    float temp = 1000;
    bool sunny = false;

    // sunny itself can be true or false no need for == sign
    if(temp >= 0 && temp <= 30 && sunny){
        printf("\nWeather is bad");
    } else {
        printf("\nWeather is good");
    }

    return 0;
}