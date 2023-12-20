#include "monty.h"
/**
 * main - Entry point of a C program
 *
 *@argc: refers to the number of args passed.
 *
 *@argv: refers to the arguments passed.
 *
 *Return: Always 0.
 */
char *token2 = NULL;

int main(int argc, char **argv)
{
	char *token = NULL;
	unsigned int line_number = 1;
	FILE *stream;
	char *lineptr = NULL;
	size_t buff_size = 0;
	ssize_t num_read;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	stream = fopen(argv[1], "r");
	if (stream == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((num_read = getline(&lineptr, &buff_size, stream)) != -1)
	{
		token = strtok(lineptr, " \n");
		token2 = strtok(NULL, " \n");
		if (token != NULL)
			token_handler(&stack, token, line_number);
		line_number++;
	}
	free(lineptr);
	fclose(stream);
	exit(EXIT_SUCCESS);
}
