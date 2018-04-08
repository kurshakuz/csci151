#include <stdio.h>
#include <stdlib.h>

char* stringCopy(char *fromStr) {
    
    int n = 0;
    while (fromStr[n] != '\0') {
        n++;
    }
    
    char *vals = (char*)malloc(n*sizeof(char));
    // if (vals == NULL) {return 1;}
    
    while (*fromStr != '\0') {
        *vals = (*fromStr);
        fromStr++;
        vals++;
    } 
    *vals = '\0';

    return vals;
}

int main(void) {

	char word1[] = "Hello";
	char word2[] = "Hi there";
	char word3[] = {'H', 'e', 'l', 'l', 'o', '\0', 'X'};
	char word4[] = "Hi";

	// Test code for stringCopy
	stringCopy(word1);
	printf("Test 1.1 result: %s\n", word1);
	stringCopy(word2);
	printf("Test 1.2 result: %s\n", word2);
	stringCopy(word3);
	printf("Test 1.3 result: %s\n", word3);
	
    return 0;
}