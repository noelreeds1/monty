#include "monty.h"
/**
 * token_handler - matches a token to its respective opcode.
 *
 *@line_number: where opcode occurs.
 *
 *@stack: refers to stack pointer.
 *
 *Return: returns an opcode if true or fail if false.
 */
void token_handler(stack_t **stack, char *token, unsigned int line_number)
{
	unsigned int i = 0;

	instruction_t handler[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL},
	};
	while (handler[i].opcode)
	{
		if ((strcmp(token, handler[i].opcode) == 0))
		{
			handler[i].f(stack, line_number);
			break;
		}
		i++;
	}
	if (!handler[i].opcode)
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", line_number, token);
		exit(EXIT_FAILURE);
	}
}
