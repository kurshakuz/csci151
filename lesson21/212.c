#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

double strToDouble(const char str[]) {
	int i;
	double dValue, result = 0, deciResult=0, multiple=1;
	_Bool isDecimal = 1, isNegative=0, isE=0;
	
	for (i = 0; (str[i] >= '0' && str[i] <= '9') || str[i]=='-' || str[i]=='.'; i++) {
		if(str[i]=='-') {isNegative = 1; continue;}
		if(str[i] == '.') {isDecimal = 0; break;}
		dValue = str[i] - '0';
		result = result * 10 + dValue;
	}

	if(!isDecimal) {
		int degree = i+1, j;
		for(j = i+1; (str[j] >= '0' && str[j] <= '9') || str[j]=='e'; j++, degree++) {
			if(str[j]=='e') {isE = 1; j++; break;}
			dValue = str[j] - '0';
			deciResult = deciResult*10 + dValue;
			degree++;
		}

		while(degree>j) {
			deciResult /= 10;
			degree--;
		}

		degree = 0;

		if(isE) {
			int asd=0, sum=0;
			_Bool negativeDegree=0;
			for(; (str[j] >= '0' && str[j] <= '9') || str[j]=='e' || str[j]=='-'; j++) {
				if(str[j]=='-') {negativeDegree=1; continue;}
				asd = str[j] - '0';
				if(negativeDegree) asd = -asd;
				sum = sum*10 + asd;
			}
			multiple = pow(10, sum);
		}

	}

	result += deciResult;
	result *= multiple;
	if(isNegative) result *= -1;
	return result;

	return (double) atof(str);

}

int main() {
	printf("%lf\n", strToDouble("123456"));
	printf("%lf\n", strToDouble("-123.456"));
	printf("%lf\n", strToDouble("123.456e13"));
	printf("%lf\n", strToDouble("123.456e-13"));
	printf("%lf\n", strToDouble("test"));

	return 0;
}