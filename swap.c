#include "monty.h"

/**
 * swap_ - Main entry point
 * Description: swaps the top two elements of the stack.
 * @head: head stack
 * @count: line number
 */
void swap_(stack_t **head, unsigned int count)
{
	stack_t *h;
	int leng = 0;
	int tmp;

	h = *head;
	while (h)
	{
		h = h->next;
		leng++;
	}
	if (leng < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		fclose(bear.file);
		free(bear.content);
		release_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	tmp = h->n;
	h->n = h->next->n;
	h->next->n = tmp;
}
