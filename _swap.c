#include "monty.h"
/**
 * _swap - Swaps the positions of the top two elements in the stack.
 *  @stack: Pointer to a pointer to the stack.
 *  @line_number: The line number where the function is called.
 */
void _swap(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	int swap = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = swap;
}
