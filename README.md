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

---

## Usage Examples

### cp (Copy File)
```bash
$ ./cp source.txt dest.txt
# dest.txt will contain the same content as source.txt
```

### mv (Move File)
```bash
$ ./mv old.txt new.txt
# new.txt is created with the same content as old.txt
# old.txt is deleted
```

### echo
```bash
$ ./echo Hello world!
Hello world!
```

### pwd
```bash
$ ./pwd
/home/username/projects/system_programming
```


---

## Notes

- Programs use system calls (`open`, `read`, `write`, `close`, `unlink`, `getcwd`).
- Error handling is minimal and for demonstration/learning purposes.
- All code is written for clarity and as a learning tool; you are encouraged to improve and expand on it.

---
