#include "monty.h"

/**
 * insert_node - Main entry point
 * Description: function to add a node to the head stack
 * @head: head stack
 * @n: new_value
 */
void insert_node(stack_t **head, int n)
{
	stack_t *new, *tmp;

	tmp = *head;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error\n");
		exit(0);
	}

	if (tmp)
	{
		tmp->prev = new;
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
}
