# Debugging in Software Development


<p align="center">  
<img src ="./imgs/debugging.png" width="500">
</p>

> You can't keep doing the same thing and expect different results

Debugging is a crucial part of the software development process. It is the process of identifying and fixing errors, or bugs, in software applications. The term "debugging" comes from the story of Grace Hopper, a computer scientist who removed a moth from a computer in 1947, coining the term "debugging". She is credited with popularizing the term when she actually found a moth in the computer.

Debugging can be a complex and challenging process that requires a methodical approach. It is a skill that is essential to software development, and it is important to learn how to debug effectively.

## Rubber Duck Debugging

One popular technique for debugging is known as "rubber duck debugging." This involves explaining the problem to a rubber duck (or any inanimate object) in order to better understand it. The process of explaining the problem can help identify any gaps in understanding and clarify the issue at hand.

## Best Practices for Debugging

- Understand the problem: Take the time to fully understand the problem you are trying to solve. Gather as much information as possible about the issue and the conditions under which it occurs.
- Reproduce the issue: Try to reproduce the problem in a controlled environment. This can help isolate the issue and make it easier to debug.
- Use debuggers: Debuggers are powerful tools that can help you identify and fix errors in your code. Learn how to use a debugger effectively.
- Test as you go: Test your code as you write it. This can help catch errors early in the development process and make debugging easier.
- Keep a record: Keep a record of the errors you encounter and how you fixed them. This can be helpful in case you encounter a similar problem in the future.

## Debugging with GDB

GDB is a powerful debugging tool that allows you to step through your code and examine its state. Here are the steps to install and use GDB:

- Install GDB: You can install GDB on Linux using the command `sudo apt-get install gdb`.
- Compile your code with debugging symbols: You can do this using the `-g` flag when compiling your code.
- Start GDB: Run the command `gdb <executable>` to start GDB.
- Set breakpoints: You can set breakpoints in your code using the `break` command.
- Step through your code: You can step through your code using the `next` command.
- Examine variables: You can examine the value of variables using the `print` command.

## Quote

> "Debugging is like being a detective in a mystery movie where you are also the murderer." - Filipe Fortes

Debugging can be a challenging and frustrating process, but with the right approach and tools, it can be a rewarding experience. Happy debugging!


## Resources

- [Debugging](https://en.wikipedia.org/wiki/Debugging)
- [Rubber Duck Debugging](https://www.thoughtfulcode.com/rubber-duck-debugging-psychology/)
	- [Piaget's theory of cognitive development](https://en.wikipedia.org/wiki/Piaget's_theory_of_cognitive_development)

## Tasks

<details>
<summary><a href="./0-main.c">0. Multiple mains</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/FKc2PPmg/image.png' border='0' alt='image'/></a>
<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/vmWN7cL0/image.png' border='0' alt='image'/></a>

- First compilation: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c main/main.c -o first`
- Second compilation: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c 0-main.c -o 0-main`

</details>

<details>
<summary><a href="./1-main.c">1. Like, comment, subscribe</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/Xq4qNHnn/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -std=gnu89 1-main.c -o 1-main`

</details>

<details>
<summary><a href="./2-largest_number.c">2. 0 > 972?</a></summary><br>

- This program prints the largest of three integers.

```bash
carrie@ubuntu:/debugging$ cat 2-main.c
#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
        int a, b, c;
        int largest;

        a = 972;
        b = -98;
        c = 0;

        largest = largest_number(a, b, c);

        printf("%d is the largest number\n", largest);

        return (0);
}
carrie@ubuntu:/debugging$ 
```

```bash
carrie@ubuntu:/debugging$ cat 2-largest_number.c
#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
    int largest;

    if (a > b && b > c)
    {
        largest = a;
    }
    else if (b > a && a > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    return (largest);
}

carrie@ubuntu:/debugging$
```
```bash
carrie@ubuntu:/debugging$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-largest_number.c 2-main.c -o 2-main
carrie@ubuntu:/debugging$ ./2-main
0 is the largest number
carrie@ubuntu:/debugging$
```
<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/c46hdXCR/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-largest_number.c main/2-main.c -o 2-main`

</details>

<details>
<summary><a href="./3-print_remaining_days.c">3. Leap year</a></summary><br>

- This program converts a date to the day of year and determines how many days are left in the year, taking leap year into consideration.

```bash
carrie@ubuntu:/debugging$ cat 3-main_a.c
#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
    int month;
    int day;
    int year;

    month = 4;
    day = 01;
    year = 1997;

    printf("Date: %02d/%02d/%04d\n", month, day, year);

    day = convert_day(month, day);

    print_remaining_days(month, day, year);

    return (0);
}

carrie@ubuntu:/debugging$
```

```bash
carrie@ubuntu:/debugging$ cat 3-convert_day.c
#include "main.h"

/**
* convert_day - converts day of month to day of year, without accounting
* for leap year
* @month: month in number format
* @day: day of month
* Return: day of year
*/

int convert_day(int month, int day)
{
    switch (month)
    {
        case 2:
            day = 31 + day;
            break;
        case 3:
            day = 59 + day;
            break;
        case 4:
            day = 90 + day;
            break;
        case 5:
            day = 120 + day;
            break;
        case 6:
            day = 151 + day;
            break;
        case 7:
            day = 181 + day;
            break;
        case 8:
            day = 212 + day;
            break;
        case 9:
            day = 243 + day;
            break;
        case 10:
            day = 273 + day;
            break;
        case 11:
            day = 304 + day;
            break;
        case 12:
            day = 334 + day;
            break;
        default:
            break;
    }
    return (day);
}

carrie@ubuntu:/debugging$
```

```bash
carrie@ubuntu:/debugging$ cat 3-print_remaining_days.c
#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
    if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
    {
        if (month >= 2 && day >= 60)
        {
            day++;
        }

        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 366 - day);
    }
    else
    {
        if (month == 2 && day == 60)
        {
            printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
        }
        else
        {
            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", 365 - day);
        }
    }
}

carrie@ubuntu:/debugging$ 
```

```bash
carrie@ubuntu:/debugging$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c main/3-main_a.c -o 3-main_a 
carrie@ubuntu:/debugging$ ./3-main_a
Date: 04/01/1997
Day of the year: 91
Remaining days: 274
carrie@ubuntu:/debugging$
```
<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/xjsGphYv/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c main/3-main_b.c -o 3-main_b`

</details>
