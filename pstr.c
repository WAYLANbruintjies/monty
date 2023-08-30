#include "monty.h"
/**
 * f_pstr - Prints the value at top of the stack, followed by a new line
 * @head: head of the stack
 * @counter: line number
 * Return: void
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *stk = *head;
	(void)counter;

	while (stk != NULL) /* while (stk == TRUE) */
	{
		if (stk->n > 127 || stk->n <= 0)
		{
			break;
		}
		stk = stk->next;
		printf("%c", stk->n);
	}
	printf("\n");
}
