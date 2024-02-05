#include "monty.h"

/**
 * f_mod - modifies the rest of the division between the
 * first two elements ontop of the stack
 * @head: head of the stack
 * @counter: line number
 * Return: void
*/
void f_mod(stack_t **head, unsigned int counter)
{
	stack_t *stk;
	int size = 0, i;

	stk = *head;
	while (stk) /* while (stk != NULL) */
	{
		stk = stk->next;
		size++;
	}
	if (size < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	stk = *head;
	if (stk->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = stk->next->n % stk->n;
	stk->next->n = i;
	*head = stk->next;
	free(stk);
}
