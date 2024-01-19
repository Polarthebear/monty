#include "monty.h"

/**
 * push_ - Main entry point
 * Description: push element to stack
 * @head: head of stack
 * @count: line number
 */
void push_(stack_t **head, unsigned int count)
{
	int i, j;
	int flag = 0;

	if (bear.arg)
	{
		if (bear.arg[0] == '-')
			j++;
		for (j = 0; bear.arg != '\0'; j++)
		{
			if (bear.arg[j] > 57 || bear.arg[j] < 48)
				flag = 1;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", count);
			fclose(bear.file);
			free(bear.content);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(bear.file);
		free(bear.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	i = atoi(bear.arg);

	if (bear.lifi == 0)
		addnode(head, i);
	else
		addqueue(head, i);
}

