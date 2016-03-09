#Polymorphism
-------------

What is it?
- The ability to write code that looks similar, but operates on different types. In other words, a single interface serves entities of different types.
- often combined with inheritance, but does not explicitly have to be
- think about is as a "lookup table" (or "dispatch table"), where implementations for different types can be looked up. (Example-> for calls to len(), look up the len() table and see how this particular type implements it).

Alternative: look up "@singledispatch" decorator in python functools, which allows for separate handling of different types.
- use objects as far up in the abstract types hierarchy as you can.
- this allows for a different system for allowing Polymorphism (with a global dispatch table rather than a per-object basis)

object.mro() function spits out a list of (rank order) hierarchy for looking up methods that are called.
- in python 3, all classes automatically inherit from the base object class 'object'
