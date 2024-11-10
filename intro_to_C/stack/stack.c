#include "stack.h"
#include <stdlib.h>

struct stack init() {
	struct stack ret = {NULL, 0};
	return ret;
};

void push(struct stack *s, int val) {
	struct node *newNode = malloc(sizeof(struct node));
	
	if(s->size == 0) {
		newNode->value = val;
		newNode->next = NULL;
		
		s->top = newNode;
		s->size++;
	}else {
		newNode->value = val;
		newNode->next = s->top;
		s->top = newNode;
		
		s->size++;
	}
}

int peek(struct stack *s) {
	if(s->size > 0) {
		return s->top->value;
	}else {
		printf("Invalid peek operation because there is nothing in the stack\n");
		return -1;
	}
}

int pop(struct stack *s) {
	if(s->size > 0) {
		int val = s->top->value; //get top value
		s->top = s->top->next; //point top to the next value in stack
		s->size--; //decrease the size
		
		return val;
	}else {
		printf("Invalid pop operation because there is nothing in the stack\n");
		return -1;
	}

}


