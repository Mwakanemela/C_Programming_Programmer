/*****************************************************
 to run the code: gcc stack.h stack.c node.h main.c -o main

***************************************************/

#include <stdio.h>
#include "stack.h"

int main(void) {
	struct stack s = init();
	push(&s, 1);
	push(&s, 2);
	
	//peek(&s);
	//pop(&s);
	printf("top value: %d\n", s.top->value);
	printf("peek: %d\n", peek(&s));
	printf("pop: %d\n", pop(&s));
	printf("peek: %d\n", peek(&s));
	return 0;
}