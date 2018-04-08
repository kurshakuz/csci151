#include <stdio.h>
#include <math.h>

int c, b, i;
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Input some characters: ");
    while((c = getchar()) != '\n') {
        if (c != ' ') {
            ++i;
        } else {
            if (i > b) {
                b = i;
            } 
            printf("%i\n", i);
            i = 0;
        }
        }
    if (i != 0) {
        if (i > b) {
            b = i;
        } 
        printf("%i\n", i);
    } 
    printf("Done. \nThe longest word is %i characters long", b);
	return 0;
}