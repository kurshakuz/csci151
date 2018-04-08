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

void concat(char str1[], char str2[], char ResultStr[]) {
	int i = 0;
	for(i = 0; ;i++) {
		if(str1[i]=='\0') break;
		ResultStr[i] = str1[i];
	}

	for(int j = 0; ; j++, i++) {
		if(str1[j]=='\0') break;
		ResultStr[i] = str2[j];
	}
}


int main() {
    char str1[15], str2[15], resultStr[40];
    printf("Enter some text for str1: ");
    scanf("%s", str1);
    printf("Enter some text for str2: ");
    scanf("%s", str2);
    concat(str1, str2, resultStr);
    printf("%s\n", resultStr);
}