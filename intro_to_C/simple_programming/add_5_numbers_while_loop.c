/****************************************************

 add_5_numbers.c: a while loop to add 5 numbers
 
 Usage: gcc filename.c -o filenameObject
 
****************************************************/

#include <stdio.h>

int total; // total of all the numbers
int current; // current value from the user
int counter; // while loop counter

char line[80]; // line from keyboard

int main() {

	total = 0;
	counter = 0;
	
	while(counter < 5) {
		
		printf("Number: ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%d", &current);
		
		total += current;
		
		++counter;
		
	}
	printf("Total: %d\n:", total);
	return 0;
}
