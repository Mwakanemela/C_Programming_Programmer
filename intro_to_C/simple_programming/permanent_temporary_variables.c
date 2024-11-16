#include <stdio.h>

int main() {

	int counter;

	for(counter = 0; counter < 3; counter++) {

		int temporary = 1; //temporary variable
		static int permanent = 1; //permanent variable

		printf("Permanent Variable: %d \t Temporary Variable: %d\n", permanent, temporary);

		++temporary;
		++permanent;
	}
	return 0;
}
