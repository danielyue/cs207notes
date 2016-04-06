# Concurrency and the Asyncio Module
- Futures
    - responsible for accumulating callbacks to run on awaited result
    - passed up, keeps track of what needs to happen even outside of self.fetch()
- Code walkthrough
    - using generators (refactored)
    - Task is the "coroutine driver"

- remember to run loop.close() when running from a file!
- can read about file I/O in the rest of the lecture; not covered by Rahul

- asyncio: handles the task and the Futures
    - Task becomes the 'state of the computation'

- Coroutines
    - event loop/ task
    - fetcher.fetch() yield from (top level co-routine)
    - read_all() yield from
    - read() yield from
    - future
        - fancy way of saying "yield future" and stop.
    - event loop sees what has come in. set the result of the future, step.
