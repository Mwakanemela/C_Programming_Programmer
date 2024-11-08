/***********************
Demo of a 2d array
***********************/

#include <stdio.h>

int array[3][2]; //array of numbers
char *names[2];

int main() {

	int x, y;

	names[0] = "Mwaka";
	names[1] = "Nemela";
	printf("%s\n", names[0]);
	array[0][0] = 1;
	array[0][1] = 2;
	array[1][0] = 3;
	array[1][1] = 4;
	array[2][0] = 5;
	array[2][1] = 6;

	printf("array[%d][%d]", 0,0);
	printf("%d ", array[0][0]);
	printf("%d ", array[0][1]);
	printf("\n");
	return 0;
}
