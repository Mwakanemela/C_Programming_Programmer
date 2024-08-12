/* function pointers */
#include<stdio.h>
#define F fflush(stdout)
#define ADDITION 1
#define SUBTRACTION 2
#define DIVISION 3
#define MULTIPLICATION 4

void  addition(int *target, int a, int b)
{
 *target = a + b;
 return;
}

void subtraction(int *target, int a, int b)
{
 *target = a - b;
 return;
}

void division(int *target, int a, int b)
{
 if(b == 0)
 {
  printf("Cannot divide with nothing(zero)\n");
  *target = 0;
 }
 else 
 {
  *target = a / b;
  return;
 }
}

void multiplication(int *target, int a, int b)
{
 *target = a * b;
 return;
}

int main()
{
 int x, y, op, result;

 void (*fp)(int *, int, int); //function pointer

 printf("Enter 1 to add, 2 to subtract, 3 to divide, 4 to multiply and 0 to exit\n");
 scanf("%d", &op);

 switch(op)
 {
  case ADDITION:
   fp = addition;
   break;
  
  case SUBTRACTION:
   fp = subtraction;
   break;

  case DIVISION:
   fp = division;
   break;

  case MULTIPLICATION:
   fp = multiplication;
   break;

  default:
   return 0;
 }

 printf("Enter num1: "); F;
 scanf("%d", &x);
 printf("Enter num2: "); F;
 scanf("%d", &y);

 (fp)(&result, x, y);

 printf("Answer = %d\n", result);
 return 0;
}
