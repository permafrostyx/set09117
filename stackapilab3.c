#include <stdio.h>

#define MAX 10

struct stack
{
	int array[MAX];
	int top;
};

void init_stack(struct stack *);
void init_stack(struct stack *s)
{
	s->top = -1;
}

void push(struct stack *, int item);
void push(struct stack *s, int item)
{
	if(s->top == MAX-1)
	{
		printf("stack is full. Couldn't push '%d' onto stack\n", item);
		return;
	}
	s->top++;
	s->array[s->top] = item;
}

int *pop(struct stack *);
int *pop(struct stack *s)
{
	int *data;
	if(s->top == -1)
	{
		printf("stack is empty\n");
		return NULL;
	}
	data = &s->array[s->top];
	s->top--;
	return data;
}	

int main(void)
{
	struct stack stacky;
	
	init_stack(&stacky);
	
	push(&stacky, 11);
	push(&stacky, 23);
	push(&stacky, -8);
	push(&stacky, 16);
	push(&stacky, 27);
	push(&stacky, 14);
	push(&stacky, 20);
	push(&stacky, 39);
	push(&stacky, 2);
	push(&stacky, 15);
	
	push(&stacky, 7);
	
	int *i = NULL;
	
	i = pop(&stacky);
	if(i) { printf("item popped: %d\n", *i); }
	
	i = pop(&stacky);
	if(i) { printf("item popped: %d\n", *i); }
	
	i = pop(&stacky);
	if(i) { printf("item popped: %d\n", *i); }
	
	i = pop(&stacky);
	if(i) { printf("item popped: %d\n", *i); }
	
	i = pop(&stacky);
	if(i) { printf("item popped: %d\n", *i); }
	
	i = pop(&stacky);
	if(i) { printf("item popped: %d\n", *i); }
	
	i = pop(&stacky);
	if(i) { printf("item popped: %d\n", *i); }
	
	i = pop(&stacky);
	if(i) { printf("item popped: %d\n", *i); }
	
	i = pop(&stacky);
	if(i) { printf("item popped: %d\n", *i); }
	
	i = pop(&stacky);
	if(i) { printf("item popped: %d\n", *i); }
	
	i = pop(&stacky);
	if(i) { printf("item popped: %d\n", *i); }
	
	return 0;
}