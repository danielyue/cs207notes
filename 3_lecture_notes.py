def factorial_recursive(n):
    if n==1:
        return 1
	return n*factorial_recursive(n-1)

def factorial_iterative(n):
    total, k = 1, 1
    while k <= n:
        total = total * k
        k = k + 1
    return total

a = factorial_recursive(3)
b = factorial_iterative(3)

print(a)
print(b)

"""
Recursive frame vs. iterative frames
------------------------------------

For factorial, n frames made for input argument n.

For iterative, 1 frame made, but many local variables are manipulated.

Python is a 'garbage collector language'. It frees memory when you don't need
it any more via a process called 'reference counting'. This can definitely affect
the speed of performance of a program.

Frames in closures have been popped off the stack, but are kept around for later reference

"""

"""
Complexity of basic operations
------------------------------

The model we will use is whats known as the RAM model. We abstract the details of the machine away, and assume a single process not interrupted by context switching or similar
- each simple operation (+, -, *, =, if, func call) are charged 1
- loops are considered to be O(iterations) where iterations may depend on n
- each memory access takes O(1), with infinite memory, and no worry about disk.

"""
"""
Tail Recursion Elimination
--------------------------

Some languages (like OCaml) allow for stack frames to be replaces as recursion happens
if that stack no longer requires something to be done (it returns the output of the smaller function)

"""
