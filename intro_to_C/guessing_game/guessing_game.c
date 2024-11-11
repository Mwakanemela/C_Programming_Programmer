/************************************************

 guessing_game.c  - a simple guessing game

 Usage: 
	a random number is chosen between 1 and 100
	the player is given a set of bounds and must
	choose a number between them.

	if the player chooses the number, he wins.
	otherwise, the bounds are adjusted to reflect
	the player's guess and game continues
***********************************************/

#include <stdio.h>
#include <stdlib.h>

int number_to_guess;
int low_limit;
int high_limit;
int guess_count;
int player_number;
char line[80];

int main() {

	while(1) {
		number_to_guess = rand() % 100 +1;

		// init var loops
		low_limit = 0;
		high_limit = 100;
		guess_count = 0;

		while(1) {

			printf("Bounds %d - %d\n", low_limit, high_limit);
			printf("Value[%d}? ", guess_count);
//			printf("number to guess: %d\n", number_to_guess);
			++guess_count;

			fgets(line, sizeof(line), stdin);
			sscanf(line, "%d", &player_number);

			if(player_number == number_to_guess) 
				break;

			if(player_number < number_to_guess)
				low_limit = player_number;
			else
				high_limit = player_number;

		}
		printf("Bingo\n");
	}

	return 0;
}

