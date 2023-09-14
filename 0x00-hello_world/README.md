# 0x00. C -Hello, World

## Resources

- [C - Books and PDFs - Reference](../references)
- [Dennis Ritchie - Creator of C](https://en.wikipedia.org/wiki/Dennis_Ritchie)
- [C Programming Language: Brian Kernighan - Computerphile](https://www.youtube.com/watch?v=de2Hsvxaf8M).
- [Learning to Program in C by Jonathan Engelsma - YouTube Playlist](https://youtube.com/playlist?list=PLIsXzR_wZY-yQMHOK7D3Dls4VoTGuRovd)
- [Understanding C program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA).
- [Holberton Betty Guide - C coding style](https://github.com/holbertonschool/Betty/wiki)
- [Hash-bang under the hood](https://twitter.com/unix_byte/status/1024147947393495040?s=21).
- [Linus Torvalds on C vs C++](http://harmful.cat-v.org/software/c++/linus).
- [UPEvent: GCC and Makefiles](https://youtu.be/OnEF1MexJlI)


## Learning Objectives

- [Why C programming is awesome?](#why-c-programming-is-awesome)
- [Who invented C?](#who-invented-c)
- [Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds?](#who-are-dennis-ritchie-brian-kernighan-and-linus-torvalds)
- [What happens when you type `gcc main.c`?](#what-happens-when-you-type-gcc-mainc-)
- [What is an entry point?](#what-is-an-entry-point)
- [What is `main`?](#what-is-main-)
- [How to print text using `printf`, `puts` and `putchar`](#how-to-print-text-using-printf--puts-and-putchar)
- [How to get the size of a specific type using the unary operator `sizeof`](#how-to-get-the-size-of-a-specific-type-using-the-unary-operator-sizeof-)
- [How to compile using `gcc`](#how-to-compile-using-gcc-)
- [What is the default program name when compiling with `gcc`](#what-is-the-default-program-name-when-compiling-with-gcc-)
- [What is the official C coding style and how to check your code with `betty-style`](#what-is-the-official-c-coding-style-and-how-to-check-your-code-with-betty-style-)
- [How to find the right header to include in your source code when using a standard library function](#how-to-find-the-right-header-to-include-in-your-source-code-when-using-a-standard-library-function)
- [How does the `main` function influence the return value of the program](#how-does-the-main-function-influence-the-return-value-of-the-program)


### Why C programming is awesome?
C programming is awesome for several reasons:

1. **Efficiency**: C programming language is a high-performance language that is used for developing system-level software. It provides low-level control over the computer's hardware resources and has a small memory footprint. Programs written in C run very quickly and are highly optimized.

2. **Portability**: C is a portable language, which means that it can be used to write code that runs on different platforms and operating systems. It is also a cross-platform language that can be compiled and run on different hardware architectures.

3. **Flexibility**: C is a flexible language that allows programmers to write code in a variety of styles. It can be used to write low-level system code as well as high-level application code. C is also used as an intermediate language for other languages like Python, Ruby, and Perl.

4. **Compatibility**: C has been around for a long time and is still widely used in industry. This means that there is a large library of code written in C that can be reused and adapted for new projects.

5. **Control**: C gives programmers direct control over the computer's hardware resources, which is not possible with higher-level languages like Java or Python. This allows programmers to write code that is highly optimized and can run more efficiently than code written in other languages.

Overall, C programming is awesome because it provides low-level control, high performance, and portability, making it an ideal language for system-level software development.

### Who invented C?

[C](https://en.wikipedia.org/wiki/C_(programming_language)) programming language was developed by Dennis Ritchie in 1972 at Bell Labs.

### Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds?

- **Dennis Ritchie** was an American computer scientist who is best known as the creator of the C programming language and a key developer of the Unix operating system. He received numerous awards for his work, including the Turing Award in 1983 and the National Medal of Technology in 1998. Ritchie passed away in 2011.

- **Brian Kernighan** is a Canadian computer scientist who co-authored the book "The C Programming Language" with Dennis Ritchie, which is widely regarded as one of the most important books on programming ever written. Kernighan has also made significant contributions to the development of the Unix operating system and has received numerous awards for his work.

- **Linus Torvalds** is a Finnish-American software engineer who is best known as the creator of the Linux operating system. Torvalds developed the original Linux kernel in 1991 and has since overseen its continued development as an open-source project. He has received numerous awards for his work, including the Millennium Technology Prize in 2012.


### What happens when you type `gcc main.c`?

1. The GCC (GNU Compiler Collection) preprocessor runs over the source code file `main.c`, which performs operations like removing comments, expanding macros, and handling `#include` directives. 
2. The preprocessed source code is compiled into assembly code, which consists of human-readable instructions for the computer. 
3. The assembly code is assembled into machine code, which is a binary representation of the program that can be executed by the computer. 
4. Finally, the machine code is linked with any necessary libraries to produce an executable binary file, which can be run by the user to execute the program.

### What is an entry point?
An entry point is a designated point in a software program for beginning execution of instructions. It is the first function or method called by the operating system when a program starts running. In C/C++ programming, the entry point is usually the main function. Other programming languages may have different entry points, such as a function called "start" in assembly language. The entry point is where program execution begins and from where control is transferred to the other parts of the program.

### What is `main`?
main is a special function in C and C++ programming languages that serves as the entry point of a program. It is called by the operating system when the program is executed and it is where the program's execution begins. The `main` function takes no arguments or one argument (an integer that indicates the number of command-line arguments passed to the program) and returns an integer that indicates the exit status of the program.

### How to print text using `printf`, `puts` and `putchar`

`printf`, `puts`, and `putchar` are functions used in C programming language to display output on the console or terminal.

- **`printf`** is a formatted output function which is used to print values onto the console. It requires a format string and a list of arguments to be printed. The format string contains placeholders which are replaced with the values provided in the argument list.

- **`puts`** function is used to output a string to the console, followed by a newline character. It does not support format specifiers, but is convenient to use for simple string output.

- **`putchar`** function is used to output a single character to the console. It takes a single character as an argument and writes it to the standard output. It can be used to output simple strings, but is primarily used to output single characters.

Here's an example of each:
```c
#include <stdio.h>

int main() {
  // printf example
  int x = 10;
  printf("The value of x is %d\n", x);

  // puts example
  char str[] = "Hello World";
  puts(str);

  // putchar example
  char ch = 'A';
  putchar(ch);

  return 0;
}
```

### How to get the size of a specific type using the unary operator `sizeof`?
The `sizeof` operator in C and C++ is used to determine the size of a variable or data type in bytes. It returns the size of the object representation of the given type, which may be different from the actual size of the object due to padding.

The general syntax of `sizeof` operator is:
```c
sizeof (data_type)
```

where `data_type` can be a data type, a variable, or an expression.

Here is an example that demonstrates the usage of `sizeof` operator:
```c
#include <stdio.h>

int main() {
    int a;
    double b;
    char c;

    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of double: %zu bytes\n", sizeof(b));
    printf("Size of char: %zu bytes\n", sizeof(c));

    return 0;
}
```
> Output:
> ```
> Size of int: 4 bytes
> Size of double: 8 bytes
> Size of char: 1 bytes
> ```

### How to compile using `gcc`?

To compile a C program using `gcc` on the command line, you need to follow these steps:

1. Create a C source code file with the `.c` extension. For example, `main.c`.
2. Open a terminal window and navigate to the directory where the source code file is located.
3. Run the following command to compile the source code file:
```shell
gcc main.c
```
4. The `gcc` command will produce an executable binary file named `a.out` in the same directory. You can run the program by typing the following command:
```shell
./a.out
```

### What is the default program name when compiling with `gcc`?
When you compile a C program using `gcc`, the default name of the executable binary file is `a.out`. 

This name stands for "assembler output" and is the default name for the executable file generated by the compiler. The reason for this name is historical, as it was used by early versions of the UNIX operating system, on which the `gcc` compiler was based. The name has remained in use as the default for compatibility reasons, although it can be changed by using the `-o` option followed by the desired name.

You can change the name of the executable binary file by using the `-o` option:
```shell
gcc main.c -o myprogram
```
This will produce an executable binary file named `myprogram` in the same directory.


### What is the official C coding style and how to check your code with `betty-style`?
The official C coding style is defined in the GNU Coding Standards, which is a set of guidelines for developing free software. The GNU Coding Standards cover many aspects of software development, including C coding style. The C coding style defined by GNU is followed by many developers, and is known for its readability, consistency, and ease of maintenance.

To check your C code for compliance with the GNU coding style, you can use a tool called `betty-style`. `betty-style` is a command-line tool that analyzes your code and reports any violations of the GNU coding style. 

### How to find the right header to include in your source code when using a standard library function?
You can use the `man -k` command to find the header file of a function in Linux.
For example, if you want to find the header file for the `printf` function, you can run the following command:
```shell
man -k printf
```
This will display a list of manual pages related to `printf`, including the header file that contains its definition.

The `-k` option used with `man` command specifies a particular keyword to search for in the manual pages. When using `-k` option, `man` will display a list of manual pages that contain the keyword specified.

### How does the `main` function influence the return value of the program?
The `main` function is the entry point of the program, and it typically returns an integer value to indicate the status of the program execution. The return value of the `main` function is usually used by the calling process to determine whether the program executed successfully or not. By convention, a return value of `0` indicates successful execution, while a non-zero value indicates some error or abnormal termination.


## Tasks

<details>
<summary><a href="./0-preprocessor">0. Preprocessor</a></summary><br>

#### Preprocessor - Task
Write a script that runs a C file through the preprocessor and save the result into another file.

* The C file name will be saved in the variable $CFILE
* The output should be saved in the file c

#### Solution: `gcc -E $CFILE -o c`
##### Explanation:
This command uses the GNU Compiler Collection (GCC) to preprocess a C source code file and save the result to a file named c. 

##### Command breakdown:
* `gcc` invokes the GCC compiler driver to process the input file.
* `-E` option tells GCC to stop after preprocessing stage and output the preprocessed code to stdout or a file.
* `"$CFILE"` specifies the input C source code file to be preprocessed. The `$CFILE` is a shell variable that holds the name of the input file, and the surrounding quotes are used to prevent word splitting and filename expansion by the shell.
* `-o c` option specifies the output file name. Here, the output is saved to a file named c in the current directory.

##### Summary:
This command is preprocessing the C source code file specified by the $CFILE variable and saving the result to a file named c. The preprocessed code will contain all the preprocessor directives expanded and all the comments removed, but will not be compiled or linked to create an executable program.
</details>

---

<details>
<summary><a href="./1-compiler">1. Compiler</a></summary><br>

#### Compiler - Task
Write a script that compiles a C file but does not link.

* The C file name will be saved in the variable $CFILE
* The output file should be named the same as the C file, but with the extension .o instead of .c.
  * Example: if the C file is main.c, the output file should be main.o

#### Solution: `gcc -c $CFILE`

#### Explanation:
This command uses the GNU Compiler Collection (GCC) to compile a C source code file and generate an object file.

#### Command breakdown:
- `gcc` invokes the GCC compiler driver to process the input file.
- `-c` option tells GCC to stop after the compilation stage and generate an object file.
- `"$CFILE"` specifies the input C source code file to be compiled.

#### Summary:
This command is compiling the C source code file specified by the `$CFILE` variable and generating an object file with the same name as the input file, but with a `.o` extension. The object file will contain the compiled machine code for the source file, but will not be linked to create an executable program. You can then link this object file with other object files and libraries to create an executable program.

</details>

---

<details>
<summary><a href="./2-assembler">2. Assembler</a></summary><br>

#### Assembler - Task

#### Solution: `gcc -S $CFILE`

#### Explanation:
This command uses the GNU Compiler Collection (GCC) to compile a C source code file and generate an assembly language code file.

#### Command breakdown:

- `gcc` invokes the GCC compiler driver to process the input file.
- `-S` option tells GCC to stop after the compilation stage and generate an assembly language code file.
- `"$CFILE"` specifies the input C source code file to be compiled.

#### Summary:
This command is compiling the C source code file specified by the `$CFILE` variable and generating an assembly language code file with the same name as the input file, but with a `.s` extension. The generated assembly code will be specific to the target architecture and operating system. You can then inspect the generated assembly code to understand how the source code is translated into machine code by the compiler.

</details>

---

<details>
<summary><a href="./3-name">3. Name</a></summary><br>

#### Name - Task
Write a script that compiles a C file and creates an executable named `cisfun`.

- The C file name will be saved in the variable `$CFILE`

#### Solution: `gcc -o cisfun $CFILE`

#### Explanation:
This command uses the GNU Compiler Collection (GCC) to compile a C source code file and generate an executable program.

#### Command breakdown:

- `gcc` invokes the GCC compiler driver to process the input file.
- `-o cisfun` option specifies the name of the output executable program.
- `"$CFILE"` specifies the input C source code file to be compiled.

#### Summary:
This command is compiling the C source code file specified by the `$CFILE` variable and generating an executable program named `cisfun`. The executable program will be specific to the target architecture and operating system. You can then run the executable program to execute the compiled machine code.

</details>

---

<details>
<summary><a href="./4-puts.c">4. Hello, puts</a></summary><br>

#### puts - Task
Write a C program that prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line.

- Use the function `puts`
- You are not allowed to use `printf`
- Your program should end with the value `0`
- Compile and run this way: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c -o puts`.

#### Solution: [4-puts.c](./4-puts.c)

</details>

---

<details>
<summary><a href="./5-printf.c">5. Hello, printf</a></summary><br>

#### printf - Task
Write a C program that prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line.

- Use the function `printf`
- You are not allowed to use the function `puts`
- Your program should return `0`
- Your program should compile without warning when using the `-Wall gcc` option

#### Solution: [5-printf.c](./5-printf.c)

</details>

---

<details>
<summary><a href="./6-size.c">6. Size is not grandeur, and territory does not make a nation</a></summary><br>

#### size - Task
This program prints the size of various types on the computer it is compiled and run on using the `sizeof` operator.

- Compile this way: `gcc 6-size.c -m32 -o size32 2> /tmp/32` & `gcc 6-size.c -m64 -o size64 2> /tmp/64`
- Compare outputs for the `size32` and `size64`.

#### Solution: [6-size.c](./6-size.c)

#### Explanation: [sizeof()](https://en.cppreference.com/w/cpp/language/sizeof)
In C, `sizeof()` is an operator that returns the size, in bytes, of a given data type or variable. The syntax for `sizeof()` is as follows: `sizeof(type)`.\
Here, `type` can be any data type, such as `int`, `float`, `double`, `char`, or a user-defined struct or union.\
The `sizeof()` operator is often used in C to allocate memory dynamically, as well as to determine the size of data types or arrays at runtime. It is also used to calculate the number of elements in an array by dividing the total size of the array by the size of each element.

Here are some important points to keep in mind about the `sizeof()` operator:
- The size returned by `sizeof()` is always in bytes.
- The `sizeof()` operator can be used on primitive data types, as well as complex data types like structs and unions.
- When applied to an array, `sizeof()` returns the total size of the array in bytes, not the number of elements in the array.
- The `sizeof()` operator does not evaluate the expression it is applied to. It only determines the size of the data type, regardless of whether it is a variable or a constant.

Overall, the `sizeof()` operator is a fundamental part of C programming and is essential for working with memory, data types, and arrays.

</details>

---

<details>
<summary><a href="./100-intel">7. Intel</a></summary><br>

#### intel - Task

Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

- The C file name will be saved in the variable `$CFILE`.
- The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
  - Example: if the C file is `main.c`, the output file should be `main.s`.

#### Solution: `gcc -S -masm=intel $CFILE`

#### Explanation:
This command uses the GNU Compiler Collection (GCC) to compile a C source code file and generate an assembly language code file in Intel syntax.

#### Command breakdown:
- `gcc` invokes the GCC compiler driver to process the input file.
- `-S` option tells GCC to stop after the compilation stage and generate an assembly language code file.
- `-masm=intel` option sets the output syntax to Intel, which is the most commonly used syntax for assembly code.
- `$CFILE` specifies the input C source code file to be compiled. The `$CFILE` is a shell variable that holds the name of the input file.

#### Summary:
This command is compiling the C source code file specified by the `$CFILE` variable and generating an assembly language code file with the same name as the input file, but with a `.s` extension. The generated assembly code will be in Intel syntax, which is more readable and easier to understand than the default syntax. You can then inspect the generated assembly code to understand how the source code is translated into machine code by the compiler.

</details>

---

<details>
<summary><a href="./101-quote.c">8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity</a></summary><br>

#### Quote - Task
Write a C program that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error.

- You are not allowed to use any functions listed in the NAME section of the man (3) `printf` or man (3) `puts`
- Your program should return 1
- Your program should compile without any warnings when using the `-Wall gcc` option

#### Solution: [101-quote.c](./101-quote.c)

#### Explanation:
This program uses the `write` system call to print the string to the standard error file descriptor.

#### Command breakdown:
- A character pointer variable `str` is declared and initialized with a string literal. The string contains the text `"and that piece of art is useful" - Dora Korpar, 2015-10-19\n"` followed by an escape sequence that represents a newline character.
- A `while` loop is used to iterate over each character of the string. The loop continues as long as the value pointed to by `str` is not the null character, which is used to terminate C strings.
- Inside the loop, the `write()` system call is used to write the character pointed to by `str` to the standard error output, which is represented by the file descriptor `STDERR_FILENO` (usually 2). The `str++` expression increments the pointer str to point to the next character in the string.
- The loop continues until the null character is encountered, which signals the end of the string.

#### Summary:
hThis program writes the string "and that piece of art is useful" - Dora Korpar, 2015-10-19" to the standard error output, character by character.

</details>
