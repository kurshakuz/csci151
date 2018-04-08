#include <stdio.h>

main() {
    int w, day, date;
	printf("Enter your number: \n");
	scanf("%i", &day);

	if ( (day < 366) & (day > 1)) {
		printf("It is ");
		w = (day % 7) + 4;
		while ( w > 7) {
			w -= 7;
		}
		if ( w ==1 ) {
			printf("Monday, ");
		} else if ( w ==2 ) {
			printf("Tuesday, ");
		} else if ( w ==3 ) {
			printf("Wednesday, ");
		} else if ( w ==4 ) {
			printf("Thursday, ");
		} else if ( w ==5 ) {
			printf("Friday, ");
		} else if ( w ==6 ) {
			printf("Saturday, ");
		} else if ( w ==7 ) {
			printf("Sunday, ");
		}


		if (day > 335 ) {
			date = day - 335;
			printf("December %i", date);
		} else if (day > 305) {
			date = day - 305;
			printf("November %i", date);
		} else if (day > 274) {
			date = day - 274;
			printf("October %i", date);
		} else if (day > 244) {
			date = day - 244;
			printf("September %i", date);
		} else if (day > 213) {
			date = day - 213;
			printf("August %i", date);
		} else if (day > 182) {
			date = day - 182;
			printf("July %i", date);
		} else if (day > 152) {
			date = day - 152;
			printf("June %i", date);
		} else if (day > 121) {
			date = day - 121;
			printf("May %i", date);
		} else if (day > 91) {
			date = day - 91;
			printf("April %i", date);
		} else if (day > 60) {
			date = day - 60;
			printf("March %i", date);
		} else if (day > 31) {
			date = day - 31;
			printf("February %i", date);
		} else if (day >= 1) {
			date = day;
			printf("January %i", date);
		}
	} else {
		printf("Sorry bro you entered an invalid number \n");
	}
	return 0;

}