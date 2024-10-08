# 0x14. C - Bit manipulation 
## The Domains/Concepts covered in this project: `C programming`

 The project introduced me to bit manipulation in C programming language.

## Tasks :page_with_curl:

**0. 0**

Write a function that converts a binary number to an `unsigned int`.

  * Prototype: `unsigned int binary_to_uint(const char *b);`
  * where `b` is pointing to a string of `0` and `1` chars
  * Return: the converted number, or 0 if
    * there is one or more chars in the string `b` that is not `0` or `1`
    * `b` is `NULL`

```
julien@ubuntu:~/0x14. Binary$ cat 0-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o a
julien@ubuntu:~/0x14. Binary$ ./a 
1
5
0
98
402
julien@ubuntu:~/0x14. Binary$ 
```

  * [0-binary_to_uint.c](./0-binary_to_uint.c): a function that converts a binary number to an `unsigned int`.

**1. 1**

Write a function that prints the binary representation of a number.

  * Prototype: void print_binary(unsigned long int n);
  * Format: see example
  * You are not allowed to use arrays
  * You are not allowed to use `malloc`
  * You are not allowed to use the `%` or `/` operators

```
julien@ubuntu:~/0x14. Binary$ cat 1-main.c 
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_binary.c _putchar.c -o b
julien@ubuntu:~/0x14. Binary$ ./b 
0
1
1100010
10000000000
10000000001
julien@ubuntu:~/0x14. Binary$ 
```

  * [1-print_binary.c](./1-print_binary.c): A C function that prints the binary representation of a number.

**2. 10**

Write a function that returns the value of a bit at a given index.

  * Prototype: `int get_bit(unsigned long int n, unsigned int index);`
  * where `index` is the index, starting from `0` of the bit you want to get
    Returns: the value of the bit at index `index` or `-1` if an error occured

```
julien@ubuntu:~/0x14. Binary$ cat 2-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = get_bit(1024, 10);
    printf("%d\n", n);
    n = get_bit(98, 1);
    printf("%d\n", n);
    n = get_bit(1024, 0);
    printf("%d\n", n);
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-get_bit.c -o c  
julien@ubuntu:~/0x14. Binary$ ./c
1
1
0
julien@ubuntu:~/0x14. Binary$ 
```

  * [2-get_bit.c](./2-get_bit.c): A C function that returns the value of a bit at a given index.

**3. 11**

Write a function that sets the value of a bit to `1` at a given index.

  * Prototype: `int set_bit(unsigned long int *n, unsigned int index);`
  * where `index` is the index, starting from `0` of the bit you want to set
  * Returns: `1` if it worked, or `-1` if an error occurred

```
julien@ubuntu:~/0x14. Binary$ cat 3-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;

    n = 1024;
    set_bit(&n, 5);
    printf("%lu\n", n);
    n = 0;
    set_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    set_bit(&n, 0);
    printf("%lu\n", n);
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-set_bit.c -o d
julien@ubuntu:~/0x14. Binary$ ./d
1056
1024
99
julien@ubuntu:~/0x14. Binary$ 
```

  * [3-set_bit.c](./3-set_bit.c): A C function that sets the value of a bit to 1 at a given index.

**4. 100**

Write a function that sets the value of a bit to 0 at a given index.

  * Prototype: `int clear_bit(unsigned long int *n, unsigned int index);`
  * where `index` is the index, starting from `0` of the bit you want to set
  * Returns: `1` if it worked, or `-1` if an error occurred

```
julien@ubuntu:~/0x14. Binary$ cat 4-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;

    n = 1024;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 0;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    clear_bit(&n, 1);
    printf("%lu\n", n);
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-clear_bit.c -o e
julien@ubuntu:~/0x14. Binary$ ./e
0
0
96
julien@ubuntu:~/0x14. Binary$ 
```

  * [4-clear_bit.c](./4-clear_bit.c): A C function that sets the value of a bit to 0 at a given index.


**5. 101**

Write a function that returns the number of bits you would need to flip to get from one number to another.

  * Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
  * You are not allowed to use the `%` or `/` operators

```
julien@ubuntu:~/0x14. Binary$ cat 5-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = flip_bits(1024, 1);
    printf("%u\n", n);
    n = flip_bits(402, 98);
    printf("%u\n", n);
    n = flip_bits(1024, 3);
    printf("%u\n", n);
    n = flip_bits(1024, 1025);
    printf("%u\n", n);
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-flip_bits.c -o f
julien@ubuntu:~/0x14. Binary$ ./f
2
5
3
1
julien@ubuntu:~/0x14. Binary$ 
```

  * [5-flip_bits.c](./5-flip_bits.c): A C function that returns the number of bits you would need to flip to get from one number to another.

**6. Endianness**

Write a function that checks the endianness.

  * Prototype: `int get_endianness(void);`
  * Returns: `0` if big endian, `1` if little endian

```
julien@ubuntu:~/0x14. Binary$ cat 100-main.c
#include <stdio.h>
#include "main.h"

int main(void)
{
    int n;

    n = get_endianness();
    if (n != 0)
    {
        printf("Little Endian\n");
    }
    else
    {
        printf("Big Endian\n");
    }
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-get_endianness.c -o h
julien@ubuntu:~/0x14. Binary$ ./h 
Little Endian
julien@ubuntu:~/0x14. Binary$ lscpu | head
Architecture:          x86_64
CPU op-mode(s):        32-bit, 64-bit
Byte Order:            Little Endian
CPU(s):                1
On-line CPU(s) list:   0
Thread(s) per core:    1
Core(s) per socket:    1
Socket(s):             1
NUMA node(s):          1
Vendor ID:             GenuineIntel
julien@ubuntu:~/0x14. Binary$
```

  * [100-get_endianness.c](./100-get_endianness.c): A C function that checks the endianness.

**7. Crackme3**

Find the password for this program.

    Save the password in the file 101-password
    Your file should contain the exact password, no new line, no extra space

```
julien@ubuntu:~/0x14. Binary$ ./crackme3 `cat 101-password`
Congratulations!
julien@ubuntu:~/0x14. Binary$ 
```

  * [101-password](./101-password): A C program to crack password.

## 0x14. C - Bit manipulation

  * [0x14-C-Bit-manipulation](https://drive.google.com/file/d/1j05z6YpRWq-IjBWxJ9JkYig1Iui5P3GR/view?usp=drive_link)

## Additional Project Resources

  * [Operators in C - Part 6](https://www.youtube.com/watch?feature=shared&v=egUyaWtsQc0)
  * [Operators in C - Part 7 (Bitwise Operators-II)](https://www.youtube.com/watch?v=LP0acaj3ZLE)
  * [Bitwise Operators 1: The AND Operation](Bitwise Operators 1: The AND Operation)
  * [Bitwise Operators 2: The OR Operation](https://www.youtube.com/watch?v=TMFnWGJEJuI)
  * [Bitwise Operators 3: The XOR Operation](https://www.youtube.com/watch?v=O9VELMn3jIY)
  * [Bitwise Operators 4: The Logical Shift Operation](https://www.youtube.com/watch?v=mjqswwqE1RQ)
  * [Bit Manipulation](https://pebble.gitbooks.io/learning-c-with-pebble/content/chapter12.html)
  * [Bitwise Operators](https://www.programiz.com/c-programming/bitwise-operators)
