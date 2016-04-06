# Intepreter Design

## Execution Models
- Python: Imperative. Instructions executed in sequence.
- PyPE: Data Flow. Execution model is different.
    - "steady state flowing machine executing when data is available"
    - model changes from directly telling the computer what to do, to "these pieces of data represent the control flow of our program"
- lab today: use asyncio queues.
    - can flip order of inputs. things will run as soon as they can feasibly run.
    - "producer consumer semantics"
- Interpreter Design:
    - <------------------------------------------->
    -  DSL ... eDSL ... OOP ... Straight-line Code
    - they can have a full spectrum of operations
