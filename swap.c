#include "monty.h"

/**
 * f_swap - Swops the top of two elements of the stack
 * @head: head of stack
 * @counter: line number
 * Return: void
*/
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *stk = *head;
	int len = 0, i;

	while (stk)
	{
		stk = stk->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	stk = *head;
	i = stk->n;
	stk->n = stk->next->n;
	stk->next->n = i;
}
