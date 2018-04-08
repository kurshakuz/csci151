#include <stdio.h>
#include <math.h>

void expApprox(double x, int n) {
    int i, j;
    double z, fact = 1;
    z=1+x;

    for (i =1; i<=n; i++){
        for(j=2; j<i+2; j++){
            fact*=j;
        }
        z += pow(x, i+1)/fact;
        fact = 1;
    }
    printf("The approximate result is: %lf\n", z);
}


int main() {
    setvbuf(stdout, NULL, _IONBF, 0);

    double x;
    int n;
    printf("Enter the power and number of terms: ");
    scanf("%lf %i", &x, &n);
    expApprox(x, n);
    return 0;
} 