#include <stdio.h>

void printBinary(int n) {
	if (n != 0) {
        printBinary(n/2);
        printf("%i", n%2);
    }
}

int main(void) {
	int i = 21;
    printBinary(i);
    printf("\n");
}