#include <stdio.h>
#include <math.h>

void blah(double *d) {

    *d = 123.4;
}

int main() {

    int i; int j;
    for (i = 1; i < 6; i++) {
        for (j = 1; j < 6; j++) {
            printf("%5lf", pow(i,j));
        }
        printf("\n");
    }
}