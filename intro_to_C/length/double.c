/****************************************************

- double.c : I use sscanf to get and then double a number from the user

*****************************************************/

#include <stdio.h>
#include <string.h>

int main() {

	char line[100];
	int value;

	printf("Enter a value: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &value);

	printf("Twice %d is %d\n", value, value*2);

	return 0;

}
