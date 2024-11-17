/**********************************************

	execute this code using preprocessor output
		cc -E demo.c
	please do check the last line
	
************************************************/
#include <stdio.h>

#define MAX =10

int main() {

	int counter;
	
	for (counter = MAX; counter > 0; --counter)
		printf("Hi there\n");
	return 0;
}