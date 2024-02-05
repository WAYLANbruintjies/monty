#include "monty.h"

/**
  *f_sub - subtration
  *@head: head of stack
  *@counter: line number
  *Return: void
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *stk;
	int sub, nodes;

	stk = *head;
	for (nodes = 0; stk != NULL; nodes++)
		stk = stk->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	stk = *head;
	sub = stk->next->n - stk->n;
	stk->next->n = sub;
	*head = stk->next;
	free(stk);
}
