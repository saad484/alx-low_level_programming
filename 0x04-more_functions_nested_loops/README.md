# 0x04. C - More functions, more nested loops

## Learning Objectives
- [What are nested loops and how to use them?](#nested-loops)
- [What is a function and how do you use functions?](#functions)
- [What is the difference between a declaration and a definition of a function?](#function-declaration-and-definition)
- [What is a prototype?](#function-prototype)
- [Scope of variables](#scope-of-variables)
- [What are the `gcc` flags `-Wall -Werror -pedantic -Wextra`](#gcc-flags)
- [What are header files and how to to use them with `#include`](#header-files)


### Nested loops
Nested loops are loops that are placed inside another loop. This means that the inner loop is executed multiple times for each iteration of the outer loop. Nested loops are used when we need to perform a repetitive action that requires more than one level of iteration.
```c
for (int i = 0; i < 3; i++) {
  for (int j = 0; j < 4; j++) {
    printf("%d,%d", i, j);
  }
  printf("\n");
}
```
In this example, we have an outer loop that iterates 3 times, and an inner loop that iterates 4 times for each outer loop iteration. The printf statement is executed 12 times, resulting in output:
```c
0,0 0,1 0,2 0,3
1,0 1,1 1,2 1,3
2,0 2,1 2,2 2,3
```

### Functions
A function is a block of code that performs a specific task. Functions are used to organize code, make it more modular, and easier to debug. They are also used to avoid repeating code and improve code readability.
```c
int sum(int a, int b) {
  return a + b;
}
```
In this example, we have defined a function called `sum` that takes two integer arguments `a` and `b`, and returns their sum.

To use a function, we need to call it from another part of our program:
```c
int result = sum(3, 4);
printf("%d", result);
```
In this example, we call the `sum` function with arguments `3` and `4`. The result is then stored in the `result` variable, which is then printed.

### Function declaration and definition
- **Function declaration**:
A function declaration tells the compiler about the function name, return type, and parameters. It does not contain the function body.
The actual body of the function can be defined separately.
```c
int sum(int a, int b);
```
- **Function definition**: A function definition includes the function body, and provides a complete implementation of the function.
```c
int sum(int a, int b) {
  return a + b;
}
```
### Function prototype
A function prototype is a declaration of a function that tells the compiler about the function name, return type, and parameters. It is used to inform the compiler about the function before the actual function definition is encountered.
```c
int sum(int a, int b);
```
### Scope of variables
The scope of a variable determines where the variable can be accessed in a program. A variable's scope is defined by where it is declared.

- **Global variables**: A variable declared outside of any function has a global scope, which means it can be accessed anywhere in the program.

```c
int x; // x has a global scope

void myFunction() {
  x = 10; // x can be accessed here
}

int main() {
  printf("%d", x); // x can be accessed here
}
```

- **Local variables**: A variable declared inside a function has a local scope, which means it can only be accessed within the function it is declared in.
```c
void myFunction() {
  int x = 10; // x has a local scope
}
```

### `gcc` flags
GCC (GNU Compiler Collection) is a collection of compilers and libraries for programming languages. When compiling C code with GCC, we can use various flags to enable specific features or set certain options.

**Here are the explanations of some commonly used GCC flags:**

- `Wall`: Enable all warnings about questionable code.
- `Werror`: Treat all warnings as errors, which means the compiler will stop when encountering a warning.
- `pedantic`: Issue all the warnings demanded by strict ISO C.
- `Wextra`: Enable some extra warning flags that are not enabled by `-Wall`.
- `std=gnu89`: Set the C language standard to use, in this case, the GNU C89 standard.

### Header files
Header files are files that contain declarations of functions, variables, macros, and other constructs that can be used in a program. They are typically included in source code files using the `#include` preprocessor directive.

Header files are used to avoid repeating code in multiple source files. For example, if you have a function that is used in multiple source files, you can declare the function in a header file and include the header file in each source file that uses the function.

**Here is an example of using a header file:**
```c
// Declare the function in a header file
// myheader.h
#ifndef MYHEADER_H
#define MYHEADER_H

void my_function();

#endif

// Include the header file in a source file
// main.c
#include "myheader.h"

int main() {
    my_function();
    return 0;
}

// Define the function in another source file
// myfunctions.c
#include "myheader.h"

void my_function() {
    // function body
}
```
In this example: 
- The header file `myheader.h` contains the declaration of the function `my_function()`.
- The source file `main.c` includes the header file and uses the function.
- The function is defined in another source file `myfunctions.c`, which also includes the header file.

This way, the function can be used in multiple source files without having to redefine it in each file.

To compile the program with multiple source files:
```bash
gcc -Wall -Werror -pedantic -Wextra -std=gnu89 -I. main.c myfunctions.c -o my_program
```
**Note:** This command assumes that the header file and source files are in the same directory.
if the header file is in a different directory, you can use the `-I` flag to specify the directory where the header file is located.






## Resources

- [Nested while loops](https://www.youtube.com/watch?v=Z3iGeQ1gIss)                            
- [C - Functions](https://www.tutorialspoint.com/cprogramming/c_functions.htm)                 
- [What is the purpose of a function prototype?](https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/)
- [C - Header Files](https://www.tutorialspoint.com/cprogramming/c_header_files.htm)           
- [C Books and PDF's](../references) to check out and use as reference.

## Tasks

- All `*-main.c` files will be located in the [tests](./tests) directory
- We will be using function prototypes that will be included in our header file called, [main.h](./main.h).

---

<details>
<summary><a href="./0-isupper.c">0. isupper</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/MTRnHM0y/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/0-main.c 0-isupper.c -o 0-isuper`

</details>

<details>
<summary><a href="./1-isdigit.c">1. isdigit</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/j55s6LRD/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/1-main.c 1-isdigit.c -o 1-isdigit`

</details>

<details>
<summary><a href="./2-mul.c">2. Collaboration is multiplication</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/3xjgwqBL/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/2-main.c 2-mul.c -o 2-mul`

</details>

<details>
<summary><a href="./3-print_numbers.c">3. The numbers speak for themselves</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/YS1KbZgB/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/3-main.c 3-print_numbers.c -o 3-print_numbers`

</details>

<details>
<summary><a href="./4-print_most_numbers.c">4. I believe in numbers and signs</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/wvbd08zq/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/4-main.c 4-print_most_numbers.c -o 4-print_most_numbers`

</details>

<details>
<summary><a href="./5-more_numbers.c">5. Numbers constitute the only universal language</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/7hk25mJN/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/5-main.c 5-more_numbers.c -o 5-more_numbers`

</details>

<details>
<summary><a href="./6-print_line.c">6. The shortest distance between two points is a straight line</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/jjk5JvhG/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/6-main.c 6-print_line.c -o 6-lines`

</details>

<details>
<summary><a href="./7-print_diagonal.c">7. I feel like I am diagonally parked in a parallel universe</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/BbyZjvcH/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/7-main.c 7-print_diagonal.c -o 7-diagonals`

</details>

<details>
<summary><a href="./8-print_square.c">8. You are so much sunshine in every square inch</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/N0PZV7CC/image.png' border='0' alt='image'/></a>

- Below is the assembly code of the program with comments.

```asm
   <main>:       endbr64
   <main+4>:     push   rbp						; store base pointer addr on top of the stack
   <main+5>:     mov    rbp,rsp						; make the stack pntr addr to be the new base pntr addr
   <main+8>:     mov    edi,0x2						; moves 2 so as to be passed in the function
   <main+13>:    call   0x55555555519f <print_square>			; calls print_square function
   <main+18>:    mov    edi,0xa						; moves 10 so as to be passed in the function
   <main+23>:    call   0x55555555519f <print_square>			; calls print_square function
   <main+28>:    mov    edi,0x0						; moves 0 so as to be passed in the function
   <main+33>:    call   0x55555555519f <print_square>			; calls print_square function
   <main+38>:    mov    eax,0x0						; clears eax [rax]
   <main+43>:    pop    rbp						; get's back the address of the base pointer [rbp]
   <main+44>:    ret
   <print_square>:       endbr64
   <print_square+4>:     push   rbp					; store base pntr addr on top of the stack
   <print_square+5>:     mov    rbp,rsp					; make the stack pntr addr to be the new base pntr addr
   <print_square+8>:     sub    rsp,0x20				; allocate 20 bytes on the stack
   <print_square+12>:    mov    DWORD PTR [rbp-0x14],edi		; argument value being stored in the stack [rbp-ox14]
   <print_square+15>:    mov    DWORD PTR [rbp-0x8],0x1                 ; first loop, moves 0x1 to the stack [rbp-0x8]
   <print_square+22>:    jmp    0x5555555551e4 <print_square+69>	; jump to [1]
   <print_square+24>:    mov    DWORD PTR [rbp-0x4],0x1			; [2] second loop, moves 0x1 to the stack [rbp-0x4]
   <print_square+31>:    jmp    0x5555555551ce <print_square+47>	; jump to [3]
   <print_square+33>:    mov    edi,0x23				; [4] moves character '#' in hex 0x23 to edi arg1
   <print_square+38>:    call   0x555555555149 <_putchar>		; prints the character with _putchar function
   <print_square+43>:    add    DWORD PTR [rbp-0x4],0x1			; increament [rbp-0x4] by 1
   <print_square+47>:    mov    eax,DWORD PTR [rbp-0x4]			; [3] mov value stored at [rbp-0x4] to eax
   <print_square+50>:    cmp    eax,DWORD PTR [rbp-0x14]		; compare value at eax with value stored in [rbp-0x14]
   <print_square+53>:    jle    0x5555555551c0 <print_square+33>	; if less or equal jump to [4]
   <print_square+55>:    mov    edi,0xa					; moves character '\n' in hex 0xa to edi arg1
   <print_square+60>:    call   0x555555555149 <_putchar>		; prints the character with _putchar function
   <print_square+65>:    add    DWORD PTR [rbp-0x8],0x1			; increament [rbp-0x8] by 1
   <print_square+69>:    mov    eax,DWORD PTR [rbp-0x8]			; [1] mov value stored at [rbp-0x8] to eax
   <print_square+72>:    cmp    eax,DWORD PTR [rbp-0x14]		; compare value at eax with value in [rbp-0x14]
   <print_square+75>:    jle    0x5555555551b7 <print_square+24>	; if less or equal jump to [2]
   <print_square+77>:    nop						; nop sled
   <print_square+78>:    nop						; nop sled
   <print_square+79>:    leave						; leave function
   <print_square+80>:    ret						; return to main function
```

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/8-main.c 8-print_square.c -o 8-squares`

</details>

<details>
<summary><a href="./9-fizz_buzz.c">9. Fizz Buzz</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/wv5WcXNG/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-fizz_buzz.c -o 9-fizz_buzz`

</details>

<details>
<summary><a href="./10-print_triangle.c">10. Triangles</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/SQc0q30s/image.png' border='0' alt='image'/></a>
<a href='https://postimg.cc/QBsJxtBG' target='_blank'><img src='https://i.postimg.cc/8CfK4fN5/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/10-main.c 10-print_triangle.c -o 10-triangles`

</details>

<details>
<summary><a href="./100-prime_factor.c">11. The problem of distinguishing prime numbers from composite numbers and of resolving the latter into their prime factors is known to be one of the most important and useful in arithmetic</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/0yLYxXWC/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm`

</details>

<details>
<summary><a href="./101-print_number.c">12. Numbers have life; they're not just symbols on paper</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/kgKjrr4R/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/101-main.c 101-print_number.c -o 101-print_numbers`

</details>
