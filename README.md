# alx-low_level_programming
Started learning C programming and other low level programming

1. Write a script that runs a C file through the preprocessor and save the result into another file.

- The C file name will be saved in the variable $CFILE
- The output should be saved in the file c

2. Write a script that compiles a C file but does not link.

- The C file name will be saved in the variable $CFILE
- The output file should be named the same as the C file, but with the extension .o instead of .c.
      - Example: if the C file is main.c, the output file should be main.o

3. Write a script that generates the assembly code of a C code and save it in an output file.

- The C file name will be saved in the variable $CFILE
- The output file should be named the same as the C file, but with the extension .s instead of .c.
      - Example: if the C file is main.c, the output file should be main.s

4. Write a script that compiles a C file and creates an executable named cisfun.

- The C file name will be saved in the variable $CFILE

5. Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

- Use the function puts
- You are not allowed to use printf
- Your program should end with the value 0

6. Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.

- Use the function printf
- You are not allowed to use the function puts
- Your program should return 0
- Your program should compile without warning when using the -Wall gcc option

7. Write a C program that prints the size of various types on the computer it is compiled and run on.

- You should produce the exact same output as in the example
Warnings are allowed
- Your program should return 0
- You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option
