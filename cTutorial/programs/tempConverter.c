// This program converts temparture from Farenheit to Celcius or vice versa

#include <stdio.h>
#include <ctype.h> //string functions import

int main(){
    char unit;
    float temp;

    printf("Is the temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit); //auto capitilizes

    if (unit == 'C'){
        printf("Enter temp in celcius: \n");
        scanf("%f", &temp);
        temp = (temp * 9/5) + 32;
        printf("The temp in farenheit is: %.1f", temp);
    } else if (unit == 'F'){
        printf("Enter the temp in Farenheit: \n");
        scanf("%f", &temp);
        temp = ((temp-32) * 5) / 9;
        printf("The temp in celcius is %.1f", temp);

    } else
        printf("%c is not valid input", unit);

    return 0;
}