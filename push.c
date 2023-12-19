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
void push(stack_t **stack, unsigned int line_number)
{
	int i, n;
	stack_t *top_ptr = *stack;
	stack_t *new_node = malloc(sizeof(stack_t));

	if (token2 == NULL)
	{
		fprintf(stderr, "L%u: usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}
	for (i = 0; token2[i] != '\0'; i++)
	{
		if (token2[i] < '0' && token2[i] > '9')
		{
			fprintf(stderr, "L%u: usage: push integer", line_number);
			exit(EXIT_FAILURE);
		}
	}
	n = atoi(token2);
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = n;
	new_node->next = top_ptr;
	new_node->prev = NULL;
	if (top_ptr)
		new_node->next->prev = new_node;
	*stack = new_node;
}
