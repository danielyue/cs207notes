Mental Models for approaching software design:
==============================================

A. Programming Paradigm: fundamental approach to software
------------------------------------------------------
1. Imperative Programming
  - "goto" function -> jump to places in the code -> "spaghetti code"
2. Functional Programming
  - Everything that you do has some value.
  - item-potent functions; always repeatable results (no side effects)
3. Object oriented
  - a.add(b)
  - stdio.print(4)
  - everything in the context of an object
4. Declarative (like 'constraint programming')
  - don't tell the machine what to do, but rather ask what you want.
  - y < a + b
  - y = x + 1
  - y > 0
  - e.g. SQL.
5. Event-Driven
  - "event loop" waits for events and responds accordingly.

B. Problem-solving Strategies
-----------------------------
- classifying _types_ of problems.

B. Algorithms/ Data Structures
------------------------------
- specific approaches

Design Patterns
---------------
- Low-level design strategy localized to a specific part of code.
- "Resource Pools"
  - malloc
  - sockets/ servers
- "Lazy Evaluation"
  - defer on evaluation of a particular piece of code
  - know who's responsible for computing a given piece.
  - separate declaration vs. computation.
