/***************************************************

- ful_name.c : a program that reads first & last name then displays full name

- Author     : Mwakanemela Kayange

- Usage      : gcc full_name.c -o full_name

**************************************************/

#include <stdio.h>
#include <string.h>

char first_name[100];
char last_name[100];
char full_name[200];

int main() {

	printf("Enter first name: ");
	fgets(first_name, sizeof(first_name), stdin);

	// trim of last char(\n) to be end of string char(\0)
	first_name[strlen(first_name)-1] = '\0';

	printf("Enter last name: ");
	fgets(last_name, sizeof(last_name), stdin);

	//trim off last char
	last_name[strlen(last_name)-1] = '\0';

	strcpy(full_name, first_name);
	strcat(full_name, " ");
	strcat(full_name, last_name);

	printf("Your name is: %s\n", full_name); 
	return 0;
}
