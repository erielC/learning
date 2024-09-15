#include <stdio.h>
#include <ctype.h>

int main(){

    char questions[][100] = {"1. What year did C language debut?",
                            "2. WHo is credited with creating C?",
                            "3. What is the predeccessor of C?"};

    char options[][100] = {"A. 1989", "B. 1999",
                           "A. Nikola Tesla", "B. John Carmack",
                           "A. Lanugage B", "B. UNIX"};

    char answers[3] = {'A', 'B', 'A'};
    int numOfQuestions = sizeof(questions)/sizeof(questions[0]); //finding the size of the array
    char guess;
    int score = 0;

    printf("\nQUIZ GAME\n\n");
    printf("********************************\n");

    for (int i = 0; i < numOfQuestions; i++){

        printf("%s\n", questions[i]);

        for (int j = (i * 2); j < (i * 2) + 2;j++){
            printf("%s\n", options[j]);
        }
        printf("\n");
    }

    
    return 0;
}