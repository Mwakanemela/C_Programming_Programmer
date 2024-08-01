/* numbers.c */
#include <stdio.h>

int main()
{
 int x, y, answer;
 
 printf("Enter first  number\n");
 scanf("%d", &x);

 printf("Enter second number\n");
 scanf("%d", &y);

 answer = x + y;

 printf("The answer is(=): %d\n", answer);
 
 return 0;
}
