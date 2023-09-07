#include "monty.h"

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
