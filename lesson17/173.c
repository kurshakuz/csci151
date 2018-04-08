#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include<time.h>

void printarr(int size, double arr[]) {
    int i;
    for (i = 0; i < size; i++)
        {
            printf("%5.2lf\n", arr[i]);
        }
}

void reverse (int size, double arr[]) {
    double tempS, tempF;
    int j;
    if (size % 2==0) {
        for (j = 0; j < (size)/2; j++) {
            tempS = arr[j];
            tempF = arr[size-1-j];
            arr[j]=tempF;
            arr[size-j-1] = tempS;
        }
    } else {
        for (j = 0; j < (size/2) + 1; j++) {
            tempS = arr[j];
            tempF = arr[size-1-j];
            arr[j]=tempF;
            arr[size-j-1] = tempS;
        }
    }
}


int main() {
    int size, i;
    srand(time(NULL));
    printf("Enter the size: ");
    scanf("%i", &size);

    double arr[size], n;
    for (i = 0; i < size; i++) {
        n = (float)rand()/(float)(RAND_MAX/100);
        arr[i] = n;
    }

    printarr(size, arr);
    printf("After reverse: \n");
    reverse(size, arr);
    printarr(size, arr);
}