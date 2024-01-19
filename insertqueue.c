#include "monty.h"

/**
 * insert_queue - Main entry point
 * Description: Insert node to tail stack
 * @head: head
 * @n: new value
 */
void insert_queue(stack_t **head, int n)
{
	stack_t *new, *tmp;

	tmp = *head;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error\n");
	}

	new->n = n;
	new->next = NULL;

	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
	}
	if (!tmp)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		tmp->next = new;
		new->prev = tmp;
	}
}
