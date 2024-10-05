#include <stdio.h>

int findMax(int x, int y){
// ternary operator
    return (x > y) ? x : y;
}

int main(){

    int max = findMax(3, 4);
    printf("%d", max);
    return 0;
}