#include "monty.h"
/**
 *  * _pall - Prints all values in the stack from the top.
 *   * @stack: Pointer to a pointer to the stack.
 *    * @line_number: The line number (unused in this function).
 *     */
void _pall(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	stack_t *node = *stack;

	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
	}
}

