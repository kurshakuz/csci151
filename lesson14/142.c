#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

typedef struct {
    int ID;
    char gender; //'f or m'
    double quiz;
    double lab;
    double final;
    double finalGrade;
} student;

int main() { 
    setvbuf(stdout, NULL, _IONBF, 0); 
    
    student new;
   
    printf("Student's gender: ");
    scanf("%c", &new.gender);
    printf("Student ID is: ");
    scanf("%i", &new.ID);
    printf("Quiz mark: ");
    scanf("%lf", &new.quiz);
    printf("Lab mark: ");
    scanf("%lf", &new.lab);
    printf("Final exam grade: ");
    scanf("%lf", &new.final);

    new.finalGrade=(0.5*new.quiz+0.2*new.lab+0.3*new.final);
    
    printf("Your ID is %i, gender '%c', quiz mark %f, lab mark %f, final exam grade %f, and your final mark is %f", new.ID, new.gender, new.quiz, new.lab, new.final, new.finalGrade);
    
    return 0;
}