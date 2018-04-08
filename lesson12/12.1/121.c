#include <stdio.h> 
#include <stdlib.h> 
int main() { 
    setvbuf(stdout, NULL, _IONBF, 0); 

    int f[10]; 
    int i; 

    f[0] = 1; 
    printf("%i, ", f[0]); 


    for(i = 1; i < 10; i++) { 
        f[i] = f[i - 1] * i; 
        printf("%i, ", f[i]); 
    } 

    return 0; 
}