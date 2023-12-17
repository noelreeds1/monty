#include "monty.h"
/**
 * pint - prints the value at the top of the stack.
 *
 *@stack: stack pointer.
 *
 *@line_number: line which contains the opcode.
 *
 */
void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *top_ptr = *stack;
	if (*top_ptr != NULL)
	{
		print("%d", top_ptr->n);
	}
	fprintf("stderr, L<line_number>: can't pint, stack empty\n");
	exit(EXIT_FAILURE);
}
