#include <stdio.h>
#include <stdbool.h>

int main(){
    char a = 'C';
    char b[] = "Bro";

    float c = 3.145353;
    double d = 3.1424324324; //double holds more decimal points more accurate more memory

    printf("%0.3f\n",c); // 0.3 signifies the amount of digits that you want printed
    printf("%lf\n", d);

    // To work with booleans you have to import // #include <stdbool.h>
   
    bool e = true; // 1 represnts true...0 represents false
    printf("%d\n", e);

    //unsigned variables disregards negative numbers

    return 0;
}