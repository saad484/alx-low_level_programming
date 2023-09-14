# 0x07. C - Even more pointers, arrays and strings

## Resources
- [C - Pointer to Pointer](https://www.tutorialspoint.com/cprogramming/c_pointer_to_pointer.htm)
- [C - Pointer to Pointer with example](https://www.programiz.com/c-programming/c-pointer-pointer)
- [Multi-dimensional Arrays in C](https://www.geeksforgeeks.org/multi-dimensional-arrays-c-cpp/)
- [Two dimensional (2D) arrays in C programming with example](https://www.programiz.com/c-programming/c-multi-dimensional-arrays)

## Learning Objectives
- [What are pointers to pointers and how to use them](#what-is-a-pointer-to-a-pointer-and-how-to-use-it)
- [What are multidimensional arrays and how to use them](#what-is-a-multidimensional-array-and-how-to-use-it)
- [What are the most common C standard library functions to manipulate strings](#what-are-the-most-common-c-standard-library-functions-to-manipulate-strings)

### What is a pointer to a pointer and how to use it?

A pointer to a pointer is a type of pointer variable that stores the address of another pointer variable. It is also known as a double pointer.

In C programming, a pointer to a pointer can be useful in situations where we need to pass a pointer as an argument to a function and modify the original pointer. By using a pointer to a pointer, we can indirectly modify the value of the original pointer.

Here's an example:

```c
#include <stdio.h>

void changePointer(int **ptr)
{
    int newNum = 20;
    *ptr = &newNum;
}

int main()
{
    int num = 10;
    int *ptr = &num;
    
    printf("Before function call: %d\n", *ptr); // output: 10
    
    changePointer(&ptr);
    
    printf("After function call: %d\n", *ptr); // output: 20
    
    return 0;
}

```

### What is a multidimensional array and how to use it?

A multidimensional array is an array of arrays. It is a way to represent data in multiple dimensions, such as a table or a matrix.

In C, a multidimensional array can be declared as follows:

```
data_type array_name[size1][size2]...[sizeN];
```
where `data_type` is the type of data to be stored in the array, `array_name` is the name of the array, and `size1`, `size2`, ..., `sizeN` are the sizes of each dimension of the array.

To access elements of a multidimensional array, you can use nested loops. For example, to initialize a 2D array of integers with the values 0 to 9, you can do:

```c
int arr[3][3];

for (int i = 0; i < 3; i++) {
  for (int j = 0; j < 3; j++) {
    arr[i][j] = i * 3 + j;
  }
}
```

This will create a 3x3 array with the following values:

```
0 1 2
3 4 5
6 7 8
```

You can also create arrays with more than two dimensions, such as 3D arrays, 4D arrays, and so on. The concept is the same, but you need to use nested loops for each dimension.

### What are the most common C standard library functions to manipulate strings?

The most common C standard library functions to manipulate strings include:

* [`strlen`](https://man7.org/linux/man-pages/man3/strlen.3.html) - returns the length of a string.
* [`strcpy`](https://man7.org/linux/man-pages/man3/strcpy.3.html) - copies a string.
* [`strncpy`](https://man7.org/linux/man-pages/man3/strncpy.3.html) - copies a certain number of characters from one string to another.
* [`strcat`](https://man7.org/linux/man-pages/man3/strcat.3.html) - concatenates two strings.
* [`strncat`](https://man7.org/linux/man-pages/man3/strncat.3.html) - concatenates a certain number of characters from one string to another.
* [`strcmp`](https://man7.org/linux/man-pages/man3/strcmp.3.html) - compares two strings.
* [`strncmp`](https://man7.org/linux/man-pages/man3/strncmp.3.html) - compares a certain number of characters from two strings.
* [`strstr`](https://man7.org/linux/man-pages/man3/strstr.3.html) - searches for a substring in a string.
* [`strtok`](https://man7.org/linux/man-pages/man3/strtok.3.html) - breaks a string into tokens.
* [`sprintf`](https://man7.org/linux/man-pages/man3/sprintf.3.html) - formats and stores a string in a buffer.

There are many other functions in the C standard library that can be used to manipulate strings as well.


## Tasks
- All `*-main.c` files are provided in the `[test_files](./test_files)` directory.
- We will be using function prototypes from the `[main.h](./main.h)` header file for this project.

---

<details>
<summary><a href="0-memset.c">0. memset</a></summary>

<img src="./imgs/0-memset.png" alt="0-memset">

```c
#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
        unsigned int i;

        i = 0;
        while (i < size)
        {
                if (i % 10)
                {
                        printf(" ");
                }
                if (!(i % 10) && i)
                {
                        printf("\n");
                }
                printf("0x%02x", buffer[i]);
                i++;
        }
        printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[98] = {0x00};

    simple_print_buffer(buffer, 98);
    _memset(buffer, 0x01, 95);
    printf("-------------------------------------------------\n");
    simple_print_buffer(buffer, 98);    
    return (0);
}
```
> Expected output:
```shell
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
-------------------------------------------------
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x00 0x00 0x00
```

> Compile with:
```shell
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-memset.c -o 0-memset
```
</details>

---

<details>
<summary><a href="1-memcpy.c">1. memcpy</a></summary>

<img src="./imgs/1-memcpy.png" alt="1-memcpy">


```c
#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[98] = {0};
    char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

    simple_print_buffer(buffer, 98);
    _memcpy(buffer + 50, buffer2, 10);
    printf("-------------------------------------------------\n");
    simple_print_buffer(buffer, 98);    
    return (0);
}
```

> Expected output:
```shell
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
-------------------------------------------------
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x01 0x02 0x03 0x04 0x05 0x07 0x07 0x08 0x09 0x0a
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
```

> Compile with:
```shell
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-memcpy.c -o 1-memcpy
```

</details>

---

<details>
<summary><a href="2-strchr.c">2. strchr</a></summary>

<img src="./imgs/2-strchr.png" alt="2-strchr">


```c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}
```
> Compiled with:
```shell
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strchr.c -o 2-strchr
```
> Expected output:
```shell
llo
```


</details>

---

<details>
<summary><a href="3-strspn.c">3. strspn</a></summary>

<img src="./imgs/3-strspn.png" alt="3-strspn">


```c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}
```
> Compiled with:
```shell
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-strspn.c -o 3-strspn
```
> Expected output:
```shell
5
```

</details>

---

<details>
<summary><a href="4-strpbrk.c">4. strpbrk</a></summary>

<img src="./imgs/4-strpbrk.png" alt="4-strpbrk">

```c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strpbrk(s, f);
    printf("%s\n", t);
    return (0);
}

```
> Compiled with:
```shell
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-strpbrk.c -o 4-strpbrk
```
> Expected output:
```shell
llo, world
```

</details>

---

<details>
<summary><a href="5-strstr.c">5. strstr</a></summary>

<img src="./imgs/5-strstr.png" alt="5-strstr">

```c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}
```
> Compiled with:
```shell
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-strstr.c -o 5-strstr
```
	
> Expected output:
```shell
world
```

</details>

---

<details>
<summary><a href="7-print_chessboard.c">6. Chess is mental torture</a></summary>

<img src="./imgs/7-print_chessboard.png" alt="7-print_chessboard">

```c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char board[8][8] = {
        {'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
    };
    print_chessboard(board);
    return (0);
}
```
> Compiled with:
```shell
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_chessboard.c -o 7-print_chessboard
```
> Expected output:
```shell
rkbqkbkr
pppppppp




PPPPPPPP
RKBQKBKR
```

</details>

---

<details>
<summary><a href="8-print_diagsums.c">7. The line of life is a ragged diagonal between duty and desire</a></summary>

<img src="./imgs/8-print_diagsums.png" alt="8-print_diagsums">

```c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int c3[3][3] = {
        {0, 1, 5},
        {10, 11, 12},
        {1000, 101, 102},
    };
    int c5[5][5] = {
        {0, 1, 5, 12124, 1234},
        {10, 11, 12, 123521, 12512},
        {1000, 101, 102, 12545, 214543435},
        {100, 1012451, 11102, 12545, 214543435},
        {10, 12401, 10452, 11542545, 1214543435},
    };
    print_diagsums((int *)c3, 3);
    print_diagsums((int *)c5, 5);
    return (0);
}
```
> Compiled with:
```shell
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_diagsums.c -o 8-print_diagsums
```
> Expected output:
```shell
113, 1016
1214556093, 1137318
```

</details>

---

<details>
<summary><a href="100-set_string.c">8. Double pointer, double fun</a></summary>

<img src="./imgs/100-set_string.png" alt="100-set_string">

```c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s0 = "Bob Dylan";
    char *s1 = "Robert Allen";

    printf("%s, %s\n", s0, s1);
    set_string(&s1, s0);
    printf("%s, %s\n", s0, s1);
    return (0);
}
```
> Compiled with:
```shell
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-set_string.c -o 100-set_string
```
> Expected output:
```shell
Bob Dylan, Robert Allen
Bob Dylan, Bob Dylan
```

</details>

---

<details>
<summary><a href="101-crackme_password">9. My primary goal of hacking was the intellectual curiosity, the seduction of adventure</a></summary>

<img src="./imgs/101-crackme_password.png" alt="101-crackme_password">

## How I cracked the password
- Step 1: I ran the [program](https://github.com/holbertonschool/0x06.c) with random inputs to see what the output was. (it was always `Access denied`)
- Step 2: I opened the program in `gdb` to see what the program was doing.
    - I used `info functions` to see what functions were in the program.

<img src="./imgs/101-crackme_1.png" alt="101-crackme_password_1" height="500" >

- Step 3: I used `disassemble main` to see where the the `strcmp` and `strncmp` functions were being called.
	
<img src="./imgs/101-crackme_cmp_1.png" alt="101-crackme_cmp_1" width="400"> 

	
<img src="./imgs/101-crackme_cmp_2.png" alt="101-crackme_cmp_2" width="400">
	
- Step 4: I examined the compared strings to see what the password was.
    <img src="./imgs/101-crackme_cmp_res.png" alt="101-crackme_cmp_2">
- Step 5: After that I tried the using one of the passwords in the program but didn't work!
- Step 6: I then I noticed that there's `MD5` hash functions from the `OpenSSL` library being called.
- Step 7: I Used an online decoder to decode the hash to the password.
  - hash: `e99a18c428cb38d5f260853678922e03`
  - password: `abc123`
- Step 8: I ran the program with the password and still didn't work!
- Step 9: After examining the assembly code I noticed that the program printing `Access denied` when `argc` is not equal to `1`.
  - That mean that the program use other method to check the password.
- Step 10: After examining the assembly more I noticed that the program use `envp` param and checks
  - They iterat through the `envp` array and check if the `envp[i]` is equal to `jennieandjayloveasm=`
  - If it is equal to `jennieandjayloveasm=` then the program compute its `MD5` hash and compare it to the hash `e99a18c428cb38d5f260853678922e03`
  - If it is equal to `e99a18c428cb38d5f260853678922e03` then the program prints `Access Granted` and exits.

## The solution
 - create a environment variable called `jennieandjayloveasm=` and set it to the password `abc123`
 - `export jennieandjayloveasm=abc123`
 - run the program `./101-crackme_password`
 - The program should print `Access Granted`

</details>
