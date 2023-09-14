# 0x01. C - Variables,if,else,while

## Resources

- [C - Books and PDF's - User as a reference](../references)
- [Keywords and identifiers](https://publications.gbdirect.co.uk//c_book/chapter2/keywords_and_identifiers.html).
- [Integral types](https://publications.gbdirect.co.uk//c_book/chapter2/integral_types.html).
- [Arithmetic Operators in C](https://www.tutorialspoint.com/cprogramming/c_arithmetic_operators.htm).
- [If statements in C](https://www.cprogramming.com/tutorial/c/lesson2.html).
- [C - if...else statement](https://www.tutorialspoint.com/cprogramming/if_else_statement_in_c.htm).
- [Relational Operators in C](https://www.tutorialspoint.com/cprogramming/c_relational_operators.htm).
- [C - Logical Operators](https://fresh2refresh.com/c-programming/c-operators-expressions/c-logical-operators/).
- [while loop in C](https://www.tutorialspoint.com/cprogramming/c_while_loop.htm).
- [While Loop - Youtube](https://youtu.be/Ju1LYO9pkaI)

## Learning Objectives
- [What are the arithmetic operators and how to use them](#what-are-the-arithmetic-operators-and-how-to-use-them)
- [What are the logical operators (sometimes called boolean operators) and how to use them](#what-are-the-logical-operators-sometimes-called-boolean-operators-and-how-to-use-them)
- [What the the relational operators and how to use them](#what-the-the-relational-operators-and-how-to-use-them)
- [What values are considered TRUE and FALSE in C](#what-values-are-considered-true-and-false-in-c)
- [What are the boolean operators and how to use them](#what-are-the-boolean-operators-and-how-to-use-them)
- [How to use the `if`, `if ... else` statements](#how-to-use-the-if-if--else-statements)
- [How to use comments](#how-to-use-comments)
- [How to declare variables of types `char`, `int`, `unsigned int`](#how-to-declare-variables-of-types-char-int-unsigned-int)
- [How to assign values to variables](#how-to-assign-values-to-variables)
- [How to print the values of variables of type `char`, `int`, `unsigned int` with `printf`](#how-to-print-the-values-of-variables-of-type-char-int-unsigned-int-with-printf)
- [How to use the `while` loop](#how-to-use-the-while-loop)
- [How to use variables with the `while` loop](#how-to-use-variables-with-the-while-loop)
- [How to print variables using `printf`](#how-to-print-variables-using-printf)
- [What is the `ASCII` character set](#what-is-the-ascii-character-set)
- [What are the purpose of the `gcc` flags `-m32` and `-m64`](#what-are-the-purpose-of-the-gcc-flags-m32-and-m64)

## Tasks
- [0. Positive anything is better than negative nothing](#task-0)
- [1. The last digit](#task-1)
- [2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game](#task-2)
- [3. alphABET](#task-3)
- [4. When I was having that alphabet soup, I never thought that it would pay off](#task-4)
- [5. Numbers](#task-5)
- [6. Numberz](#task-6)
- [7. Smile in the mirror](#task-7)
- [8. Hexadecimal](#task-8)
- [9. Patience, persistence and perspiration make an unbeatable combination for success](#task-9)
- [10. 00...99](#task-10)
- [11. Inventing is a combination of brains and materials. The more brains you use, the less material you need](#task-11)
- [12. The success combination in business is: Do what you do better... and: do more of what you do...](#task-12)
- [13. Software is eating the World](#task-13)


## Learning Objectives - Answers

### - What are the arithmetic operators and how to use them
Arithmetic operators are operators used in mathematical expressions in programming. Here are the commonly used arithmetic operators in C++:



| Operator	 | Operation          |
|-----------|--------------------|
| +	        | Addition           |
| -	        | Subtraction        |
| *	        | Multiplication     |
| /	        | Division           |
| %	        | Modulo (Remainder) |


Example of arithmetic operators in C:

```c
int a = 5, b = 3, c;
c = a + b; // Addition
c = a - b; // Subtraction
c = a * b; // Multiplication
c = a / b; // Division
c = a % b; // Modulo
```
Note that in C++, integer division truncates the result to the nearest integer. For example, `5/3` evaluates to `1`, not `1.6667`. If you want a floating-point result, you can use a floating-point type such as `float` or `double`.


### - What are the logical operators (sometimes called boolean operators) and how to use them

Logical operators in C are used to evaluate conditions and return true or false (boolean) values. There are three logical operators in C:

- `&&` (logical AND): Returns true if both operands are true, otherwise returns false.
- `||` (logical OR): Returns true if either operand is true, otherwise returns false.
- `!` (logical NOT): Returns true if the operand is false, otherwise returns false.

Example:
    
```c
#include <stdio.h>
#include <stdbool.h>

int main() {
    bool a = true;
    bool b = false;

    if (a && b) {
        printf("Both a and b are true.\n");
    } else if (a || b) {
        printf("Either a or b is true.\n");
    } else {
        printf("Neither a nor b is true.\n");
    }

    if (!b) {
        printf("b is false.\n");
    }

    return 0;
}
```

### - What the relational operators and how to use them

Relational operators are used to compare two values and return a boolean value (true or false). The relational operators in C are:

- `==` : equal to
- `!=` : not equal to
- `<` : less than
- `>` : greater than
- `<=` : less than or equal to
- `>=` : greater than or equal to

Here is an example of how to use them in C:
```c
#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;

    if (a == b) {
        printf("a is equal to b\n");
    } else if (a != b) {
        printf("a is not equal to b\n");
    }

    if (a < b) {
        printf("a is less than b\n");
    }

    if (b > a) {
        printf("b is greater than a\n");
    }

    if (a <= b) {
        printf("a is less than or equal to b\n");
    }

    if (b >= a) {
        printf("b is greater than or equal to a\n");
    }

    return 0;
}
```


### - What values are considered TRUE and FALSE in C
In C, the value 0 is considered FALSE, while any other non-zero value is considered TRUE. For example, the following code will print "TRUE" because the value of `a` is non-zero:

```c
#include <stdio.h>

int main() {
    int a = 5;

    if (a) {
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }

    return 0;
}
```

In C, any non-zero value is considered TRUE and a zero value is considered FALSE. This is because C uses a concept called "truthiness", where any value that is not explicitly false is considered true. In practical terms, this means that any condition that evaluates to a non-zero value will be considered true, while a condition that evaluates to zero will be considered false. This is a simple and intuitive approach that allows for concise and readable code.


### - What are the boolean operators and how to use them

Boolean operators are operators that are used to evaluate a condition as either true or false. In C, the boolean operators are:

- `&&` (logical AND): returns true if both operands are true, false otherwise.
- `||` (logical OR): returns true if at least one operand is true, false otherwise.
- `!` (logical NOT): returns true if the operand is false, false if the operand is true.

Here's an example of using boolean operators in C:
```c
int x = 5, y = 10;
if (x < y && y < 20) {
    printf("x is less than y and y is less than 20\n");
}
if (x > 3 || y > 15) {
    printf("either x is greater than 3 or y is greater than 15 (or both)\n");
}
if (!(x == 7)) {
    printf("x is not equal to 7\n");
}

```

### - How to use the `if`, `if ... else` statements

The `if` statement is used to check a condition and execute the code inside the block if the condition is true. Here's an example:
```c
int x = 10;

if (x > 5) {
    printf("x is greater than 5\n");
}
```
In this example, the condition `x > 5` is true, so the code inside the `if` block is executed and "x is greater than 5" is printed to the console.

The `if ... else` statement is used to check a condition and execute one block of code if the condition is true and another block of code if the condition is false. Here's an example:

```c
int x = 10;

if (x > 5) {
    printf("x is greater than 5\n");
} else {
    printf("x is less than or equal to 5\n");
}
```
In this example, the condition `x > 5` is true, so the code inside the first block is executed and "x is greater than 5" is printed to the console. If the condition had been false, the code inside the second block would have been executed instead and "x is less than or equal to 5" would have been printed.

### - How to use comments

In C programming language, we can use two types of comments:

1. Single-line comments: This is used to comment on a single line of code. The compiler will ignore everything after the `//` until the end of the line.
```c
// This is a single-line comment
int x = 5; // This is also a single-line comment
```
2. Multi-line comments: This is used to comment on multiple lines of code. The compiler will ignore everything between `/*` and `*/`.
```c
/* This is a multi-line
   comment */
int x = 5; /* This is also a
               multi-line comment */
```
It is recommended to use comments in your code to make it more readable and understandable.

### - How to declare variables of types `char`, `int`, `unsigned int`

To declare variables of types `char`, `int`, and `unsigned int`, you can use the following syntax:
```c
char myChar = 'a';
int myInt = 42;
unsigned int myUInt = 12345;
```

### - How to assign values to variables

To assign a value to a variable in C, you need to use the assignment operator `=`. The general syntax is:
```c
variable = value;
```

Here's an example of how to declare and assign values to variables of types `char`, `int`, `unsigned int`:
```c
#include <stdio.h>

int main() {
    char c = 'a';
    int i = 42;
    unsigned int ui = 100;

    printf("c = %c\n", c);
    printf("i = %d\n", i);
    printf("ui = %u\n", ui);

    return 0;
}
```

The output of this program is:

```shell
c = a
i = 42
ui = 100
```

### - How to print the values of variables of type `char`, `int`, `unsigned int` with `printf`

In C programming language, `printf`is a function that is used to print the formatted output to the standard output (stdout) stream. It takes a format string as the first argument, which specifies how the output should be formatted, followed by the values of the variables that should be printed. The format string is made up of literal text and format specifiers. The format specifiers are used to specify the type and format of the corresponding argument.

To print the value of a variable of type `char`, the `%c` format specifier is used. For example:
```c
char ch = 'a';
printf("The value of ch is %c\n", ch);
```
To print the value of a variable of type `int`, the `%d` or `%i` format specifier is used. For example:
```c
int num = 42;
printf("The value of num is %d\n", num);
```

To print the value of a variable of type `unsigned int`, the `%u` format specifier is used. For example:
```c
unsigned int num = 42;
printf("The value of num is %u\n", num);
```

It is important to use the correct format specifier for the type of the variable being printed. Using the wrong format specifier can result in undefined behavior, such as printing garbage values or crashing the program.

### - How to use the `while` loop

The `while` loop is used to repeatedly execute a block of code while a certain condition is true. The syntax of the `while` loop in C is as follows:
```c
while (condition) {
   // code to be executed while the condition is true
}
```

The `condition` is an expression that is evaluated at the beginning of each iteration of the loop. If the `condition` is true, the block of code inside the loop is executed. This continues until the `condition` becomes false.

Here is an example of using a `while` loop to print the numbers from 1 to 10:
```c
int i = 1;
while (i <= 10) {
    printf("%d ", i);
    i++;
}
```

In this example, the variable `i` is initialized to 1 before the loop. The condition `i <= 10` is true for the first 10 iterations of the loop, so the block of code inside the loop is executed 10 times. The value of `i` is printed on each iteration, and then incremented by 1 using the `i++` statement. The loop continues until `i` becomes greater than 10, at which point the `condition` becomes false and the loop terminates.




### - How to use variables with the `while` loop

To use variables with the `while` loop in C, you need to declare the variable before the loop and update it inside the loop. Here's an example:

```c
#include <stdio.h>

int main() {
    int i = 0; // Declare and initialize the variable

    while (i < 10) { // Loop condition
        printf("%d ", i); // Print the variable
        i++; // Update the variable
    }

    return 0;
}
```


### - How to print variables using `printf`

To print variables using `printf`, you need to use format specifiers to specify the type of the variable being printed. Here are the format specifiers for the most common types of variables:

| Type | Format Specifier                 |
|------|----------------------------------|
| %d   | for int                          |
| %u   | for unsigned int                 |
| %c   | for char                         |
| %s   | for string (array of characters) |
| %f   | for float                        |
| %lf  | for double                       |

Here's an example of how to print the value of a variable of type `int` and `float` using `printf`:
```c
int x = 10;
float y = 3.14;
printf("The value of x is: %d and the value of y is: %f\n", x, y);
```

### - What is the `ASCII` character set

The ASCII (American Standard Code for Information Interchange) character set is a character encoding standard for electronic communication. It represents 128 characters including uppercase and lowercase letters, numbers, punctuation marks, and control characters.

Here are some examples of ASCII characters and their decimal values:

- Decimal 65: `A`
- Decimal 97: `a`
- Decimal 48: `0`
- Decimal 33: `!`
- Decimal 32: Space character
- `man ascii` for more information
The ASCII character set is widely used in computer systems and programming languages.

### - What are the purpose of the `gcc` flags `-m32` and `-m64`

The `-m32` and `-m64` flags are used to specify the target architecture for the code being compiled with gcc.

The `-m32` flag tells `gcc` to generate code for a 32-bit environment, while the `-m64` flag tells it to generate code for a 64-bit environment.

The purpose of these flags is to control the size and layout of data types, pointers, and memory addressing in the compiled code. They are useful when compiling code for different architectures or when compiling code that must interact with code compiled for a different architecture.

For example, if you are compiling code for a 32-bit system, you would use the `-m32` flag to ensure that the code is compiled with the correct memory layout and addressing scheme for that architecture. Similarly, if you are compiling code for a 64-bit system, you would use the `-m64` flag to ensure that the code is compiled for that architecture.

Examples:

To compile a C program for a 32-bit architecture:
```bash
gcc -m32 -o program program.c
```

To compile a C program for a 64-bit architecture:
```bash
gcc -m64 -o program program.c
```

## Tasks

<details>
<summary><a href="./0-positive_or_negative.c">0. Positive anything is better than negative nothing</a></summary><br>

### Task 0

<img src="./imgs/0-positive_or_negative.png" alt="positive or negative">

- [Source Code](https://github.com/holbertonschool/0x01.c/blob/master/0-positive_or_negative_c)

> Compiled with: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative`

> Output:
```
$ ./0-positive_or_negative
-1 is negative
$ ./0-positive_or_negative
0 is zero
$ ./0-positive_or_negative
1 is positive
```


</details>

---

<details>
<summary><a href="./1-last_digit.c">1. The last digit</a></summary><br>

### Task 1

<img src="./imgs/1-last_digit.png" alt="last digit">

- [Source Code](./https://github.com/holbertonschool/0x01.c/blob/master/1-last_digit_c)
> Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit`

> Output:
```
$ ./1-last_digit
Last digit of 98 is 8 and is greater than 5
$ ./1-last_digit
Last digit of 0 is 0 and is 0
$ ./1-last_digit
Last digit of 402 is 2 and is less than 6 and not 0
```

</details>

---

<details>
<summary><a href="./2-print_alphabet.c">2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game</a></summary><br>

### Task 2

<img src="./imgs/2-print_alphabet.png" alt="alphabet">

> Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-print_alphabet.c -o 2-print_alphabet`

> Output:
```
$ ./2-print_alphabet
abcdefghijklmnopqrstuvwxyz
```

</details>

---

<details>
<summary><a href="./3-print_alphabets.c">3. alphABET</a></summary><br>

<img src="./imgs/3-print_alphabets.png" alt="alphabets">

> Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-print_alphabets.c -o 3-print_alphabets`

> Output:
```
$ ./3-print_alphabets
abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ
```

</details>

---

<details>
<summary><a href="./4-print_alphabt.c">4. When I was having that alphabet soup, I never thought that it would pay off</a></summary><br>

### Task 4

<img src="./imgs/4-print_alphabt.png" alt="alphabets">

> Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-print_alphabt.c -o 4-print_alphabt`
> Output:
```
$ ./4-print_alphabt
abcdfghijklmnoprstuvwxyz
$ ./4-print_alphabt | grep [eq]
$
```


</details>

---

<details>
<summary><a href="./5-print_numbers.c">5. Numbers</a></summary><br>

### Task 5

<img src="./imgs/5-print_numbers.png" alt="numbers">

> Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-print_numbers.c -o 5-print_numbers`

> Output:
```
$ ./5-print_numbers
0123456789
```

</details>

---

<details>
<summary><a href="./6-print_numberz.c">6. Numberz</a></summary><br>

### Task 6

<img src="./imgs/6-print_numberz.png" alt="numberz">

- This [ASCII](https://ascii.cl/) table will help you understand my solution.
    - For this you need to understand that `putchar` holds the decimal representation of the variable.
    - So we add `0 == 48` 48 is the decimal value to our single digit integer to convert it into its character representation.
    - Better explanation [here](https://stackoverflow.com/questions/21255038/what-does-putchar0-num-do)

> Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-print_numberz.c -o 6-print_numberz`

> Output:
> ```
> $ ./6-print_numberz
> 0123456789
> ```

</details>

---

<details>
<summary><a href="./7-print_tebahpla.c">7. Smile in the mirror</a></summary><br>

### Task 7

<img src="./imgs/7-print_tebahpla.png" alt="tebahpla">

> Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-print_tebahpla.c -o 7-print_tebahpla`

> Output:
> ```
> $ ./7-print_tebahpla
> zyxwvutsrqponmlkjihgfedcba
> ```

</details>

---

<details>
<summary><a href="./8-print_base16.c">8. Hexadecimal</a></summary><br>

### Task 8

<img src="./imgs/8-print_base16.png" alt="base16">

> Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-print_base16.c -o 8-print_base16`

> Output:
> ```
> $ ./8-print_base16
> 0123456789abcdef
> ```

</details>

---

<details>
<summary><a href="./9-print_comb.c">9. Patience, persistence and perspiration make an unbeatable combination for success</a></summary><br>

### Task 9

<img src="./imgs/9-print_comb.png" alt="comb">

> Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-print_comb.c -o 9-print_comb`

> Output:
> ```
> $ ./9-print_comb | cat -e
> 0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
> ```

</details>

---

<details>
<summary><a href="./100-print_comb3.c">10. Inventing is a combination of brains and materials. The more brains you use, the less material you need</a></summary><br>

### Task 10

<img src="./imgs/100-print_comb3.png" alt="comb3">

> Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-print_comb3.c -o 100-print_comb3`

> Output:
> ```
> $ ./100-print_comb3
> 01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
> ```

</details>

---

<details>
<summary><a href="./101-print_comb4.c">11. The success combination in business is: Do what you do better... and: do more of what you do...</a></summary><br>

### Task 11

<img src="./imgs/101-print_comb4.png" alt="comb4">

> Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-print_comb4.c -o 101-print_comb4`

> Output:
> ```
> $ ./101-print_comb4
> 012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 123, 124, 125, 126, 127, 128, 129, 134, 135, 136, 137, 138, 139, 145, 146, 147, 148, 149, 156, 157, 158, 159, 167, 168, 169, 178, 179, 189, 234, 235, 236, 237, 238, 239, 245, 246, 247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 345, 346, 347, 348, 349, 356, 357, 358, 359, 367, 368, 369, 378, 379, 389, 456, 457, 458, 459, 467, 468, 469, 478, 479, 489, 567, 568, 569, 578, 579, 589, 678, 679, 689, 789
> ```

</details>

---

<details>
<summary><a href="./102-print_comb5.c">12. Software is eating the World</a></summary><br>

### Task 12

<img src="./imgs/102-print_comb5.png" alt="comb5">

> Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-print_comb5.c -o 102-print_comb5`

> Output:
> ```
> $ ./102-print_comb5
> 00 01, 00 02, 00 03, 00 04, 00 05, 00 06, 00 07, 00 08, 00 09, 00 10, 00 11, [...] 40 91, 40 92, 40 93, 40 94, 40 95, 40 96, 40 97, 40 98, 40 99, 41 42, 41 43, 41 44, 41 45, 41 46, 41 47, 41 48, 41 49, 41 50, 41 51, 41 52, 41 53 [...] 93 95, 93 96, 93 97, 93 98, 93 99, 94 95, 94 96, 94 97, 94 98, 94 99, 95 96, 95 97, 95 98, 95 99, 96 97, 96 98, 96 99, 97 98, 97 99, 98 99
> ```

</details>

---

## Notes
### `?:` operator
The `?:` operator is called the ternary operator. It is a shortcut for an `if` statement. It is used to evaluate a condition and return a value based on the result of the condition. The syntax is as follows:

```c
condition ? expression1 : expression2;
```
- The `condition` is a boolean expression that is evaluated first.
- If the condition is true, the `expression1` is evaluated and returned.
- If the condition is false, the `expression2` is evaluated and returned.

#### Example
```c
int x = 5;
int y = 10;
int z = x < y ? x : y;
```
In this example, the condition `x < y` is true, so the value of `z` is `x`, which is `5`. 
The ternary operator can be used to simplify `if` statements. For example, the following `if` statement:
```c
if (x < y)
{
    z = x;
}
else
{
    z = y;
}
```
can be rewritten as:
```c
z = x < y ? x : y;
```
