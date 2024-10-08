# 0x0E. C - Structures, typedef
## The Domains/Concepts covered in this project: `C programming`

The project introduced me to struct in C Programming language.

## Tasks :page_with_curl:

**0. Poppy**

Define a new type struct dog with the following elements:

  * `name`, type = `char *`
  * `age`, type = `float`
  * `owner`, type = `char *`

```
julien@ubuntu:~/0x0d. structures, typedef$ cat 0-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
julien@ubuntu:~/0x0d. structures, typedef$ ./a 
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 
```

  * [dog.h](./dog.h): a new type struct dog.

**1. A dog is the only thing on earth that loves you more than you love yourself**

Write a function that initialize a variable of type `struct dog`

  * Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`

```
julien@ubuntu:~/0x0d. structures, typedef$ cat 1-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-init_dog.c -o b
julien@ubuntu:~/0x0d. structures, typedef$ ./b 
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 
```

  * [1-init_dog.c](./1-init_dog.c): A C function that initialize a variable of type struct dog.

**2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad**

Write a function that prints a struct dog

  * Prototype: `void print_dog(struct dog *d);`
  * Format: see example bellow
  * You are allowed to use the standard library
  * If an element of `d` is `NULL`, print `(nil)` instead of this element. (if `name` is `NULL`, print `Name: (nil)`)
  * If `d` is `NULL` print nothing.

```
julien@ubuntu:~/0x0d. structures, typedef$ cat 2-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_dog.c -o c
julien@ubuntu:~/0x0d. structures, typedef$ ./c 
Name: Poppy
Age: 3.500000
Owner: Bob
julien@ubuntu:~/0x0d. structures, typedef$ 
```

  * [2-print_dog.c](./2-print_dog.c): A C function that prints a struct dog.

**3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read**

Define a new type `dog_t` as a new name for the type `struct dog`.

```
julien@ubuntu:~/0x0d. structures, typedef$ cat 3-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d
julien@ubuntu:~/0x0d. structures, typedef$ ./d 
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 
```

  * [dog.h](./dog.h): a new type dog_t as a new name for the type struct dog.

**4. A door is what a dog is perpetually on the wrong side of**

Write a function that creates a new dog.

  * Prototype: `dog_t *new_dog(char *name, float age, char *owner);`
  * You have to store a copy of `name` and `owner`
  * Return `NULL` if the function fails

```
julien@ubuntu:~/0x0d. structures, typedef$ cat 4-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-new_dog.c -o e
julien@ubuntu:~/0x0d. structures, typedef$ ./e
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 
```

  * [4-new_dog.c](./4-new_dog.c): A C function that creates a new dog.

**5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg**

Write a function that frees dogs.

  * Prototype: `void free_dog(dog_t *d);`

```
julien@ubuntu:~/0x0d. structures, typedef$ cat 5-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    free_dog(my_dog);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-free_dog.c 4-new_dog.c -o f
julien@ubuntu:~/0x0d. structures, typedef$ valgrind ./f
==22840== Memcheck, a memory error detector
==22840== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22840== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22840== Command: ./f
==22840== 
My name is Poppy, and I am 3.5 :) - Woof!
==22840== 
==22840== HEAP SUMMARY:
==22840==     in use at exit: 0 bytes in 0 blocks
==22840==   total heap usage: 4 allocs, 4 frees, 1,059 bytes allocated
==22840== 
==22840== All heap blocks were freed -- no leaks are possible
==22840== 
==22840== For counts of detected and suppressed errors, rerun with: -v
==22840== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x0d. structures, typedef$ 
```

  * [5-free_dog.c](./5-free_dog.c): A C function that frees dogs.

## 0x0E. C - Structures, typedef

  * [0x0E-C-Structures-typedef](https://drive.google.com/file/d/1HK6UO3jJkk9O2LQkTbLau1wS8NCW6k2B/view?usp=drive_link)

## Additional Project Resources

  * [0x0d. Structures.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/6eb80c79c99f6125450a0dc11b300d46238d1a5a.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20240923%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20240923T121704Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=67d84ae0fc616776989675f3157608236e23b1629b0766cd70e66db48c25e5a9)
  * [struct (C programming language)](https://en.wikipedia.org/wiki/Struct_(C_programming_language))
  * [Documentation: structures](https://github.com/alx-tools/Betty/wiki/Documentation:-Data-structures)
  * [0x0d. Typedef and structures.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/c8ff3e6f7202be7fa489a584e41d005504a07c23.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20240923%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20240923T122315Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=c482f478c25b46e28e3a8be52c92e035c4450cd131e019660e68250b73c4554c)
  * [typedef](https://publications.gbdirect.co.uk//c_book/chapter8/typedef.html)
  * [Structs & Typedef in C Explained](https://www.youtube.com/watch?feature=shared&v=V13CbI74WQc)
  * [Practical use of structs & typedef with coding examples](https://www.youtube.com/watch?feature=shared&v=0IVfazuTHU8)
  * [The Lost Art of C Structure Packing](http://www.catb.org/esr/structure-packing/)
