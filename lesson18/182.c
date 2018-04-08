#include <stdio.h>

int addSubarray (int x[], int from, int to) {
	if (from == to) {
        return x[from];
    } else {
        return addSubarray(x, from+1, to) + x[from];
    }
}

int main(void) {
	int x[] = {7, 2, 3, 6, -4, 5};
    printf("sum = %i \n", addSubarray(x, 0, 5));
}
