/*****************************************************

	draws a diagonal line across the graphics array
	and then prints the array on the terminal

******************************************************/

#include <stdio.h>

#define X_SIZE 40 // size of array in X direction
#define Y_SIZE 60 // size of array in Y direction

/**********

* we use X_SIZE/8 
* because we pack 8 bits per byte
********/
char graphics[X_SIZE/8][Y_SIZE]; //graphics data

#define SET_BIT(x,y) graphics[(x)/8][y] |= (0x80 >>((x)%8))

int main() {

	int location; //current location to set
	void print_graphics(void); //print data
	
	for(location = 0; location < X_SIZE; ++location)
		SET_BIT(location, location);
		
	print_graphics();
	return 0;
}

void print_graphics(void) {

	int x; //current x byte
	int y; //current y location
	unsigned int bit; //bit we are testing in current byte
	
	for(y=0; y<Y_SIZE; ++y) {
		//loop for each byte in array
		for(x=0; x<X_SIZE/8; ++x) {
			//handle each bit
			for(bit = 0x80; bit > 0; bit = (bit >> 1)) {
			
				if((graphics[x][y] & bit) != 0)
					printf("X");
				else
					printf(".");
			}
		}
		printf("\n");
	}
}
