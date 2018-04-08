#include <stdio.h>
#include <math.h>

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
    
    FILE *values;
    FILE *story;
    
    char word, hob[81];
    
    values = fopen("values.txt", "r");
    story = fopen("story.txt", "r");
    
    if (values == NULL || story == NULL) {
        printf("Problem opening file.");
        return 1;
    }

    printf("Files opened successfully. \n");
    
    do {
        word = getc(story);
        if (word == '$') {
            fscanf(values, "%s", hob);
            printf("%s", hob);
        } else {
            printf("%c", word);
        } 
    } while(!feof(story));
    
    printf("\nDone.");
    
    fclose(values);
    fclose(story);
    
    return 0;
}