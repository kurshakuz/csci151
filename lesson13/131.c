#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

int main() { 
    setvbuf(stdout, NULL, _IONBF, 0); 
    
    int R = 12, C = 12; 
    int a[R][C]; 
    
    int i, j; 
    
    for (i = 0; i < R; i++) { 
        for (j = 0; j < C; j++) { 
            a[i][j] = (i + 1) * (j + 1); 
        } 
    } 
    
    for (i = 0; i < R; i++) { 
        for (j = 0; j < C; j++) { 
            printf("%5d", a[i][j]); 
            } 
        printf("\n"); 
    } 
    
    return 0; 
}