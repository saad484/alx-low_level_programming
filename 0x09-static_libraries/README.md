<b align="center">
   <img src="" alt="">
</b>

<h1 align="center">0x09. C - Static libraries</h1>

## Resources

**Read or watch**:

- [What Is A “C” Library? What Is It Good For?](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)
- [Creating A Static “C” Library Using “ar” and “ranlib”]()
- [Using A “C” Library In A Program]()
- [What is difference between Dynamic and Static library(Static and Dynamic linking) in Linux?](https://www.youtube.com/watch?v=eW5he5uFBNM)
- [`ar`]()
- [`ranlib`]()
- [`nm`]()
  
## Learning Objectives

- [What is a static library, how does it work, how to create one, and how to use it](#what-is-a-static-library-how-does-it-work-how-to-create-one-and-how-to-use-it)
- [Basic usage of ar, ranlib, nm](#basic-usage-of-ar-ranlib-nm)
- [What are the differences between static and shared libraries](#static-vs-dynamic-libraries)
- [Static libraries advantages and disadvantages](#static-libraries-advantages-and-disadvantages)
- [Dynamic libraries advantages and disadvantages](#dynamic-libraries-advantages-and-disadvantages)
- [What are the most common predefined libraries to use in C](#what-are-the-most-common-predefined-libraries-to-use-in-c)

---

> ### Learning Objectives - Explanation

### What is a static library, how does it work, how to create one, and how to use it

A static library is a collection of compiled object code that can be linked with a program at compile time to create a standalone executable. It is called "static" because the object code from the library is linked directly into the executable, which makes it self-contained and does not require any additional shared libraries or DLLs to run.

Static libraries work by containing object files that are compiled versions of source code files. These object files contain machine-readable instructions that perform specific tasks when executed. By linking the object files in the library to an executable file at compile time, the code from the library becomes part of the resulting program. This means that the library code is always included in the executable and can be run on any system that supports the same architecture and operating system.

**Creating a static library involves several steps:**
1. Write the source code: Write the code that you want to include in the static library. This code can be written in any programming language that supports static libraries, such as C or C++.
2. Compile the source code: Compile the source code into object files using a compiler that supports static libraries. For example, if you are using C, you can use the gcc compiler to compile your code into object files.
```shell
gcc -c file1.c file2.c
```
> This will create two object files, myfile1.o and myfile2.o.
3. Create the archive file: Once you have compiled the object files, you need to create an archive file (.a) that contains all of the object files. You can do this using the ar command.
```shell
ar -rcs libmylib.a myfile1.o myfile2.o
```
> This will create an archive file named libmylibrary.a that contains the object files.

**To use a static library in a program, you need to do the following:**
1. Include the library header files: In your program source code, include the header files for the library you want to use. This allows the compiler to know about the functions and data types provided by the library.
2. Link to the library: When you compile your program, you need to link it to the static library. This can be done using the -l option and specifying the library name without the "lib" prefix and the ".a" extension. For example, if your library is called "mylibrary", you would link to it like this:
```shell
-L. -lmylibrary
```
> This tells the compiler to look for the library in the current directory (-L. option) and to link to the "mylibrary" library (-lmylibrary option).
3. Compile the program: Finally, compile your program using the usual compile command, such as gcc or clang.
```shell
gcc -o myprogram myprogram.c -L. -lmylibrary
```
When you run your program, it will include the code from the static library and you will not need to distribute the library separately.

---

### Basic usage of ar, ranlib, nm

`ar`, `ranlib`, and `nm` are three commonly used command line tools in Unix-based operating systems for working with libraries and object files. Here is an overview of each tool and its basic usage:

1. `ar`: The `ar` command is used to create, modify, and extract from archives. An archive is a single file that contains a collection of other files. The `ar` command is used to create static libraries in Unix-based operating systems. The `ar` command can be used to create, modify, and extract from archives. An archive is a single file that contains a collection of other files. The `ar` command is used to create static libraries in Unix-based operating systems.
```shell
ar -rcs libmylib.a myfile1.o myfile2.o
```
> This will create an archive file named libmylibrary.a that contains the object files.
> The `ar` command has several options:
> - `r`: add files to an archive. If the archive does not exist, it will be created.
> - `c`: create an archive if it does not exist.
> - `s`: create an index for the archive. This is useful when you are working with large archives and need to quickly access specific files.
> - `t`: display a list of files in the archive.
> - `x`: extract files from the archive.
> - `v`: display verbose output.
> - `q`: quickly append files to an archive. This is useful when you are working with large archives and need to quickly add files to the archive.
> - `d`: delete files from the archive.

2. `ranlib`: The `ranlib` command is used to create an index to the contents of an archive. This is useful when you are working with large archives and need to quickly access specific files. The `ranlib` command is used to create an index to the contents of an archive. This is useful when you are working with large archives and need to quickly access specific files.
```shell
ranlib libmylib.a
```
> This will create an index for the archive named libmylibrary.a.

3. `nm`: The `nm` command is used to display the symbols contained in object files. A symbol is a name that is associated with a specific location in memory. The `nm` command is used to display the symbols contained in object files. A symbol is a name that is associated with a specific location in memory.
```shell
nm myfile.o
```
> This will display the symbols contained in the object file named myfile.o.
> The `nm` command has several options:
> - `a`: display all symbols, including local symbols.
> - `g`: display only global symbols.
> - `u`: display only undefined symbols.
> - `j`: display only symbols from the specified object file.
> - `p`: Display symbol name and value in a more portable format

---

### Static vs. Dynamic Libraries

Static libraries and shared libraries are two different ways of organizing and distributing code in a software application. Here are the main differences between static and shared libraries:

- **Compilation**: A static library is created by compiling and archiving a collection of object files into a single library file. A shared library, on the other hand, is compiled separately and linked at runtime.
- **Linking**: When using a static library, the code is linked directly into the executable at compile time. When using a shared library, the code is linked at runtime and can be shared by multiple programs.
- **Size**: Static libraries are typically larger because they include all the code needed by the application at compile time. Shared libraries are smaller because they only contain the code needed at runtime.
- **Portability**: Static libraries are generally more portable because they do not depend on external libraries or dynamic linking. Shared libraries, however, require the correct version of the library to be installed on the system.
- **Loading**: Shared libraries are loaded into memory when a program starts, which can result in faster startup times. Static libraries are loaded into memory along with the program, which can increase the program's memory usage.
- **Maintenance**: Updating a static library requires recompiling the entire program, while updating a shared library only requires updating the library itself. This can make maintenance of shared libraries easier and faster.

The primary purpose of using static libraries is to simplify distribution and installation of programs, while dynamic libraries are used to reduce memory usage, share code between multiple processes, and simplify updates.

### Static Libraries Advantages and Disadvantages

Static libraries are compiled into the executable at build time. The library code becomes a part of the executable, and the resulting binary contains all the necessary code to run independently without the need for any external dependencies. The primary purpose of using static libraries is to ensure that all necessary code is present within the executable, making it easy to distribute and install.

**Advantages of using static libraries:**

- Easy to distribute, since all required code is included in the executable
- Can improve performance by reducing the need for dynamic loading and symbol resolution at runtime
- Avoids compatibility issues, since the library version used is the one that was compiled with the program

**Disadvantages of using static libraries:**

- Increased executable size and memory usage due to the inclusion of all code in the executable
- Updates to the library require recompilation of the program

### Dynamic Libraries Advantages and Disadvantages

Dynamic libraries are loaded at runtime by the operating system and linked to the executable. The primary purpose of using dynamic libraries is to share code between multiple programs, as well as to reduce the size of the executable and memory usage. Dynamic libraries are shared among multiple processes, and updates to the library only require updating the shared library itself.

**Advantages of using dynamic libraries:**

- Smaller executable size and memory usage, since the code is not included in the executable
- Shared among multiple processes, reducing memory usage
- Easier to update, since the library can be updated independently of the program
- 
**Disadvantages of using dynamic libraries:**

- Compatibility issues may arise if the library is not present or if the library version used is incompatible with the program
- Requires dynamic loading and symbol resolution at runtime, which can impact performance


---

### What are the most common predefined libraries to use in C

There are several commonly used predefined libraries in C that provide a wide range of functionality. Here are some of the most common libraries in C:

- **Standard Library (libc)**: This is the most basic and widely used library in C, providing basic functionality such as memory management, string manipulation, input/output operations, and math functions.
- **Standard Input/Output Library (stdio.h)**: This library provides input/output functionality, including functions for reading and writing files, as well as input/output from the console.
- **Math Library (math.h)**: This library provides math functions, including trigonometric functions, logarithmic functions, exponential functions, and more.
- **String Library (string.h)**: This library provides string manipulation functions, including functions for copying, concatenating, comparing, and searching strings.
- **Time Library (time.h)**: This library provides functionality for working with dates and times, including functions for getting the current time and date, formatting dates and times, and converting between different time formats.
- **Standard Utility Library (stdlib.h)**: This library provides various utility functions, including functions for memory management, type conversions, random number generation, and sorting and searching arrays.
- **Regular Expression Library (regex.h)**: This library provides functionality for working with regular expressions, which are a powerful tool for pattern matching and text manipulation.

---


## Tasks
- [0. A library is not a luxury but one of the necessities of life]()
- [1. Without libraries what have we? We have no past and no future]()

---

<details>
<summary><a href="./main.h">0. A library is not a luxury but one of the necessities of life</a></summary>

## Task 0

- Create the static library `libmy.a` containing all the functions listed below:

```c
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```

> Expected output:

```sh
~/0x09. Static Librairies$ ar -t libmy.a 
0-isupper.o
0-memset.o
0-strcat.o
1-isdigit.o
1-memcpy.o
1-strncat.o
100-atoi.o
2-strchr.o
2-strlen.o
2-strncpy.o
3-islower.o
3-puts.o
3-strcmp.o
3-strspn.o
4-isalpha.o
4-strpbrk.o
5-strstr.o
6-abs.o
9-strcpy.o
_putchar.o
~/0x09. Static Librairies$ nm libmy.a 

0-isupper.o:
0000000000000000 T _isupper

0-memset.o:
0000000000000000 T _memset

0-strcat.o:
0000000000000000 T _strcat

1-isdigit.o:
0000000000000000 T _isdigit

1-memcpy.o:
0000000000000000 T _memcpy

1-strncat.o:
0000000000000000 T _strncat

100-atoi.o:
0000000000000000 T _atoi

2-strchr.o:
0000000000000000 T _strchr

2-strlen.o:
0000000000000000 T _strlen

2-strncpy.o:
0000000000000000 T _strncpy

3-islower.o:
0000000000000000 T _islower

3-puts.o:
                 U _putchar
0000000000000000 T _puts

3-strcmp.o:
0000000000000000 T _strcmp

3-strspn.o:
0000000000000000 T _strspn

4-isalpha.o:
0000000000000000 T _isalpha

4-strpbrk.o:
0000000000000000 T _strpbrk

5-strstr.o:
0000000000000000 T _strstr

6-abs.o:
0000000000000000 T _abs

9-strcpy.o:
0000000000000000 T _strcpy

_putchar.o:
0000000000000000 T _putchar
                 U write
~/0x09. Static Librairies$ cat main.c 
#include "main.h"

int main(void)
{
    _puts("\"At the end of the day, my goal was to be the best hacker\"\n\t- Kevin Mitnick");
    return (0);
}
~/0x09. Static Librairies$ gcc -std=gnu89 main.c -L. -lmy -o quote
~/0x09. Static Librairies$ ./quote 
"At the end of the day, my goal was to be the best hacker"
    - Kevin Mitnick
```

</details>

---

<details>
<summary><a href="./create_static_lib.sh">1. Without libraries what have we? We have no past and no future</a></summary>

## Task 1

- Create a script called `create_static_lib.sh` that creates a static library called `liball.a` from all the `.c` files that are in the current directory.

> Expected output:

```sh
~/0x09. Static Librairies$ ls *.c
0-isupper.c  0-strcat.c  1-isdigit.c  1-strncat.c  2-strlen.c   3-islower.c  3-strcmp.c  4-isalpha.c  5-strstr.c  9-strcpy.c  _putchar.c
0-memset.c   100-atoi.c  1-memcpy.c   2-strchr.c   2-strncpy.c  3-puts.c     3-strspn.c  4-strpbrk.c  6-abs.c
~/0x09. Static Librairies$ ./create_static_lib.sh 
~/0x09. Static Librairies$ ls *.a
liball.a
~/0x09. Static Librairies$ ar -t liball.a
0-isupper.o
0-memset.o
0-strcat.o
100-atoi.o
1-isdigit.o
1-memcpy.o
1-strncat.o
2-strchr.o
2-strlen.o
2-strncpy.o
3-islower.o
3-puts.o
3-strcmp.o
3-strspn.o
4-isalpha.o
4-strpbrk.o
5-strstr.o
6-abs.o
9-strcpy.o
_putchar.o
```
</details>
