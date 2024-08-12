/* change value using pointers in c */
#include <stdio.h>

void change_value(int *number);

int main()
{
 int number = 2023;

 printf("Before change value function: %d\n", number);
 change_value(&number);
 
 printf("After change value function: %d\n", number);
 return 0;
}

void change_value(int *number)
{
 *number = 2024;
 return;
}
