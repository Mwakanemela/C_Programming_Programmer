/******************************************


	* This program produces a Celsius to Fahrenheit conversion
	*
	chart for the numbers 0 to 100.
	


******************************************/

#include <stdio.h>

int counter;
int celsius = 0;
int main() {

	for (celsius = 0; celsius < 100; celsius++) {
	
		int celsius_to_fahrenheit = (celsius * 9) / 5 + 32;
	
		printf("Celsius: %d \t Fahrenheit: %d\n",celsius, celsius_to_fahrenheit);
		
	}
	return 0;
}