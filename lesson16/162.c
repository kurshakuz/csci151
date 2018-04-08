#include <stdio.h>
#include <math.h>

void expApprox(double x, int n) {
    int i, j, k=-1, l=3;
    double z, fact=1;
    z = x;

    for (i = 1; i <= n; i++){
        for(j = 2; j <= l; j++){
            fact*=j;
        }
        z+=k*pow(x, l)/fact;
        fact=1, k*=(-1), l+=2;
    }
    printf("The approximate result is: %lf\n", z);
}


int main() {
    setvbuf(stdout, NULL, _IONBF, 0);

    double x;
    int n;
    printf("Enter the x and number of terms: ");
    scanf("%lf %i", &x, &n);
    expApprox(x, n);
    return 0;
}