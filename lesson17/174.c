#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include<time.h>

void printarr (int r, int c, double arr[r][c]) {
    int i, j;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%5.2lf  ", arr[i][j]);
        }
        printf("\n\n");
    }
}

void transpose (int row, int col, double orig[row][col], double result[row][col]) {
    int i, j;
    for (i = 0; i < col; i++) {
        for (j = 0; j < row; j++) {
        result[j][i] = orig[i][j];
        }
    }
}

int main() {
    int row, col, i, j;
    srand(time(NULL));
    printf("Enter the dimensions: ");
    scanf("%i %i", &row, &col);
    double orig[row][col], result[col][row], n;
    srand(time(NULL));
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            n = (float)rand()/(float)(RAND_MAX/100);
            orig[i][j] = n;
        }
    }
   printarr(row, col, orig);
   transpose(row, col, orig, result);
   printf("The transpose is: \n");
   printarr(col, row, result);
}