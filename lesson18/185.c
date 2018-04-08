#include <stdio.h>

long choose(int n, int k) {
    double i;
    if (k == n) {
        return 1;
    } else if (k == 1) {
        return n;
    } else {
		i = n;
		i = i/k;
		return choose(n-1, k-1)*i;
    }
}

int main(void) {
	int n = 52;
	int k = 5;

    double formula = choose(n,k);
    printf("Strange formula gives us %lf from %i and %i \n", formula, n, k);
}
