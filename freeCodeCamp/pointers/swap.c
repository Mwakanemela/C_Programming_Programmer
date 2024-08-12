/*swap.c*/
#include <stdio.h>

void swap(int *num1, int *num2)
{
 int temp;

 temp = *num1;
 *num1 = *num2;
 *num2 = temp;
 return;
}


int main()
{
 int num1 = 20, num2 = 24;

 printf("Before: num1 = %d and num2 = %d\n", num1, num2);
 swap(&num1, &num2);
 printf("After: num1 = %d and num2 = %d\n", num1, num2);
 return 0;
}
