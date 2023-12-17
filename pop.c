#include "monty.h"
/**
 * pop - removes an element at the top of the stack.
 *
 *@stack: stack pointer.
 *
 *@line_number: line where the element occurs.
 *
 * Return: Returns the address of new element.
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *top_ptr = *stack;
	stack_t *del_node = malloc(sizeof(stack_t));

	if (*stack != NULL)
	{
		if (del_node != NULL)
		{
			del_node->next->prev = NULL;
			top_ptr = del_node->next;
			return (top_ptr);
		}
		fprintf(stderr, "Error: malloc failed\n");
	}
	fprintf(stderr, "L<line_number>: can't pop an empty stack\n");
	exit(EXIT_FAILURE);
}
