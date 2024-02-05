#include "monty.h"

/**
  *f_rotl- Rotates the stack to the top
  *@head: head of stack
  *@counter: line number
  *Return: void
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *temp, *new;

	temp = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	new = (*head)->next;
	new->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = new;
}
