<h1 align="center">0x0C. C - More malloc, free</h1>

## Resources
- [Do I cast the result of malloc](https://stackoverflow.com/questions/605845/do-i-cast-the-result-of-malloc)

### Man or help:
- [`exit (3)`](https://www.man7.org/linux/man-pages/man3/exit.3.html)
- [`calloc`](https://www.man7.org/linux/man-pages/man3/calloc.3p.html)
- [`realloc`](https://www.man7.org/linux/man-pages/man3/realloc.3p.html)

---

## Learning Objectives
- [How to use the `exit` function](#how-to-use-the-exit-function)
- [What are the functions `calloc` and `realloc` from the standard library and how to use them](#what-are-the-functions-calloc-and-realloc-from-the-standard-library-and-how-to-use-them)

> ### How to use the `exit` function

- The `exit()` function is a function in the `C` standard library used to terminate a program. It is declared in the `stdlib.h` header file.

- The `exit()` function takes an integer argument which is the exit status of the program. A zero value is generally used to indicate that the program has completed successfully.

- Here's an example of the `exit()` function:

```c
#include <stdlib.h>
#include <stdio.h>

int main() {
    int x = 1;
    if (x == 1) {
        printf("Exiting program with error code 1\n");
        exit(1);
    } else {
        printf("Exiting program normally\n");
        exit(0);
    }
}
```

> ### What are the functions `calloc` and `realloc` from the standard library and how to use them

The `calloc` and `realloc` functions are memory allocation functions available in the C standard library.

`calloc` function allocates a block of memory for an array of elements, and initializes all bytes in the block to zero. The function takes two arguments: the number of elements to allocate space for, and the size of each element.

The syntax for the `calloc` function is as follows: `ptr = (castType*)calloc(n, size);` where:
- `ptr` is a pointer to the first byte of the allocated memory block
- `castType` is the type to which the pointer should be cast
- `n` is the number of elements to be allocated and size is the size of each element.

`realloc` function changes the size of the memory block pointed to by a previously allocated memory block. The function takes two arguments: a pointer to the previously allocated memory block, and the new size of the memory block.

The syntax for the `realloc` function is as follows: `ptr = realloc(ptr, newSize);` where:
- `ptr` is a pointer to the previously allocated memory block
- `newSize` is the new size of the memory block

Both `calloc` and `realloc` functions return a pointer to the allocated memory block. If the memory allocation fails, both functions return a `NULL` pointer.

Here's an example of the `calloc` function:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*)calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf("Error! memory not allocated.");
        exit(0);
    }

    printf("Memory successfully allocated using calloc.\n");

    for (i = 0; i < n; ++i) {
        ptr[i] = i + 1;
    }

    printf("The elements of the array are: ");
    for (i = 0; i < n; ++i) {
        printf("%d, ", ptr[i]);
    }

    free(ptr);
    return 0;
}
```

Here's an example of the `realloc` function:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n = 5;

    ptr = (int*)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        *(ptr+i) = i;
        printf("%d ", *(ptr+i));
    }
    printf("\n");

    n = 10;
    ptr = (int*)realloc(ptr, n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        *(ptr+i) = i;
        printf("%d ", *(ptr+i));
    }
    printf("\n");

    free(ptr);
    return 0;
}
```


---

## Tasks
- [0. Trust no one](#0-trust-no-one)
- [1. string_nconcat](#1-string_nconcat)
- [2. _calloc](#2-_calloc)
- [3. array_range](#3-array_range)
- [4. _realloc](#4-_realloc)
- [5. We must accept finite disappointment, but never lose infinite hope](#5-we-must-accept-finite-disappointment-but-never-lose-infinite-hope)

---

<details>
<summary><a href="0-malloc_checked.c">0. Trust no one</a></summary>

### 0. Trust no one

<img src="images/0.png">

```c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *c;
    int *i;
    float *f;
    double *d;

    c = malloc_checked(sizeof(char) * 1024);
    printf("%p\n", (void *)c);
    i = malloc_checked(sizeof(int) * 402);
    printf("%p\n", (void *)i);
    f = malloc_checked(sizeof(float) * 100000000);
    printf("%p\n", (void *)f);
    d = malloc_checked(INT_MAX);
    printf("%p\n", (void *)d);
    free(c);
    free(i);
    free(f);
    free(d);
    return (0);
}
```

> Compiled with `gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-malloc_checked.c -o a`

> output:
> ```bash
> $ ./a
> 0x1e39010
> 0x1e39830
> 0x7f31f6c19010
> $ echo $?
> 98
> ```

</details>

---

<details>
<summary><a href="1-string_nconcat.c">1. string_nconcat</a></summary>

### 1. string_nconcat

<img src="images/1.png">

```c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
```

> Compiled with `gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-string_nconcat.c -o b`

> output:
> ```bash
> $ ./b
> Best School
> ```

</details>

---

<details>

<summary><a href="2-calloc.c">2. _calloc</a></summary>

### 2. _calloc

<img src="images/2.png">

```c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    char *a;

    a = _calloc(98, sizeof(char));
    strcpy(a, "Best");
    strcpy(a + 4, " School! :)\n");
    a[97] = '!';
    simple_print_buffer(a, 98);
    free(a);
    return (0);
}
```

> Compiled with `gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-calloc.c -o 2-calloc`

> output:
> ```bash
> $ ./2-calloc
> 0x42 0x65 0x73 0x74 0x20 0x53 0x63 0x68 0x6f 0x6f
> 0x6c 0x21 0x20 0x3a 0x29 0x0a 0x00 0x00 0x00 0x00
> 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
> 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
> 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
> 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
> 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
> 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
> 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
> 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x21
> ```

</details>

---

<details>

<summary><a href="3-array_range.c">3. array_range</a></summary>

### 3. array_range

<img src="images/3.png">

```c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(int *buffer, unsigned int size)
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
    int *a;

    a = array_range(0, 10);
    simple_print_buffer(a, 11);
    free(a);
    return (0);
}
```

> Compiled with `gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-array_range.c -o 3-array_range`

> output:
> ```bash
> $ ./3-array_range
> 0x00 0x01 0x02 0x03 0x04 0x05 0x06 0x07 0x08 0x09
> 0x0a
> ```

</details>

---

<details>

<summary><a href="4-realloc.c">4. _realloc</a></summary>

### 4. _realloc

<img src="images/4.png">

```c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    char *p;
    int i;

    p = malloc(sizeof(char) * 10);
    p = _realloc(p, sizeof(char) * 10, sizeof(char) * 98);
    i = 0;
    while (i < 98)
    {
        p[i++] = 98;
    }
    simple_print_buffer(p, 98);
    free(p);
    return (0);
}
```

> Compiled with `gcc -Wall -pedantic -Werror -Wextra 100-main.c 100-realloc.c -o 100-realloc`

> output:
> ```bash
> $ ./100-realloc
> 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
> 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
> 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
> 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
> 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
> 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
> 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
> 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
> 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
> 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
> ```

</details>

---

<details>

<summary><a href="100-mul.c">5. We must accept finite disappointment, but never lose infinite hope</a></summary>

### 5. We must accept finite disappointment, but never lose infinite hope

<img src="images/5.png">

> Compiled with `gcc -Wall -pedantic -Werror -Wextra 101-main.c 101-mul.c _putchar.c -o 101-mul`

> output:
> ```bash
> $ ./101-mul 10 98
> 980
> $ ./ 101-mul 235234693269436436223446526546334576437634765378653875874687649698659586695898579 28658034365084365083426083109679137608216408631430814308651084650816406134060831608310853086103769013709675067130586570832760732096730978014607369739567864508634086304807450973045703428580934825098342095832409850394285098342509834209583425345267413639235755891879970464524226159074760914989935413350556875770807019893069201247121855122836389417022552166316010013074258781583143870461182707893577849408672040555089482160343085482612348145322689883025225988799452329290281169927532160590651993511788518550547570284574715925006962738262888617840435389140329668772644708
> 6741363923575589187997046452422615907476091498993541335055687577080701989306920124712185512283638941702255216631601001307425878158314387046118270789357784940867204055508948216034308548261234814532268988302522598879945232929028116992753216059081057377926651337612618248332113256902485974371969385156015068813868274000683912187818601667058605418678284322237297213673482412392922068159291496274311170208689056585352782844484721140846367741649962638649229509281867896067208474178402156294978940712959518351846413859141792380853313812015295333546716634344284086426775480775747808150030732119704867805688704303461042373101473485092019906795014369069932
> ```

</details>
