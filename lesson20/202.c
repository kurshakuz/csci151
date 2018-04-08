#include <stdio.h>
#include <stdlib.h>
#include <time.h>

_Bool areEqual(char str1[], char str2[]) {
	int i;
    for (i=0; str1[i]!='\0'; i++) {
        if (str1[i]==str2[i]) continue;
        else {
            return 0;
        }
    }
    if (str2[i]!='\0') return 0;
    return 1;
}


int main() {
    char str1[77], str2[77];
    _Bool check;
    printf("Enter something str1: ");
    scanf("%s", str1);
    printf("Enter something str2: ");
    scanf("%s", str2);

    if (areEqual(str1, str2)==1) {
        printf("They are equal\n");
    } else if (areEqual(str1, str2)==0) {
        printf("They are not equal\n");
    }
}