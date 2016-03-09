/*

Computer Architecture:
- In C, you're telling the computer exactly what to do.
- need to understand to code C well

instructions: primitive computational tasks. 

ALU --- Arithmetic logic unit, handles the computations

Process of addition
-------------------
1. Load from memory into registers
2. Compute addition
3. Return value to memory

there's a tradeoff between fast, expensive memory, and slow, cheap memory.
- Registers are the most expensive, fastest access memory
- hierarchy of memory quality. DRAM is still not that great.
- computer looks sequentially for stored memory.
- thing to notes: lots of moving parts going on.

python my_script.py --> python interpreter
1. opens file
2. reads line by line
3. interprets
4. runs instructions
"your scripts is a menu to be followed"

low-level languages: no interpreter
- feed the machine instructions directly.

*/ 
#include <stdint.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	// program here
	int64_t a=1, b=2, c;

	c = a+b;

	printf("c-%")
}

/*

-char <- flag that modifies the program
e.g. -o allows you to name the file that will be compiled.
		(otherwise it will default to a.out)

gcc -o add_two add_two.c
ls -l add_two

man <- manual page for gcc.

the 'add_two' file is not readable by humans -> machine readable

------------
Reval <-- read, eval, print loop. python does this when not given an argument.

This is impossible in a low level language because you have to use a compiler.
------------
Debugger --> tool that attaches around a program, and is able to freeze computation
				in time by freezing the internal state.

-g <-- creates a table, with the memory addresses of all variables.

gdb <-- dual of 'gcc'. example usage: gdb ./add_two
gdb commands:
	- list 			<-- prints out the symbols created when compiled with -g flag
	- run 			<-- runs the program that we fed the debugger
	- break x 		<-- stops the running of the code up until line x.
	- print var 	<-- prints out the value of variables
		- can do simple operations (discovered with gdb interpreter)
	- next 			<-- executes exactly 1 statement. This is important in large programs.
	- quit 			<-- exits the program

	- disassemble 	<-- dumps out assembler code for the function being run.
	- backtrace		<-- 'give me everything on current call stack'
-------------
Instructions <-- done by processors.
-------------
*/

/* Basic C Syntax
-----------------
Expressions : produces a value. Can be combined to form other expressions.

Statement 	: carries out an action. All statements end with ';'

Blocks		: Groups of statements. Variable are assigned in this scope.
				- similar to indentation in python

Static vs. Dynamic.
Static: type and size of variables must be decided before running.
Advantages --
1. compile time type-checking.

C has many many types, which you can look up.

Pointers: 
--------
int64_t x;
int64_t *p;
int64_t **q; <-- pointer to a pointer

p = &x; // x's location in memory
x = 10;
printf("x is %d\n",*p) <-- "dereferences" the pointer, getting the value

"ultimately, although C technically provides strings and array types, both
are just a thin wrapper around pointers."

strings --> last element of the array must be 0. 'zero termination'

Pointer casting
---------------
Compiler will not enforce the fact that the type in the pointer is maintained.
Example given: can take out smaller sized integers than put it. BE CAREFUL!
*/


with the apple gcc
run 
gcc -o add_two -g add_two.c
for gdb trouble, need to certify gdb.