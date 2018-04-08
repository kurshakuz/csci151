#include<stdio.h>

typedef struct{
    int customerID;
    char typeOfAccount;
    int accountBalance;
} BankCustomer;

int main ()
{
    FILE *file;
	file = fopen("accounts.txt", "r");

	BankCustomer list[10];
	int i, sumC = 0, sumS = 0, sumD = 0, numberC = 0, numberS = 0, numberD = 0;
	for (i = 0; i < 10; i++) {
        fscanf(file, "%i %c %i", &list[i].customerID, &list[i].typeOfAccount, &list[i].accountBalance);
        if (list[i].typeOfAccount == 'c') {
            sumC += list[i].accountBalance;
            numberC++;
        } else if (list[i].typeOfAccount == 's') {
            sumS += list[i].accountBalance;
            numberS++;
        } else if (list[i].typeOfAccount == 'd') {
            sumD += list[i].accountBalance;
            numberD++;
        }
    }
    printf("Average balance of checking accounts: %d\n", sumC/numberC);
    printf("Average balance of savings accounts: %d\n", sumS/numberS);
    printf("Average balance of deposit accounts: %d\n", sumD/numberD);
    
    return 0;
}