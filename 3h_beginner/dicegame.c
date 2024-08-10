/* dicegame.c 
 A dice game where player has K1000 at game start.
 You bet. Then dice is thrown then you either lose(subtract from balance) or win(triple the bet).
*/

#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h> //for using rand()

/* function to generate a random number between 1 and max */
int random_number(int max)
{
 return rand() % max + 1;
}

int main()
{
 int balance = 1000, bet, guess, dice;

 /*seeding the random number generator */
 srand(getpid()); 

 while(1)
 {
  printf("Make your bet: ");
  fflush(stdout);
  scanf("%d", &bet);
 
  printf("Make a guess (1-6) and 0 to quit: ");
  fflush(stdout);
  scanf("%d", &guess);
 
  if(guess == 0) 
   return 0;

  if(guess < 1 || guess > 6)
  {
   printf("Invalid guess\n");
   continue;
  }

  printf("Throwing the dice...\n");
  sleep(2);
  dice = random_number(6); 

  printf("Dice result is: %d\n", dice);

  if(guess != dice)
  {
   printf("You lost!!\n");
   balance -= bet;
  }
  else 
  {
   bet *= 3;
   balance += bet;
   printf("Congratulations:: you WON\n");
  }

  if(balance <= 0)
  {
   printf("GAME OVER\n");
   return 0;
  }

  printf("Your balance is now at: %d\n", balance);
 }
 return 0;
}
