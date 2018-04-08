#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

int main() { 
    setvbuf(stdout, NULL, _IONBF, 0); 

    int array[20]; 
    int i; 

    for(i = 0; i < 20; i++) { 
        array[i] = (rand() % (100-50)) + 50; 
    } 

    for(i = 0; i < 20; i++) { 
        printf("%i\n", array[i]); 
    } 

    return 0; 
}