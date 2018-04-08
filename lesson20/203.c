#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void stringCopy(char fromStr[], char toStr[]) {
	int i = 0;
	do {
		toStr[i] = fromStr[i];
		i++;
	} while(fromStr[i] != '\0');
}

void reverse(char fromStr[], char toStr[]) {
	int i = 0;
	while (fromStr[i] != '\0') {
		i++;
	}

	char var[i];
	int j = i-1;
	for(; i>-1; i--) {
		var[j-i] = fromStr[i];
	}
	stringCopy(var, toStr);
}


int main() {
    char fromStr[77], toStr[77];
    printf("Enter some text: ");
    scanf("%s", fromStr);
    reverse(fromStr, toStr);
    printf("%s\n", toStr);
}
