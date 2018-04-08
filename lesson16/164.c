#include <stdio.h>
#include <math.h>

int sumOfDigits(int n) {
    int sum=0;
    do {
        sum += n%10;
        n /= 10;
    } while(n > 10);
    return sum+n;
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    while(n<0)
    {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    }
    int sum = sumOfDigits(n);
    printf("The sum of digits is: %i \n", sum);
    return 0;
}