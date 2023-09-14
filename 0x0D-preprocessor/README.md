# 0x0D. C - Preprocessor

## Resources
- [Understanding C program Compilation Process](https://www.youtube.com/watch?v=eW5he5uFBNM)
- [Object-like Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Object-like-Macros.html#Object-like-Macros)
- [Macro Arguments](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Macro-Arguments.html#Macro-Arguments)
- [Pre Processor Directives in C](https://www.youtube.com/watch?v=X6HiYbY3Uak)
- [The C Preprocessor](https://www.cprogramming.com/tutorial/cpreprocessor.html)
- [Standard Predefined Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Standard-Predefined-Macros.html#Standard-Predefined-Macros)
- [include guard](https://en.wikipedia.org/wiki/Include_guard)
- [Common Predefined Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Common-Predefined-Macros.html#Common-Predefined-Macros)

## Learning Objectives
- [What are macros and how to use them](#what-are-macros-and-how-to-use-them)
- [What are the most common predefined macros](#what-are-the-most-common-predefined-macros)
- [How to include guard your header files](#how-to-include-guard-your-header-files)

> #### - What are macros and how to use them
C macros are preprocessor directives that are used to define constants or create code snippets that are expanded during the preprocessing stage. Macros are defined using the `#define` directive and can take arguments or not. Macros can be used to define constants, create inline functions, or to create code snippets that are used multiple times.

Here is an example of how to define a macro that calculates the square of a number:

```c
#define SQUARE(x) ((x) * (x))
```

This macro can be used as follows:

```c
int x = 5;
int y = SQUARE(x);
printf("%d\n", y); /* prints 25 */
```

> #### - What are the most common predefined macros

The following are some of the most common predefined macros in C:

- `__LINE__`: This macro expands to the current line number of the source code file being compiled.
- `__FILE__`: This macro expands to the name of the current source code file being compiled.
- `__DATE__`: This macro expands to a string that represents the date when the source code file was last compiled.
- `__TIME__`: This macro expands to a string that represents the time when the source code file was last compiled.
- `__STDC__`: This macro is defined when the compiler complies with the ANSI C standard.
- `__GNUC__`: This macro is defined when the GNU C/C++ compiler is used to compile the code.
- `__WIN32__`: This macro is defined when the code is compiled for the Windows operating system.

> #### - How to include guard your header files
To include guard a header file, you can use preprocessor directives to ensure that the header file is included only once in your code. Here's an example:

```c
#ifndef HEADER_FILE_H
#define HEADER_FILE_H

/* code declarations and definitions go here */

#endif /* HEADER_FILE_H */
```

When the header file is included in a C or C++ file, the preprocessor first checks whether `HEADER_FILE_H` has been defined using `#ifndef`. If it has not been defined, the preprocessor defines it using `#define` and includes the contents of the header file. If `HEADER_FILE_H` has already been defined, the preprocessor skips the contents of the header file.

This ensures that the header file is included only once in your code, preventing issues such as multiple definitions of the same function or variable.



## Tasks
- [0. Object-like Macro](./0-object_like_macro.h)
- [1. Pi](./1-pi.h)
- [2. File name](./2-main.c)
- [3. Function-like macro](./3-function_like_macro.h)
- [4. SUM](./4-sum.h)

---

<details>

<summary><a href="./0-object_like_macro.h">0. Object-like Macro</a></summary>

### 0. Object-like Macro

```c
#include "0-object_like_macro.h"
#include "0-object_like_macro.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = 98 + SIZE;
    printf("%d\n", s);
    return (0);
}
```

> Compiled with `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a`

> Output:

```bash
$ ./a
1122
$ 
```

</details>

---

<details>

<summary><a href="./1-pi.h">1. Pi</a></summary>

### 1. Pi

```c
#include "1-pi.h"
#include "1-pi.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    float a;
    float r;

    r = 98;
    a = PI * r * r;
    printf("%.3f\n", a);
    return (0);
}
```

> Compiled with `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c -o b`

> Output:

```bash
$ ./b
30171.855
$ 
```

</details>

---

<details>

<summary><a href="./2-main.c">2. File name</a></summary>

### 2. File name

> Compiled with `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c -o c`

> Output:

```bash
$ ./c
2-main.c
$ cp 2-main.c 02-main.c
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 02-main.c -o cc
$ ./cc
02-main.c
$ 
```

</details>

---

<details>

<summary><a href="./3-function_like_macro.h">3. Function-like macro</a></summary>

### 3. Function-like macro

```c
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a;
    int b;

    a = ABS(-98) * 10;
    b = ABS(98) * 10;
    printf("%d, %d\n", a, b);
    return (0);
}
```

> Compiled with `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d`

> Output:

```bash
$ ./d
980, 980
$ 
```

</details>

---

<details>

<summary><a href="./4-sum.h">4. SUM</a></summary>

### 4. SUM

```c
#include "4-sum.h"
#include "4-sum.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = SUM(98, 1024);
    printf("%d\n", s);
    return (0);
}
```

> Compiled with `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c -o e`
> Output:

```bash
$ ./e
1122
$ 
```
