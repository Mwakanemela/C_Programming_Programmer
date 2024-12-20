/**************************************************

- fibonacci.c : 1 1 2 3 5 8 13...

- Author      : Mwakanemela Kayange

***************************************************/
#include <stdio.h>

int old_number; // previous fibonacci number
int current_number; // current fibonacci number
int next_number; // next number in series 

int main() {

	//starting point
	old_number = 1;
	current_number = 1;

	printf("1, "); //print first number

	while(current_number <= 100) {

		printf("%d, ", current_number);
		next_number = current_number + old_number;

		old_number = current_number;
		current_number = next_number;
	}
	return 0;
}
