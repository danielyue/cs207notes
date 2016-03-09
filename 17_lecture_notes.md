# Binary Search Trees
----

- Last time we talked about heaps
    - always balanced
    - useful for finding medians in an n*log n fashion
    - can put heaps within an array and get a way with it

- today: binary search trees
    - can handle data of any size
    - data sets with many insertions and deletions
    - easily compute order statistics
    - should use a hash table if you don't need order

- insert_hook(self):
    - this is a way for subclasses to do something non-trivial even though the base class does note, for example keeping track of the number of things beneath.

- lecture comprised of going through
