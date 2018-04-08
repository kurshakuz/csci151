#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

int main() { 
    setvbuf(stdout, NULL, _IONBF, 0); 
    
    int R = 3, C = 4; 
    int a[R][C]; 
    int b[C][R]; 
    
    int i, j, val = 100; 
    
    for (i = 0; i < R; i++) { 
        for (j = 0; j < C; j++) { 
            a[i][j] = val; 
            val++; 
        } 
    } 
    
    for (i = 0; i < C; i++) { 
        for (j = 0; j < R; j++) { 
            b[i][j] = a[j][i] + 25; 
        }
    }
    
    for (i = 0; i < R; i++) { 
        for (j = 0; j < C; j++) { 
            printf("%5d", a[i][j]); 
        } 
        printf("\n"); 
    } 
    printf("\n"); 
    for (i = 0; i < C; i++) { 
        for (j = 0; j < R; j++) { 
            printf("%5d", b[i][j]); 
        } 
        printf("\n"); 
    } 
    return 0; 
}