#include "monty.h"
/**
 * main - Entry point of a C program
 *
 *@argc - refers to the number of args passed.
 *
 *@argv - refers to the arguments passed.
 *
 *Return: Always 0.
 */
int main(int argc, char **argv)
{
    char *token, *token2;
    unsigned int line_num = 0;
    FILE *stream;
    char *lineptr;
    size_t buff;
    ssize_t num_read;

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
    while((num_read = getline(&lineptr, &buff, stream)) != -1)
    {
        line_num++;
        token = strtok(lineptr, " ");
        token2 = strtok(NULL, " ");
    }
    return (0);
}
