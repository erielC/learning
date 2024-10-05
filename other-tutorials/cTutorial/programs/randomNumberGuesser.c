#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses =0;
    int answer;

// uses current time as a seed to generate random numbers
    srand(time(0));

    answer = (rand() % MAX) + MIN; // generate a random number between the two constants
    printf("%d\n", answer);
    
    do{
        scanf("%d", &guess);
        if (guess > answer){
            printf("Too High\n");
        } else if (guess < answer){
            printf("Too Low\n");
        } else {
            printf("Correct!!\n");
        }
        guesses++;
    } while (guess != answer);

    printf("amount of guesses: %d\n", guesses);

    return 0;
}