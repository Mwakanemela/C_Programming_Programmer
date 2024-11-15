/*********************************

 - this program reads a list of five numbers and counts the number of
   3s and 7s in the data
*********************************/

#include <stdio.h>

char line[70];
int seven_count;
int three_count;
int data[5];
int i; // i stands for index

int main() {

	seven_count = 0;
	three_count = 0;
	
	printf("Enter 5 number\n");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d %d %d %d %d", 
		&data[0], &data[1], &data[2],
		&data[3], &data[4]
	);
	
	for (i = 0; i < 5; i++) {
		if(data[i] == 3)
			++three_count;
			
		if(data[i] == 7)
			++seven_count;
			
						
	}
	printf("Threes: %d\t Sevens: %d\n", three_count, seven_count);
	return 0;
}