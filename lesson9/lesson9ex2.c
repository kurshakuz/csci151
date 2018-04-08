#include <stdio.h>

main() {
    int n;
	int x = 1;

	printf("Enter your number: \n");
	scanf("%i", &n);

	printf("Divisors of number %i are: \n", n);
	while ( x < n) {
		x++;
		if ( n % x == 0 ) {
			printf("%i \n", n / x);
		} else {
			continue;
		}
	}
}