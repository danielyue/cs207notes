# Parallelism and Concurrency

## Parallelism
- run 10 things separately on 10 different computers, and then bring together the results.

## Concurrency
- run multiple processes on the same computer simultaneously
- "scheduling" business such that there are not empty cycles of computation
- "let's not waste any cycles doing nothing"

- GIL is not a problem in python becuase I/O and C processes can be run outside of the interpreter lock.
    - code must be structured to accommodate this

- threads are expensive, and switching between them takes time.
- multiple "threads" run within a single "process"
    - "what resources do you share?"
- Linux at one time --> every thread was a process

- need a way to yield control and to communicated between 'units of execution'

- generators are not created on the call stack, but rather the heap\

- gi_frame <--- "generator instance"

- "yield from" creates a 'pipe' ("delegating generator")
    - "reaps" from the subgenerator and returns to the delegating generator
    - used by the delegating generator
