#include "monty.h"

/**
 * f_add - Adds the top two elements of the stack
 * @head: head of stack
 * @counter: line number
 * Return: void
*/
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *stk;
	int len = 0, i;

	stk = *head;
	while (stk)
	{
		stk = stk->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	stk = *head;
	i = stk->n + stk->next->n;
	stk->next->n = i;
	*head = stk->next;
	free(stk);
}
