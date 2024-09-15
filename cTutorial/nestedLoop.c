#include <stdio.h>

int main(){

    int rows;
    int columns;
    char symbol;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &columns);

    //clear buffer
    scanf("%c"); //used to get rid of newline character
    
    printf("Enter a symbol to use: ");
    scanf("%c", &symbol);

    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= columns; j++){
            printf("%c", symbol);
        }
        printf("\n");
    }
}