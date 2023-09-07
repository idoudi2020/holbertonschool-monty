#include "monty.h"
/**
 *  * _pint - Prints the value of the top element in the stack.
 *   * @stack: Pointer to a pointer to the stack.
 *    * @line_number: The line number where the function is called.
 *
 */
void _pint(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
