#include <stdio.h>

char line[100]; //line of data from input
int result;
char operator;
int value;

int main() {

	result = 0;
	
	//loop forever - or - till we hit break
	while(1) {
		printf("Result: %d\n", result);
		
		printf("Enter operator and number: ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%c %d", &operator, &value);
	
		if((operator == 'q') || (operator == 'q')) {
			break;
		}
		if(operator == '+') {
			result += value;
		}else if(operator == '-') {
			result -= value;
		}else if(operator == '*') {
			result *= value;
		}else if(operator == '/') {
			if(value == 0) {
				printf("Error: Divide by zero\n");
				printf("Operation ignored\n");
			}else {
				result /= value;
			}
		}
		else {
			printf("Unknown operator %C\n", operator);
		}	
	}
	return 0;
}