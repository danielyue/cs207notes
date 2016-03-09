# Production Quality Compilers

## Basic Structure
- Each step takes the input, changes it slightly, "continual transformation"
- One of the most complicated pieces of software that we have as a community.
- Each of these pieces has decades of research behind it.

- Front end: how do other people use it
    - Lexical Analysis
    - Parsing
    - Semantic Analysis

- Back end:
    - Translation/ Lowering
    - Optimization
    - Code Generation

## Today: Front-end
- System of talking about languages
    - terminals ( 1 )
        - symbols in the language (primitive elements)
    - non-terminals ( A )
        - variables
    - production rules ( A := 1 A | eps )
        - tells you what is an acceptable member of set, and what is not
