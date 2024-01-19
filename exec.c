#include "monty.h"

/**
 * exec - Main entry point
 * Description: Function to execute the opcode
 * @stack: head of linked list
 * @count: line count
 * @file: pointer to monty file
 * @content: line content
 * Return: 1 (success) or 0 (fail)
 */
int exec(char *content, stack_t **stack, unsigned int count, FILE *file)
{
	instruction_t opp_stack[] = 
	{
		{"push", push_}, {"pall", pall_}, {NULL, NULL}
	};

	unsigned int i = 0;
	char *opp;

	opp = strtok(content, " \n\t");
	if (opp && opp[0] == '#')
		return (0);
	bear.arg = strtok(NULL, " \n\t");
	while (opp_stack[i].oppcode && opp)
	{
		if (strcmp(opp, opp_stack[i].opcode == 0)
		{

		}
	}
