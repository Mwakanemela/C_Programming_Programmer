/* random.c */
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

int my_random_number(int max)
{
 int x;
 x = rand() % max + 1; // +1 to prevent from printing 0 as a random number

 return x;
}
int main()
{

 int random;

 srand(getpid()); // helps the rand funtion generate a random number on each execution
 random = my_random_number(50);
 printf("%d\n", random);

 random = my_random_number(100);
 printf("%d\n", random);
 return 0;
}
