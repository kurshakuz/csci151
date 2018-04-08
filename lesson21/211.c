#include <stdio.h>
#include <stdlib.h>

int main() {
    char temp[81], test;
    int sum = 0;
    FILE *infile;
    infile  = fopen("integers.txt", "r");
    if (infile == NULL) {
        printf("Problem opening files.");
        return 1;
    }
    do {
        fscanf(infile, "%s", temp);
        sum += atoi(temp);
        test = getc(infile);
    } while (test!=EOF);
    printf("The sum is: %i\n", sum);
}
