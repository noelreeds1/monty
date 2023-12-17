#include "monty.h"
/**
 * op_handler - matches a token to its respective opcode.
 *
 *@token: str token for matching with opcode.
 *
 *Return: returns an opcode if true or fail if false.
 */
char *token_handler(char *token)
{
    instruction_t handler[] = {{"push", push},
                               {"pall", pall},
							   {NULL, NULL}};
}
