#include "monty.h"

/**
 * treat_instructions - Reads file line by line executes Monty instructions
 * @file: Pointer to the file to be read.
 * @stack: Double pointer to the stack.
 */
void treat_instructions(FILE *file, stack_t **stack)
{
	char *line = NULL;
	size_t len = 0;
	size_t read;
	char *opcode;
	unsigned int line_num = 0;
	static const instruction_t instructions[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{NULL, NULL}
	};

	for (line_num = 1; (read = getline(&line, &len, file)) != -1; line_num++)
	{

		line[strcspn(line, "\n")] = '\0';
		opcode = strtok(line, " \t\r");

		if (opcode == NULL)
			continue;

		int i;

		for (i = 0; instructions[i].opcode; i++)
		{
			if (strcmp(opcode, instructions[i].opcode) == 0)
			{
				instructions[i].f(stack, line_num);
				break;
			}
		}

		if (instructions[i].opcode == NULL)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_num, opcode);
			exit(EXIT_FAILURE);
		}
	}

	free(line);
}
