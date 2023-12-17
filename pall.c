#include "monty.h"
/**
 * pall - prints elements of a stack.
 *
 *@stack: refers to the stack.
 *
 *Return: Always 0.
 */
void pall(stack_t **stack)
{
	stack_t *top_ptr = *stack;
	while (top_ptr)
	{
		printf("%d", top_ptr->n);
		top_ptr = top_ptr->next;
	}
}
