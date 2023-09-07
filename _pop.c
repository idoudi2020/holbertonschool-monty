#include "monty.h"
/**
 * _pop - Removes the top element from the stack.
 * @stack: Pointer to a pointer to the stack.
 * @line_number: The line number where the function is called.
 */
void _pop(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	stack_t *top = *stack;
	*stack = top->next;

	if (*stack)
		(*stack)->prev = NULL;

	free(top);
}
