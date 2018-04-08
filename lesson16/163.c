#include <stdio.h>
#include <math.h>

void _BoolisPrime(int n) {
    int rem = 0, i;
    for(i=2; i < n; i++) {
        rem = n%i;
        if(rem==0) {
        	printf("The integer is not a prime number\n");
        	break;
        } else {
        	printf("The integer is a prime number\n");
        	break;
        }
    }
}

int main() {
    setvbuf(stdout, NULL, _IONBF, 0);

    int n;
    printf("Enter a positive integer 1<: ");
    scanf("%d", &n);
    while(n<1)
    {
        printf("Enter a positive integer 1<: ");
        scanf("%d", &n);
    }
    _BoolisPrime(n);
    return 0;
}