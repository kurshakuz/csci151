#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

typedef struct {
    int id;
    _Bool issavings;
    int balance;
    double rate;
} account;

int main() { 
    setvbuf(stdout, NULL, _IONBF, 0); 
    
    account myacc;
    int temp, t, balance;
    double total;
    
    printf("Enter your ID: \n");
	scanf("%i", &myacc.id);

    printf("Is it savings account? (1, 0): \n");
	scanf("%i", &temp);
	myacc.issavings = temp;

	printf("Enter your current balance: \n");
	scanf("%i", &myacc.balance);
	
	printf("How long you want to wait?: \n");
	scanf("%i", &t);
	
	if (myacc.issavings == 1) {
	    total = (double)myacc.balance*(1+(0.02*t));
	} else {
	    total = (double)myacc.balance*(1+(0.01*t));
	}

    printf("You will earn total: %f", total);
    return 0;
}