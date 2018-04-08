#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

int main() { 
    setvbuf(stdout, NULL, _IONBF, 0); 
    
    int array[20]; 
    int i, min = 100, max = 50, sum = 0; 
    
    for(i = 0; i < 20; i++) { 
        array[i] = (rand() % (100+1-50)) + 50; 
    
        if(min > array[i]) { 
        min = array[i]; 
        } 
        if(max < array[i]) { 
        max = array[i]; 
        } 
    
    } 
    
    for(i = 0; i < 20; i++) { 
        printf("%i\n", array[i]); 
        sum = sum + array[i];
    } 
    
    double avg = (sum/20.000);
    
    printf("The minimum value is: %i", min); 
    printf("\nThe maximum value is: %i", max);
    printf("\nThe average value is: %f", avg);
    printf("\nDone."); 
    
    return 0; 
}