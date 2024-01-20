#include "monty.h"

/**
 * pint_ - Main entry point
 * Description: Print value at top of stack
 * @head: head
 * @count: line number
 */
void pint_(stack_t **head, unsigned int count)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(bear.file);
		free(bear.content);
		release_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
