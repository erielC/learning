#include <stdio.h>

int main(){

    FILE *pF = fopen("/Users/erielcabrera/Desktop/Poem.txt","r");

    char buffer[255];    // Buffer to hold

    if (pF == NULL){
        printf("Unable to open File\n");
    } else {
        while(fgets(buffer, 255, pF) != NULL){
            printf("%s", buffer);
        }
    }

   

    fclose(pF);

}