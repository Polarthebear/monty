#include "monty.h"
/**
 * release_stack - Main entry point
 * Description: Function that frees a linked list
 * @head: head
 */
void release_stack(stack_t *head)
{
	stack_t *tmp;

	tmp = head;
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
