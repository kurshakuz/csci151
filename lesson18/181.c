#include <stdio.h>
#include <math.h>

double power(double x, int n) {
    if (n > 0) {
        if (n % 2 == 0) {
            return power(x, n/2)*power(x, n/2);
        } else {
        		return power(x, n-1)*x;
        }
    } else if (n == 0) {
        return 1.0;
    } else {
        return (power(x, n+1)/x);
    }
}

int main(void) {
	double d;
    int p;

    printf("domain: ");
    scanf("%lf", &d);

    printf("power: ");
    scanf("%i", &p);

    printf("%lf in power of %i is equal to:  %lf", d, p, power(d, p));
    return 0;
}
