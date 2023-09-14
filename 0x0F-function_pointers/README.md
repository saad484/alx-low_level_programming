# 0x0F. C - Function pointers

## Resources
- [Function pointers in C]()
- [Pointers to functions]()
- [Function pointers in C/C++]()
- [Why pointers to functions?]()
- [Everything you need to know about pointers in C]()

---

## Learning Objectives

- [What are function pointers and how to use them](#what-are-function-pointers-and-how-to-use-them)
- [What does a function pointer exactly hold](#what-does-a-function-pointer-exactly-hold)
- [Where does a function pointer point to in the virtual memory](#where-does-a-function-pointer-point-to-in-the-virtual-memory)

---

## Function Pointers in C

Function pointers are variables that hold the address of a function in memory. They allow you to pass functions as arguments to other functions, or to store functions in arrays or structures.

Here's an example of a function pointer declaration:

```c
int (*myFunc)(int, int);

```

This declares a function pointer called `myFunc` that takes two `int` arguments and returns an `int`.

To use a function pointer, you need to assign it the address of a function. Here's an example:

```c
int add(int a, int b) {
    return a + b;
}

int (*myFunc)(int, int) = add;

```

This assigns the address of the `add` function to `myFunc`.

You can then call the function using the pointer, like this:

```c
int result = myFunc(4, 5); // result will be 9

```

Function pointers can also be used with function pointers in arrays or structures. Here's an example of a function pointer array:

```c
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int (*mathFuncs[3])(int, int) = { add, subtract, multiply };

```

This declares an array called `mathFuncs` that holds three function pointers to the `add`, `subtract`, and `multiply` functions.

You can then call the functions using the pointers in the array, like this:

```c
int result1 = mathFuncs[0](4, 5); // result1 will be 9
int result2 = mathFuncs[1](4, 5); // result2 will be -1
int result3 = mathFuncs[2](4, 5); // result3 will be 20

```

Function pointers hold the address of a function in virtual memory. When you call a function through a function pointer, the program looks up the function's address in memory and jumps to that location to execute the function.

## What are function pointers and how to use them



---

## Tasks

---

<details>
<summary>
<a href="./0-print_name.c">0. What's my name</a>
</summary>

### 0\. What's my name

```c
#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name_as_is - prints a name as is
 * @name: name to print
 *
 * Return: void
 */
void print_name_as_is(char *name)
{
	printf("Hello, my name is %s\n", name);
}

/**
 * print_name_uppercase - prints a name in uppercase
 * @name: name to print
 *
 * Return: void
 */
void print_name_uppercase(char *name)
{
    int i;

    printf("Hello, my uppercase name is ");
    for (i = 0; name[i]; i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
            printf("%c", name[i] - 32);
        else
            printf("%c", name[i]);
    }
    printf("\n");
}

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	print_name("Bob", print_name_as_is);
	print_name("Bob Dylan", print_name_uppercase);
	printf("\n");
    return (0);
}
```

> Compiled with: `gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-print_name.c -o 0-print_name`
> Output:
> ```shell
> $ ./0-print_name
> Hello, my name is Bob
> Hello, my uppercase name is BOB DYLAN
> ```

</details>

--- 

<details>
<summary>
<a href="./1-array_iterator.c">1. If you spend too much time thinking about a thing, you'll never get it done</a>
</summary>

### 1\. If you spend too much time thinking about a thing, you'll never get it done

```c
#include "function_pointers.h"
#include <stdio.h>

/**
 * print_elem - prints an integer
 * @elem: integer to print
 *
 * Return: void
 */
void print_elem(int elem)
{
    printf("%d\n", elem);
}

/**
 * print_elem_hex - prints an integer in hexadecimal
 * @elem: integer to print
 *
 * Return: void
 */
void print_elem_hex(int elem)
{
    printf("0x%x\n", elem);
}

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
    int array[5] = {0, 98, 402, 1024, 4096};

    array_iterator(array, 5, print_elem);
    printf("\n");
    array_iterator(array, 5, print_elem_hex);
    return (0);
}
```

> Compiled with: `gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-array_iterator.c -o 1-array_iterator`
> Output:
> ```shell
> $ ./1-array_iterator
> 0
> 98
> 402
> 1024
> 4096
> 
> 0x0
> 0x62
> 0x192
> 0x400
> 0x1000
> ```

</details>

---

<details>
<summary>
<a href="./2-int_index.c">2. To hell with circumstances; I create opportunities</a>
</summary>

### 2\. To hell with circumstances; I create opportunities

```c
#include "function_pointers.h"
#include <stdio.h>

/**
 * is_98 - checks if a number is equal to 98
 * @elem: integer to check
 *
 * Return: 1 if true, 0 otherwise
 */
int is_98(int elem)
{
    return (elem == 98);
}

/**
 * is_strictly_positive - checks if a number is greater than 0
 * @elem: integer to check
 *
 * Return: 1 if true, 0 otherwise
 */
int is_strictly_positive(int elem)
{
    return (elem > 0);
}

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
    int array[5] = {0, 98, 402, 1024, 4096};
    int index;

    index = int_index(array, 5, is_98);
    printf("%d\n", index);
    index = int_index(array, 5, is_strictly_positive);
    printf("%d\n", index);
    index = int_index(array, 5, NULL);
    printf("%d\n", index);
    return (0);
}
```

> Compiled with: `gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-int_index.c -o 2-int_index`
> Output:
> ```shell
> $ ./2-int_index
> 1
> 2
> -1
> ```

</details>

---

<details>
<summary>
<a href="./3-calc.h">3. A goal is not always meant to be reached, it often serves simply as something to aim at</a>
</summary>

### 3\. A goal is not always meant to be reached, it often serves simply as something to aim at

Write a program that performs simple operations.
- You are allowed to use the standard library
- Usage: `calc num1 operator num2`
- You can assume `num1` and `num2` are integers, so use the `atoi` function to convert them from the string input to `int`
- `operator` is one of the following:
    - `+`: addition
    - `-`: subtraction
    - `*`: multiplication
    - `/`: division
    - `%`: modulo
- The program prints the result of the operation, followed by a new line
- You can assume that the result of all operations can be stored in an `int`
- If the number of arguments is wrong, print `Error`, followed by a new line, and exit with the status `98`
- If the `operator` is none of the above, print `Error`, followed by a new line, and exit with the status `99`
- If the user tries to divide (`/` or `%`) by `0`, print `Error`, followed by a new line, and exit with the status `100`

This task requires that you create four different files.

- [`3-calc.h`](./3-calc.h) should contain all the function prototypes and data structures used by the program.
You can only use this structure:
```c
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;
```

- [`3-op_functions.c`](./3-op_functions.c) should contain the 5 following functions (not more):
    - `op_add` that returns the sum of a and b. (prototype: `int op_add(int a, int b);`)
    - `op_sub` that returns the difference of a and b. (prototype: `int op_sub(int a, int b);`)
    - `op_mul` that returns the product of a and b. (prototype: `int op_mul(int a, int b);`)
    - `op_div` that returns the result of the division of a by b. (prototype: `int op_div(int a, int b);`)
    - `op_mod` that returns the remainder of the division of a by b. (prototype: `int op_mod(int a, int b);`)

- [`3-get_op_func.c`](./3-get_op_func.c) should contain the function that selects the correct function to perform the operation asked by the user. You’re not allowed to declare any other function.
    - Prototype:
        ```c
        int (*get_op_func(char *s))(int, int);
        ```
    - Where `s` is the operator passed as argument to the program.
    - Your function returns a pointer to the function that corresponds to the operator given as a parameter. Example: `get_op_func("+")` should return a pointer to the function `op_add`.
    - You are not allowed to use `else`, `switch`, `case`, `goto`, or ternary operator (`?:`).
    - You are not allowed to use `for` or `do ... while` loops.
    - You are not allowed to use more than one `if` statement in your code.
    - You are not allowed to use more than one `while` loop in your code.
    - If `s` does not match any of the 5 expected operators (`+`, `-`, `*`, `/`, `%`), return `NULL`.
    - You are only allowed to declare these two variables in this function:
        ```c
        op_t ops[] = {
            {"+", op_add},
            {"-", op_sub},
            {"*", op_mul},
            {"/", op_div},
            {"%", op_mod},
            {NULL, NULL}
        };
        int i;
        ```

- [`3-main.c`](./3-main.c) should contain your `main` function only.
    - You are not allowed to code any other function than `main` in the file `3-main.c`.
    - You are not allowed to directly call `op_add`, `op_sub`, `op_mul`, `op_div` and `op_mod` from the file `3-main.c`.
    - You have to use `atoi` to convert arguments to `int`.
    - You are not allowed to use any kind of loop (`for`, `do ... while`, `while`, etc.).
    - You are allowed a maximum of 3 `if` statements in your code.

> Compiled with: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc`

> Output:
> ```shell
> $ ./calc 1 + 1
> 2
> $ ./calc 1024 '*' 98
> 100352
> $ ./calc 1024 '/' 98
> 10
> $ ./calc 1024 '%' 98
> 38
> $ ./calc 1024 '+' 98
> 1122
> $ ./calc 1024 '-' 98
> 926
> $ ./calc 1024 'a' 98
> Error
> $ ./calc 1024 '+' 98 98
> Error
> $
> ```

</details>

--- 

<details>
<summary>
<a href="./100-main_opcodes.c">4. Once an idea has taken hold of the brain it's almost impossible to eradicate</a>
</summary>

### 4\. Once an idea has taken hold of the brain it's almost impossible to eradicate

Write a program that prints the [`opcodes`](https://en.wikipedia.org/wiki/Opcode) of its own main function.

- Usage: `./main number_of_bytes`
- Output format:
    - the opcodes should be printed in hexadecimal, lowercase
    - each opcode is two char long
    - listing ends with a new line
    - see example
- You are allowed to use `printf` and `atoi`
- You have to use `atoi` to convert the argument to an `int`
- If the number of arguments is not the correct one, print `Error`, followed by a new line, and exit with the status `1`
- If the number of bytes is negative, print `Error`, followed by a new line, and exit with the status `2`
- You do not have to compile with any flags

> Note: if you want to translate your opcodes to assembly instructions, you can use, for instance [udcli](https://sourceforge.net/projects/udis86/).

> Output:
```shell
$ ./main 21
55 48 89 e5 48 83 ec 30 89 7d dc 48 89 75 d0 83 7d dc 02 74 14
$ objdump -d -j.text -M intel main
[...]
00000000004005f6 <main>:
  4005f6:   55                      push   rbp
  4005f7:   48 89 e5                mov    rbp,rsp
  4005fa:   48 83 ec 30             sub    rsp,0x30
  4005fe:   89 7d dc                mov    DWORD PTR [rbp-0x24],edi
  400601:   48 89 75 d0             mov    QWORD PTR [rbp-0x30],rsi
  400605:   83 7d dc 02             cmp    DWORD PTR [rbp-0x24],0x2
  400609:   74 14                   je     40061f <main+0x29>
[...]
$ ./main 21 | udcli -64 -x -o 4005f6
00000000004005f6 55               push rbp                
00000000004005f7 4889e5           mov rbp, rsp            
00000000004005fa 4883ec30         sub rsp, 0x30           
00000000004005fe 897ddc           mov [rbp-0x24], edi     
0000000000400601 488975d0         mov [rbp-0x30], rsi     
0000000000400605 837ddc02         cmp dword [rbp-0x24], 0x2
0000000000400609 7414             jz 0x40061f
[...]
$
```
> Note 0: `je` is equivalent to `jz`
> Note 1: depending on how you write your `main` function, and on which machine you compile your program, the opcodes (and by extension the assembly code) might be different than the above example

</details>
