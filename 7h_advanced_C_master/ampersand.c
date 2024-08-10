/* ampersand.c */
#include<stdio.h>

void add(int a, int b, int *target)
{
 *target = a + b; // used * because we want to change the value at location
 return;
}

int main()
{
 int x = 10, y = 20, answer;

 add(x, y, &answer);
 printf("answer: %d\n", answer);
 return 0;
}
