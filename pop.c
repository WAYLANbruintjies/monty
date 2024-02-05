#include "monty.h"

/**
 * f_pop - Prints the top
 * @head: head of stack
 * @counter: line number
 * Return: void
*/
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *stk;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	stk = *head;
	*head = stk->next;
	free(stk);
}
