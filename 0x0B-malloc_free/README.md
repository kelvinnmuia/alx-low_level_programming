# 0x0B. C - malloc, free
## The Domains/Concepts covered in this project: `C programming` `Memory allocation` 

The project introduced me to automatic and dynamic memory allocation in C programming language.

## Tasks :page_with_curl:

**0. Float like a butterfly, sting like a bee**

Write a function that creates an array of chars, and initializes it with a specific char.

  * Prototype: `char *create_array(unsigned int size, char c);`
  * Returns `NULL` if size = `0`
  * Returns a pointer to the array, or `NULL` if it fail

```
julien@ubuntu:~/0x0a. malloc, free$ cat 0-main.c 
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *buffer;

    buffer = create_array(98, 'H');
    if  (buffer == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    simple_print_buffer(buffer, 98);
    free(buffer);
    return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-create_array.c -o a
julien@ubuntu:~/0x0a. malloc, free$ ./a 
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
julien@ubuntu:~/0x0a. malloc, free$ 
```

  * [0-create_array.c](./0-create_array.c): A C function that creates an array of chars, and initializes it with a specific char.

**1. The woman who has no imagination has no wings**

Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

  * Prototype: `char *_strdup(char *str);`
  * The `_strdup()` function returns a pointer to a new string which is a duplicate of the string `str`. Memory for the new string is obtained with `malloc`, and can be freed with `free`.
  * Returns `NULL` if str = NULL
  * On success, the `_strdup` function returns a pointer to the duplicated string. It returns `NULL` if insufficient memory was available

FYI: The standard library provides a similar function: `strdup`. Run `man strdup` to learn more.

```
julien@ubuntu:~/0x0a. malloc, free$ cat 1-main.c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = _strdup("ALX SE");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-strdup.c -o s
julien@ubuntu:~/0x0a. malloc, free$ ./s 
ALX SE
julien@ubuntu:~/0x0a. malloc, free$ 
```

  * [1-strdup.c](./1-strdup.c): A C function that returns a pointer to a newly allocated space in memory, which contains a 
copy of the string given as a parameter.

**2. He who is not courageous enough to take risks will accomplish nothing in life**

Write a function that concatenates two strings.

  * Prototype: `char *str_concat(char *s1, char *s2);`
  * The returned pointer should point to a newly allocated space in memory which contains the contents of `s1`, followed 
by the contents of `s2`, and null terminated
  * if `NULL` is passed, treat it as an empty string
  * The function should return `NULL` on failure

```
julien@ubuntu:~/0x0a. malloc, free$ cat 2-main.c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = str_concat("Betty ", "Holberton");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-str_concat.c -o c
julien@ubuntu:~/c/curriculum_by_julien/holbertonschool-low_level_programming/0x0a. malloc, free$ ./c | cat -e
Betty Holberton$
julien@ubuntu:~/c/curriculum_by_julien/holbertonschool-low_level_programming/0x0a. malloc, free$ 
```

  * [2-str_concat.c](./2-str_concat.c): A C function that concatenates two strings.

**3. If you even dream of beating me you'd better wake up and apologize**

Write a function that returns a pointer to a 2 dimensional array of integers.

  * Prototype: `int **alloc_grid(int width, int height);`
  * Each element of the grid should be initialized to `0`
  * The function should return `NULL` on failure
  * If `width` or `height` is `0` or negative, return `NULL`

```
julien@ubuntu:~/0x0a. malloc, free$ cat 3-main.c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h < height)
    {
        w = 0;
        while (w < width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }   
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 6, 4);
    printf("\n");
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 6, 4);
    return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-alloc_grid.c -o g
julien@ubuntu:~/0x0a. malloc, free$ ./g
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 

0 0 0 98 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 402 0 
julien@ubuntu:~/0x0a. malloc, free$
```

  * [3-alloc_grid.c](./3-alloc_grid.c): A C function that returns a pointer to a 2 dimensional array of integers.

**4. It's not bragging if you can back it up**

Write a function that frees a 2 dimensional grid previously created by your `alloc_grid` function.

  * Prototype: `void free_grid(int **grid, int height);`
  * Note that we will compile with your `alloc_grid.c` file. Make sure it compiles.

```
julien@ubuntu:~/0x0a. malloc, free$ cat 4-main.c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h < height)
    {
        w = 0;
        while (w < width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }   
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 6, 4);
    printf("\n");
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 6, 4);
    free_grid(grid, 4);
    return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-alloc_grid.c 4-free_grid.c -o f
julien@ubuntu:~/0x0a. malloc, free$ valgrind ./f
==5013== Memcheck, a memory error detector
==5013== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5013== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5013== Command: ./f
==5013== 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 

0 0 0 98 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 402 0 
==5013== 
==5013== HEAP SUMMARY:
==5013==     in use at exit: 0 bytes in 0 blocks
==5013==   total heap usage: 6 allocs, 6 frees, 1,248 bytes allocated
==5013== 
==5013== All heap blocks were freed -- no leaks are possible
==5013== 
==5013== For counts of detected and suppressed errors, rerun with: -v
==5013== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x0a. malloc, free$ 
```

  * [4-free_grid.c](./4-free_grid.c): A C function that frees a 2 dimensional grid previously created by your `alloc_grid` function.

**5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe**

Write a function that concatenates all the arguments of your program.

  * Prototype: `char *argstostr(int ac, char **av);`
  * Returns `NULL` if `ac == 0` or `av == NULL`
  * Returns a pointer to a new string, or `NULL` if it fails
  * Each argument should be followed by a `\n` in the new string

```
julien@ubuntu:~/0x0a. malloc, free$ cat 100-main.c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);
    if (s == NULL)
    {
        return (1);
    }
    printf("%s", s);
    free(s);
    return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-argstostr.c -o args
julien@ubuntu:~/0x0a. malloc, free$ ./args I will "show you" how great I am
./args
I
will
show you
how
great
I
am
julien@ubuntu:~/0x0a. malloc, free$
```

  * [100-argstostr.c](./100-argstostr.c): A C function that concatenates all the arguments of your program.

**6. I will show you how great I am**

Write a function that splits a string into words.

  * Prototype: `char **strtow(char *str);`
  * The function returns a pointer to an array of strings (words)
  * Each element of this array should contain a single word, null-terminated
  * The last element of the returned array should be `NULL`
  * Words are separated by spaces
  * Returns `NULL` if `str == NULL` or `str == ""`
  * If your function fails, it should return `NULL`

  * [101-strtow.c](./101-strtow.c): A C function that splits a string into words.

##  0x0B. C - malloc, free 

  * [0x0B.C-malloc-free](https://drive.google.com/file/d/1Rv4KCqy0RvhYr4onAOvygFkE1qQwkxqU/view?usp=sharing)

## Additional Project Resources

  * [0x0a - malloc & free - quick overview.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/a094c90e7f466bbeaa49cb24c8f04e7f27aaad41.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20240918%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20240918T120123Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=aa1c6dcd01f03444c3c71891c7e7f145f2b4cf2105fc9005ce09ddd31d35c746)
  * [Dynamic memory allocation in C - malloc calloc realloc free](https://www.youtube.com/watch?v=xDVC3wKjS64)
  * [Dynamic Memory Allocation in C Programming Explained](https://www.youtube.com/watch?v=-za3kDtaMvY)
