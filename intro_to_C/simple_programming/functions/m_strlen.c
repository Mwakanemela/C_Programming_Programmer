/************************************************************

	performs the same function as the string.h library
		strlen
**********************************************************/
#include <stdio.h>

int length(char string[]) {

	int index;
	
	for(index = 0; string[index] != '\0'; ++index){}
		//do nothing
	return index;
}

int main(void) {

	char line[100];
	printf("Enter a string: ");
	fgets(line, sizeof(line), stdin);
	
	printf("Length of string including newline character is: %d\n", length(line));
	return 0;
}