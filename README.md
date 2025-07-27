# System Programming Course - Linux Command Implementations

This repository contains C implementations of basic Linux command-line utilities. The code demonstrates the use of low-level POSIX system calls and is intended for educational purposes in system programming.

## Contents

- **cp.c** &mdash; Implementation of the `cp` (copy) command. Copies contents from one file to another using system calls.
- **mv.c** &mdash; Implementation of the `mv` (move) command. Moves a file by copying it to a new location and deleting the original.
- **echo.c** &mdash; Implementation of the `echo` command. Prints arguments passed to the program, separated by spaces.
- **pwd.c** &mdash; Implementation of the `pwd` (print working directory) command. Prints the current working directory path.

---

## Compilation

To compile the programs, use GCC as follows:

```bash
gcc cp.c -o cp
gcc mv.c -o mv
gcc echo.c -o echo
gcc pwd.c -o pwd
```
