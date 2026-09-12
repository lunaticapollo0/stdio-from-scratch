# stdio-from-scratch

A learning project implementing parts of C's `stdio` library functionality
from scratch, using the Windows API (`windows.h`) as the underlying I/O layer.

The goal is to understand how standard I/O works under the hood by implementing
the functionality myself rather than relying entirely on the existing C
standard library.

## Current Progress

starting with the simpler functions and gradually building towards more functionality and more complex functions.

### Implemented

* `putchar()`
* `getchar()`

More functions will be added as the project develops.

#### Roadmap

### Basic I/O

- [x] putchar()
- [x] getchar()
- [ ] puts()
- [ ] fgets()

### Stream handling

- [ ] FILE
- [ ] putc()
- [ ] fgetc()
- [ ] fflush()

### File I/O

- [ ] fopen()
- [ ] fclose()
- [ ] fread()
- [ ] fwrite()

### Formatted I/O

- [ ] printf()
- [ ] scanf()

## Note

This is a learning project and is **not intended to replace the standard C library**.
The implementation will evolve over time as I explore more of the functionality provided by `stdio.h`.
