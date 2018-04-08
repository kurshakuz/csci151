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

int main() {
    char str1[77], str2[77];
    
    printf("Enter string: ");
    scanf("%s", str1);
    stringCopy(str1, str2);
    printf("%s\n", str2);
    
    return 0;
}