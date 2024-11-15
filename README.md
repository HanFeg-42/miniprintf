# miniprintf

This simplified version of printf supports the following format specifiers:

    %c: Prints a single character.
    %s: Prints a string, following the standard C convention (null-terminated).
    %p: Prints a pointer value in hexadecimal format (void * type).
    %d: Prints a signed decimal (base 10) number.
    %i: Prints a signed integer in decimal (base 10).
    %u: Prints an unsigned decimal (base 10) number.
    %x: Prints an unsigned number in hexadecimal (base 16) using lowercase letters.
    %X: Prints an unsigned number in hexadecimal (base 16) using uppercase letters.
    %%: Prints a percent sign (%).

Each specifier formats the corresponding data type accordingly, ensuring appropriate handling of characters, strings, numbers, and pointers, including proper conversion for hexadecimal and unsigned values.
