/***********************************

	A calculator using switch statements
	
***********************************/
#include <stdio.h>

int value, result = 0;
char line[80];
char operator;

int main() {

	while(1) {
		printf("Enter operator number: ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%c %d", &operator, &value);
		
		if((operator == 'q') || (operator == 'Q'))
			break;
			
		switch(operator) {
			case '+':
				result += value;
				break;
			case '-':
				result -= value;
				break;
			case '*':
				result *= value;
				break;
			case '/': 
				if(value == 0) {
					printf("Operation failed cant divide with zero\n");
					
				}else {
					result /= value;
				}
				break;
			default: 
				printf("Invalid operator => e.g + 2024\n");
				
				
		}
		printf("Result: %d\n", result);
	}
	return 0;
}