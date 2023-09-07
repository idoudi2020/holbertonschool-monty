#include "monty.h"
/**
 * add_node - Adds a new node to the top of the stack.
 * @stack: Double pointer to the top of the stack.
 * @n: The integer to add to the stack.
 */
void add_node(stack_t **stack, int n)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = new_node;
	*stack = new_node;
}
