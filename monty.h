#ifndef MONTY_H
#define MONTY_H

#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>
#include <sys/types.h>
#include <fcntl.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct bear_s - Main entry point
 * Description: args, file & line content
 * @arg: value
 * @file: pointer to monty
 * @content: line_content
 * @lifi: flag change
 */
typedef struct bear_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
} bear_t;
extern bear_t bear;


/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


/*Function Prototypes*/
void push_(stack_t **head, unsigned int count);
void pall_(stack_t **head, unsigned int count);
int exec(char *content, stack_t **stack, unsigned int count, FILE *file);
void release_stack(stack_t *head);
void insert_node(stack_t **head, int n);
void insert_queue(stack_t **head, int n);
int main(int argc, char *argv[]);
void pint_(stack_t **head, unsigned int count);


#endif
