#include "monty.h"

/**
  *f_rotr - Rotates the stack to the bottom
  *@head: head of stack
  *@counter: line number
  *Return: void
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *new_stk;

	new_stk = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (new_stk->next)
	{
		new_stk = new_stk->next;
	}
	new_stk->next = *head;
	new_stk->prev->next = NULL;
	new_stk->prev = NULL;
	(*head)->prev = new_stk;
	(*head) = new_stk;
}
