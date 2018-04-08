#include <stdio.h>
#include <math.h>

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
    
    FILE *values;
    FILE *story;
    
    char word, hob[81], fname[81];
    
    values = fopen("values.txt", "r");
    story = fopen("story.txt", "r");
    
    
    printf("Enter output file name: \n");
    scanf("%s", &fname);
    FILE *outfile;
    outfile = fopen(fname, "w");
    
    
    if (values == NULL || story == NULL || outfile == NULL) {
        printf("Problem opening file.");
        return 1;
    }
    printf("Files opened successfully. \n");
    
    do {
        word = getc(story);
        if (word == '$') {
            fscanf(values, "%s", hob);
            fprintf(outfile, "%s", hob);
        } else {
            fprintf(outfile, "%c", word);
        } 
    } while(!feof(story));
    
    fclose(values);
    fclose(story);
    
    printf("\nDone.");
    
    return 0;
}