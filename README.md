# Custom printf Function in C
This document provides information on a custom implementation of the `printf` function in C. Designed for simplicity and efficiency, this version offers core formatting capabilities suitable for various applications.

## Features
- Supports basic format specifiers including `%c`, `%s`, `%d`, `%i`, `%b`, `%u`, `%x`, `%X`, `%r`, and `%R`.
- Outputs to `stdout` by default.
- Returns the count of printed characters upon success, and `-1` on failure.

## Usage Examples
```
int main()
{
    _printf("Hello, World! %s\n", "Custom");
    return 0;
}
```

## Dependencies
None. This custom `printf` function is standalone and requires no external libraries.

## Limitations
- Limited support for format specifiers compared to the standard `printf`.
- No support for certain advanced features like field width, precision, or flag modifiers.

## License
To be added!