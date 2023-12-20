#include "monty.h"
/**
 * free_monty - frees allocated memory.
 *
 *@stack: refers to a stack pointer.
 *
 *@line_number: where malloc occurs
 *
 * Return: Always 0.
 */
void free_monty(stack_t **stack, stack_t *new_node)
{
	if (!*stack)
	{
		free(new_node->next);
		free(*stack);
		*stack = NULL;
	}
	free(new_node);
	free(*stack);
	*stack = NULL;
}
