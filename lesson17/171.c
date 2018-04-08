#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int SEindex(int size, double mat[]) {
    int j, min=90, minindex;
    for (j = 0; j < size; j++){
            if (mat[j] < min) {
            min = mat[j];
            minindex = j;
        }
    }
    return minindex;
}

int main() {
    int size, index, i;
    srand(time(NULL));
    printf("Enter the size: ");
    scanf("%i", &size);
    double mat[size], n;
    for (i = 0; i < size; i++) {
        n = rand() % 100;
        mat[i] = n;
    }
    for (i = 0; i < size; i++) {
            printf("%3.2lf\n", mat[i]);
        }
    index = SEindex(size, mat);
    printf("The index of the smallest element is: %i\n", index);

}
