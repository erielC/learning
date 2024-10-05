#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    int numberAtBats;
    int counter = 0;
    int negNumber = 0;
    float sum;
    int i;

    scanf("%d", &numberAtBats);

    for(i = 0; i < numberAtBats; i++){
        float input;
        scanf("%f", &input);
        if (input < 0){
            negNumber = input;
        } else{
            counter++;
            sum += input;
        }
    }

    sum += (float)negNumber;
    sum = sum / (float)counter;

    printf("\n\n%d\n\n", counter);
    printf("%f", sum);

    return 0;
}