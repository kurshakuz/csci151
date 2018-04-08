#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int rain;
    float temp;
    float wind;
} weather;

int rainfall(weather *wptr) {
    int sum = 0; int i;
    for (i = 0; i < 12; i++) {
        sum += (*(wptr+i)).rain;
    }
    return sum;
}

double lowesttemp(weather *wptr) {
    int i; double lowest = 0;
    for (i = 0; i < 12; i++) {
        if ( (*(wptr+i)).temp < lowest ) {
            lowest = ((*(wptr+i)).temp);
        } else {
            continue;
        }
    }
    return lowest;
}

double avgwind(weather *wptr) {
    int i; double sum = 0;
    for (i = 0; i <= 12; i++) {
        sum += ((*(wptr+i)).wind);
    }
    return sum/12;
}

void printw(weather *wptr) {
    int i = 0;
    printf(" \n - - - - - - - - - - - - - - - \n");
    printf("| Rain | Avg.Temp | Avg.Wind |\n");
    printf(" - - - - - - - - - - - - - - - \n");
    while (i < 12) {
        printf("|%4d  | %7.1f  | %6.1f   |\n", wptr->rain, wptr->temp, ((*wptr).wind));
        printf(" - - - - - - - - - - - - - - - \n");
        wptr++;
        i++;
    }
}

int main(void) {

    FILE *values;
    values = fopen("astana.txt", "r");
    if (values == NULL) {
        printf("Problem opening file.");
        return 1;
    } else {printf("File opened successfully. \n");}
    
    weather *wptr = (weather*)malloc(12*sizeof(weather));
    if (wptr == NULL) {return 1;}
    
    int i = 0;
    do {
        fscanf(values, "%i %f %f", &((*(wptr+i)).rain), &(wptr+i)->temp, &(wptr+i)->wind);
        i++;
    } while (!feof(values));
    
    printf("%i\n", rainfall(wptr)); 
    printf("%.1f\n", lowesttemp(wptr));
    printf("%f\n", avgwind(wptr));
    printw(wptr);
    
    free(wptr);
    fclose(values);
    
    return 0;
}