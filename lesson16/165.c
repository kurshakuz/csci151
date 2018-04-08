#include <stdio.h>
#include <math.h>

int _BoolisIdeal(int n) {
    int rem=0, i, sum=0;
    for(i=1; i<n; i++){
        rem=n%i;
        if(rem==0){
            sum+=i;
        }
    }
    return sum/1;
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    while(n<0) {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    }
    int sum = _BoolisIdeal(n);
    if (sum==n) {
    	printf("The number is ideal\n");
    } else {
    	printf("The number is not ideal\n");
    }
    return 0;
}