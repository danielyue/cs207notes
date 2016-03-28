# Production Quality Compilers

## Basic Structure
- Each step takes the input, changes it slightly, "continual transformation"
- One of the most complicated pieces of software that we have as a community.
- Each of these pieces has decades of research behind it.

- Front end: how do other people use it
    - Lexical Analysis
    - Parsing (Enforcing the syntax of the rule)
    - Semantic Analysis (Enforcing the semantic rules of the language)

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

## Grammars (Lexical Analysis)
- languages (getting more specific):
1. Unrestricted
2. Context-sensitive --> arbitrary sized on both size of the production rules
3. Context-Free --> variables on left can only be singular non-terminals
4. Regular languages

- parsers are
    - efficient
    - easy to generate

- Python library --> Ply
    - builds LR parser from a syntax like a CFA

- first thing to do is simpify our arbitrary source
    - use CFG or Regular languages to group simple ideas, then delve down

- 'tokens' -- groupings of characters

## Structured Representations (Parsing)
- write a rule that recognizes sequences of tokens
- written in Bacchus Naur Form

- Abstract Syntax Trees
    - parenthesis describe structure, but once we have the tree, they are useless and we can get rid of them.
    - instead of having the system generate a tree, have the program run a hook to run arbitrary code.

## Semantic Analysis
- Old school approach
    - attribute grammars: if production rules can describe, then you can augment that with things.
