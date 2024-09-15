#include <stdio.h>

void sort(char array[], int size){
    for (int i = 0; i < size -1; i++){
        for (int j =0; j < size -1; j++){
            if (array[j] > array[j +1]){
                int temp = array[j];
                array[j] = array[j + 1];
                array[j+1] = temp;
            }
        }
    }
}

void printArray(char array[], int size){
    printf("\n");
    for (int i = 0; i < size; i++){
        printf("%c ", array[i]);
    }
    printf("\n");

}

int main(){

    // int array[] = {9, 1, 2, 4, 7, 0, 5, 8};
    char array[] = {'F', 'B', 'A', 'C', 'D'};
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);
    printArray(array,size);

    return 0;
}