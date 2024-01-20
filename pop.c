#include "monty.h"

/**
 * pop_ - Main entry point
 * Description: removes the top element of the stack.
 * @head: head
 * @count: line number
 */
void pop_(stack_t **head, unsigned int count)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(bear.file);
		free(bear.content);
		release_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
