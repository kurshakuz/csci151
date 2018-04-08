#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include<time.h>

double maxVal(int len, double arr[len][len]) {
    int i, j;
    double max = 1;
    for (i = 0; i < len; i++) {
        for (j = 0; j < len; j++) {
            if (arr[i][j] > max){
            max = arr[i][j];
        }
    }
}
    return max;
}



int main() {
    int len, i, j;
    srand(time(NULL));
    printf("Enter the dimensions: ");
    scanf("%i", &len);
    double arr[len][len], n;
    srand(time(NULL));
    for (i = 0; i < len; i++) {
        for (j = 0; j < len; j++) {
            n = (float)rand()/(float)(RAND_MAX/100);
            arr[i][j] = n;
        }
    }
    for (i = 0; i < len; i++) {
        for (j = 0; j < len; j++) {
            printf("%5.2lf  ", arr[i][j]);
        }
        printf("\n\n");
    }

    double max = maxVal(len, arr);
    printf("The biggest element is: %.2lf\n", max);
}