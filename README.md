<p align="center">
  <img width="1500" alt="monty" src="https://github.com/idoudi2020/holbertonschool-monty/assets/124044887/2d732141-4e6e-4a9e-aef8-c9402e0c124d">
          </p>

# `Monty Language Interpreter`

This project is a simple Monty language interpreter written in C. Monty is a scripting language that is first compiled into Monty byte codes. It relies on a unique stack, with specific instructions to manipulate it.

## `Files and their functions`

1. `monty.h` - Contains all function prototypes, struct definitions, and library includes.

2. `main.c` - The entry point of the program. It opens the bytecode file, reads each line, and passes the opcode to the interpreter.

3. `treat_instructions.c` - Contains the interpreter function which compares the opcode to known instructions and executes the corresponding function.

4. `add_node.c` - Contains the functions for creating a new node, pushing it onto the stack, and printing all elements of the stack.

5. `_isdigit.c` - Contains a function for checking if a given string contains only digits.

6. `free_all.c` - Contains a function for freeing a doubly linked stack.

7. `_pint.c _pop.c _swap.c _pall.c _push.c` - Contains functions to pushes an integer onto the stack and print the top element of the stack, remove the top element of the stack, and swap the top two elements of the stack,and prints all values in the stack from the top

8. `_add.c _nop.c` - Contains functions to add the top two elements of the stack and to perform a no-operation command

9. `parse_arg.c`  -Contains functions to parse arguments to ensure it's a valid integer

10. `open_file.c` -Contains functions to reading and handles errors

## `Requirements`
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

To compile the simple shell, run:, execute:
```bash
$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```
## `Usage`

The Monty language interpreter can be compiled and run with a Monty byte code file as follows:

```bash
USER@ubuntu:~/monty$ cat -e bytecodes/00.m
push 1$
push 2$
push 3$
pall$
USER@ubuntu:~/monty$ ./monty bytecodes/00.m
3
2
1
USER@ubuntu:~/monty
```
In the `bytecodes/` directory, you'll find some examples of Monty byte code files.
## `Opcodes`
The following opcodes are supported:

- `push`: pushes an element to the stack.
- `pall`: prints all the values on the stack.
- `pint`: prints the value at the top of the stack.
- `pop`: removes the top element of the stack.
- `swap`: swaps the top two elements of the stack.
- `add`: adds the top two elements of the stack.
- `nop`: doesn’t do anything.

## `Memory Management`
The program frees all dynamically allocated memory before exiting, ensuring there are no memory leaks.

## `Error Handling`
The program has extensive error handling for scenarios such as incorrect usage, inability to open the file, invalid instructions, invalid arguments to instructions, and failures to malloc memory. In such cases, the program exits with the status `EXIT_FAILURE`.
## `License`
Authors :
-Idoudi Mokhtar  < 6181@holbertonstudents.com >
-saima riaz < 6738@holbertonstudents.com >

**This project was made as part of the curriculum in HOLBERTON SCHOOL**

<p align="center">
  <a href="https://www.holbertonschool.com/"target="_blank"><img src="https://user-images.githubusercontent.com/97880395/181658846-6e76edce-7d56-4abe-8c62-228479bde436.png" </a>
          </p>
