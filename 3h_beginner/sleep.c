/* sleep.c */
#include<stdio.h>
#include<unistd.h> // inorder to use the sleep function

int main()
{
 printf("starting program...");
 fflush(stdout);
 sleep(2); // pause for 2 seconds
 printf("\nClose program");

 return 0;
}
