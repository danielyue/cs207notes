# What to do with Array's for Cython optimization
## Memoryviews
- being able to share memory between structures without constantly copying stuff
    - the other case it better in cases where you need to reason about things, like in spark
-  "strides" (to_next, bytes) defines how far you need to seek in memory to find the next section of memory.
- cython can import libc, which takes from the standard C library
- BLAS -- linear algebra library
- Look at Pycco for automatic documentation generation (takes from comments)
- for paper implementation, compare pure python implementation to numpy/scipy
