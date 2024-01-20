#include "monty.h"
#include <stdio.h>

bear_t bear = {NULL, NULL, NULL, 0};
/**
 * main - Main entry point
 * @argc: argument count
 * @argv: file location for monty
 * Return: 0 (Success) or 1 (Fail)
 */
int main(int argc, char *argv[])
{
	char *content;
	FILE *file;
	size_t size = 0;
	stack_t *stack = NULL;
	ssize_t line_read = 1;
	unsigned int count = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bear.file = file;
	
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit (EXIT_FAILURE);
	}
	while (line_read > 0)
	{
		content = NULL;
		line_read = getline(&content, &size, file);
		bear.content = content;
		count++;

		if (line_read > 0)
		{
			exec(content, &stack, count, file);
		}
		free(content);
	}
	release_stack(stack);
	fclose(file);


	return (0);
}

