#include <stdio.h>

int main(){


/* adding a file
    FILE *pF = fopen("test.txt", "a");

    fprintf(pF, "\nSponge Squarepants");

    fclose(pF);

    return 0;
*/

// deleting a file 
    if (remove("test.txt") == 0){
        printf("File deleted successfully");
    } else {
        printf("File not deleted");
    }
}