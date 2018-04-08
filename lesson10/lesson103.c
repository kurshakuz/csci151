#include <stdio.h>
#include <math.h>


int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int c, i;
	
	printf("Input some characters: ");
    while((c = getchar()) != '\n') {
        if (c != ' ') {
            ++i;
        } else {
            printf("%i\n", i);
            i = 0;
        }
        }/*
    if (i != 0) {
        printf("%i\n", i);
    } */
    printf("Done.");
	return 0;
}