#include <stdio.h>
#include "node.h"
#include <stddef.h>

struct stack {
	struct node *top;
	int size;
};

//function to initialize the stack
struct stack init();

//function to add to the stack
void push(struct stack *, int);