# How Python is implemented

### Execution environment for stupidlang
- stored things in an environment
- could use bindings in function definitions later
- lexical scopes were defined.
- cheated by using the python execution to do whatever wanted to do.
- "stillborn language" --- did not implement stacks or registers or anything

### The virtual machine
- takes syntax, creates abstract syntax tree, compiles AST into bytecode (.pyc files) -- similar to "assembly language code"
- Apple's Swift language compiles down to intermediate representation as well
- Numba (by Anaconda people) --- compiles python down to intermediate representation
- "JVM" bytecode

### The stack and frames
- each function has it own "data stack", only exists for execution of a specific code block
- "block stack" is used to deal with 'suites' of code (multiple lines of codes put together), like try...except.

### Code Objects
- 'dis' machinery -- assembly language instructions in bytecode
- stored in the python 'dis' module
- STORE_FAST: stores in the f_localsplus array (even faster than hash table)
- 
