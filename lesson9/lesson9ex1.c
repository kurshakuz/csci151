#include <stdio.h>

main() {
    setvbuf(stdout, NULL, _IONBF, 0);

	int mark;

	printf("Enter your final mark percentage: \n");
	scanf("%i", &mark);

	if ( mark >= 90 ) {
		printf("Yay, you got an A! \n");
	} else if ( mark >=75 ) {
		printf("Ok you got B \n");
	} else if ( mark >= 60) {
		printf("C is still fine \n");
	} else if (mark >= 50) {
		printf("Emmm, D is not good, try harder next time \n");
	} else {
		printf(":( you Failed \n");
	}
}