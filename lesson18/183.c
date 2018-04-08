#include <stdio.h>

double min(double i, double j) {
    if (i < j) {
        return i;
    } else {
        return j;
    }
}

double minValue(double arr[], int from, int to) {
	if (to == 0) {
        return arr[0];
    } else {
        return min(minValue(arr, from, (to - 1)), arr[to]);
    }
}

int main(void) {
    double x[] = {7.0, 2.2, 3.4598, 6.128, -4.7, 5.00};
    int from = 0;
    int to = 5;

    printf("the minimum value is: %f \n", minValue(x, from, to));
}
