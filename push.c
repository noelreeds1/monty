#include "monty.h"
/**
 * push - adds an element to the stack.
 *
 *@stack: a linear data structure.
 *
 *@line_number: where the opcode occurs.
 *
 * Return: A pointer to the top element recently added.
 */
char *push(stack_t **stack, unsigned int line_number)
{
	stack_t *top_ptr = *stack;
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = n;
	new_node->next = top_ptr;
	new_node->prev = top_ptr->next->prev;
	*stack = new_node;
	return (new_node);
}
