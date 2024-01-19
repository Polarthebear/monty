#include "monty.h"

/**
 * pall_ - Main entry point
 * Description: function to print the stack
 * @head: head
 * @count: void
 */
void pall_(stack_t **head, unsigned int count)
{
	stack_t *tmp;
	(void)count;

	tmp = *head;
	if (tmp == NULL)
	{
		return;
	}
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
