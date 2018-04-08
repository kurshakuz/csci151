#include <stdio.h>
#include <math.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);

	char str;
	int i = 0;
	while (str != '\n') {
		str = getchar();
		if (str == 'a') {
			i++;
		} else {
			continue;
		}
	}
	printf("%i", i);
	return 0;
}