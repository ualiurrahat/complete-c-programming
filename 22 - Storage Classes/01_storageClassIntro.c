/*
    Storage Classes in C
    =====================

    A variable in C is associated with:
    - Name
    - Data type
    - Value (or garbage value if uninitialized)

    Storage classes define additional characteristics of a variable:
    1. Default value (initialized value if not explicitly assigned)
    2. Location (where the variable is stored in memory)
    3. Scope (where the variable can be accessed)
    4. Lifetime (how long the variable exists in memory)

    Types of Storage Classes:
    -------------------------
    1. auto     - Default storage class for local variables.
    2. register - Suggests storage in CPU registers for faster access.
    3. extern   - Defines global variables that can be accessed across multiple files.
    4. static   - Retains variable value between function calls (for local variables)
                  or limits variable scope to the file (for global variables).

    If no storage class is specified, it defaults to 'auto'.

    Variable Scope in C:
    --------------------
    1. Function Scope: Variables declared inside a function are only accessible within it.
    2. Program/Global Scope: Variables declared outside functions are accessible throughout the program.
    3. Block Scope: Variables declared inside a block (within `{}`) are accessible only within that block.

    Notes:
    - 'register' is only a request to the compiler; it may ignore it.
    - 'extern' is used to refer to variables declared in another file.
    - 'static' global variables are only visible within the file they are declared in.
    - 'static' local variables preserve their value across function calls.
*/
