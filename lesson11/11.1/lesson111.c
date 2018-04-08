#include <stdio.h>
#include <math.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
    
    char finame[81], foname[81], name[81], ch;

    printf("Enter input file name: \n");
    scanf("%s", &finame);
    FILE *infile;
    infile = fopen(finame, "w");

    printf("Enter output file name: \n");
    scanf("%s", &foname);
    FILE *outfile;
    outfile = fopen(foname, "w");
    
    if (infile == NULL && outfile == NULL) {
        printf("Problem opening files.");
        return 1;
    }

    printf("Files opened successfully. \n");
    
    printf("Enter your name: ");
    scanf("%s", name);
    fprintf(infile, "Hello there, ");
    fputs(name, infile);
    
    fclose(infile);
    
    infile = fopen(finame, "r");
    
    do {
        ch = getc(infile);
        putc(ch, outfile);
    } while (!feof(infile));
    
    printf("\nTask finished!");
    
 
    fclose(infile);
    fclose(outfile);
    return 0;
}