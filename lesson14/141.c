#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

typedef struct {
    int hours;
    int minutes;
    char amORpm;
} time;

int main() { 
    setvbuf(stdout, NULL, _IONBF, 0); 
    
    time now = {10, 40, 'a'};
    
    int advMins = 1320;

    now.minutes += advMins;
    if (now.minutes > 60) {
        now.hours = (now.minutes / 60) + now.hours;
        now.minutes = now.minutes % 60;
        if (now.hours > 12 && now.hours < 24) {
            now.amORpm = 'p';
            now.hours = now.hours-(advMins/60);
        } else {
            now.hours = now.hours-(advMins/60);
        }
    }
    
    printf("%i hours, %i minutes, %cm", now.hours, now.minutes, now.amORpm);
    return 0;
}