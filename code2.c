#include "monty.h"

/**
 * _add - Adds the top two elements in the stack.
 * @stack: Pointer to a pointer to the stack.
 * @line_number: The line number where the function is called.
 */
void _add(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n += (*stack)->n;
	_pop(stack, line_number);
}

/**
 * _nop - Does nothing.
 * @stack: Pointer to a pointer to the stack.
 * @line_number: The line number where the function is called.
 */
void _nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
