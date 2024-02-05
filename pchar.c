#include "monty.h"

/**
 * f_pchar - Prints the char at the top of the stack
 * @head: head of the stack
 * @counter: line number
 * Return: void
*/
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *stk = *head;

	if (!stk)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (stk->n > 127 || stk->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", stk->n);
}
