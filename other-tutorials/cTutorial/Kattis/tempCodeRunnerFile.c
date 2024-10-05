#include <stdio.h>
#include <string.h>

int main(){

    char name[101];
    char result[101];

    scanf("%s", &name);
    strncat(result, &name[0], 1);
    
    for (int i = 0; i < strlen(name); i++){
       if(name[i] == '-'){
        strncat(result, &name[i + 1], 1);
       } 
    }
    printf("%s", result);
    return 0;
}