/****************************************************

 add_5_numbers_for_loop.c: a for loop to add 5 numbers
 
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
				      //++counter - whats them difference
	for(counter = 0; counter < 5; counter++) {
	
                printf("Number: ");
                
                
		fgets(line, sizeof(line), stdin);
                sscanf(line, "%d", &current);	
                
                 total += current;
	
	}
       
       /* while(counter < 5) {
	
	
		++counter;

        }*/
        printf("Total: %d\n:", total);
        return 0;
}
