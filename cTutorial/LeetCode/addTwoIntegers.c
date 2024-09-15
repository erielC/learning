#include <stdio.h>

void sum(int num1, int num2) {
    int total;
    scanf("%d", &num1);
    scanf("%d", &num2);
    total = num1 + num2;
    printf("%d", total); 
}

int main(){

    sum(12, 5);


    return 0;
}