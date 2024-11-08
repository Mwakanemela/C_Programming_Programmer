/*******************************

- length.c : reads a line from keyboard and reports its length 
	     -it reads including spaces and add 1 for new line char = '\n'

- Author   : Mwakanemela Kayange

- Usage:   : gcc length.c  -o length
		./length
*******************************/


#include <stdio.h>
#include <string.h>

char line[100]; /* line to read and print its length */

int main() {

	printf("Enter a line: ");
	fgets(line, sizeof(line), stdin);

	printf("The length of the line is: %d\n", strlen(line));
	return 0;
}
