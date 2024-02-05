#include "monty.h"

/**
 * f_pall - Prints the stack
 * @head: head of the stack
 * @counter: N/A
 * Return: void
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *s;
	(void)counter;

	s = *head;
	if (!s) /* if (s == NULL) */
		return;
	while (s)
	{
		printf("%d\n", s->n);
		s = s->next;
	}
}
