#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

int main() { 
    setvbuf(stdout, NULL, _IONBF, 0); 
    
    int array[3][4]; 
    int i, j, max_i = 0, max_j = 0; 
    
    for (i = 0; i < 3; i++) { 
        for (j = 0; j < 4; j++) { 
            array[i][j] = (rand() % 100); 
            if (array[max_i][max_j] < array[i][j]) { 
                max_i = i; 
                max_j = j; 
            } 
        } 
    } 
    
    for (i = 0; i < 3; i++) { 
        for (j = 0; j < 4; j++) { 
            printf("%5i", array[i][j]); 
        } 
        printf("\n"); 
    } 
    
    printf("The maximum value is %d at row %d and column %d\n", array[max_i][max_j], max_i + 1, max_j + 1); 
    return 0; 
}