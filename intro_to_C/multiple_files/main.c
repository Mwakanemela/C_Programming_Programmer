/**************************************************
This code demonstrates the use of header files
to compile use gcc add.c add.h main.c -o main
- to run with make file use => make mwaka_make_file
Author: Mwakanemela Kayange - 2024
**************************************************/
#include <stdio.h>
#include "add.h"

int main(void) {
	int sum = add(5, 5);

	printf("Sum is: %d\n", sum);

	return 0;
}
