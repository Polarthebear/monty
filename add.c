#include "monty.h"

/**
 * add_ - Main entry point
 * Description: adds the top two elements of the stack.
 * @head: Head stack
 * @count: line number
 */
void add_(stack_t **head, unsigned int count)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", count);
		fclose(bear.file);
		free(bear.content);
		release_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	tmp = h->n + h->next->n;
	h->next->n = tmp;
	*head = h->next;
	free(h);
}
