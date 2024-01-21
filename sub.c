#include "monty.h"

/**
 * sub_ - Main entry point
 * Description: subtracts the top element of the stack 
 * from the second top element of the stack.
 * @head: head stack
 * @count: line number
 */
void sub_(stack_t **head, unsigned int count)
{
	stack_t *tmp;
	int node, subs;

	tmp = *head;
	for (node = 0; tmp != NULL; node++)
		tmp = tmp->next;
	if (node < 2)
	{
		fprintf(stderr, "L5d: can't sub, stack too short\n", count);
		fclose(bear.file);
		free(bear.content);
		release_stack(*head);
		exit(EXIT_FAILURE);
	}

	tmp = *head;
	subs = tmp->next->n - tmp->n;
	tmp->next->n = subs;
	*head = tmp->next;
	free(tmp);
}
