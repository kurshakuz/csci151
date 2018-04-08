#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

int main() { 
    setvbuf(stdout, NULL, _IONBF, 0); 
    
    int a[3][3]; 
    int b[3][3]; 
    int c[3][3]; 
    
    int i, j, k, sum=0; 
    
    for (i = 0; i < 3; i++) { 
        for (j = 0; j < 3; j++) { 
            a[i][j] = (rand() % 10); 
            b[i][j] = (rand() % 10); 
        } 
    } 
    
    for (i = 0; i < 3; i++) { 
        for (j = 0; j < 3; j++) { 
            for (k = 0; k < 3 ; k++){ 
                sum += (a[i][k]*b[k][j]); 
            } 
            c[i][j]=sum; 
        } 
    } 
    
    for (i = 0; i < 3; i++) { 
        for (j = 0; j < 3; j++) { 
            printf("%5d", a[i][j]); 
        } 
        printf("\n"); 
    } 
    printf("\n"); 
    
    for (i = 0; i < 3; i++) { 
        for (j = 0; j < 3; j++) { 
            printf("%5d", b[i][j]); 
        } 
        printf("\n"); 
    } 
    printf("\n"); 
    
    for (i = 0; i < 3; i++) { 
        for (j = 0; j < 3; j++) { 
            printf("%5d", c[i][j]); 
        } 
        printf("\n"); 
    }
    
    return 0; 
}