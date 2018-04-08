#include <stdio.h>
#include <math.h>


int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
    char str;
	while (str != '\n') {
		str = getchar();
		if (str < 123 && str > 96) {
		    str = str - 32;
		    printf("%c", str);
		} else {
		    printf("%c", str);
		}
	}
	return 0;
}