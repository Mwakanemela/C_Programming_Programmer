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