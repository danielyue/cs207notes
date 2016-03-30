# Concurrency 2.0 and Features
- a future is a token that can be queried to check on the status of a project
- time.sleep() function simulates what happens with network latency
    - gives up the Global Interpreter lock to allow other threads to run

## Processes vs. threads
- process handles: address space, global variables, open files, child processes, pending alarms, signals and signal handlers, accounting info
- thread handles program counter, registers, stack, and state
- user vs. kernel
    - user handled vs. OS handled

- CPU bound programs: computationally intensive
- I/O bound programs: lots of access with data on files

- python, every 100 rounds of byte code, will give up the GIL to allow the other operation to run. Only one can run at a given time, but that's okay.


## Sockets
- the basis of network programming
- more like a 'pipe' in Rahul's mind
- 'client socket' -- handles individual requests
- 'server socket' -- waits for client requests, and creates client sockets
    - 'server' socket sits and 'creates' client socket
- node.js uses 'non-blocking' sockets and a function called 'select'
