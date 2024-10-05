#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main(){

    int hour = 0;
    int minute = 0;
    int second = 0;

    while(1){  //1 returns true so infinite while loop
        system("clear"); // clears the terminal

        printf("%0.2d : %0.2d : %0.2d\n", hour, minute, second); //printing hour, minutes, seconds

        fflush(stdout); //don't exaclty understand yet but clears the output buffer

        second++; //incrementing seconds

        if (second == 60){
            minute++;
            second = 0;
        }
        if (minute == 60){
            hour++;
            minute = 0;
        }
        if (hour == 24){
            hour = 0;
            minute = 0;
            second = 0;
        }

        sleep(1); // waits one second

    } 
    return 0;
}