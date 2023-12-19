#include "monty.h"
/**
 * pall - prints elements of a stack.
 *
 *@stack: refers to the stack.
 *
 *Return: Always 0.
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *top_ptr = *stack;
	(void)line_number;

	while (top_ptr)
	{
		printf("%d\n", top_ptr->n);
		top_ptr = top_ptr->next;
	}
}
