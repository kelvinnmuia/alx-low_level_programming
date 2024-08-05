# 0x01. C - Variables, if, else, while 
## The Domains/Concepts covered in this project: `C programming`

The project introduced me to python programming language. At the end of the project I created executable python 
files and basic functions to print text on the screen, which helped me understand basic python syntax.

## Tasks :page_with_curl:

**0. Positive anything is better than negative nothing**

This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print whether the number stored in the variable `n` is positive or negative.

  * You can find the source code here
  * The variable `n` will store a different value every time you will run this program
  * You don’t have to understand what `rand`, `srand`, `RAND_MAX` do. Please do not touch this code
  * The output of the program should be:
    * The number, followed by
      * if the number is greater than 0: `is positive`
      * if the number is 0: `is zero`
      * if the number is less than 0: `is negative`
    * followed by a new line

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-520693284 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-973398895 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-199220452 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
266853958 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-48147767 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
0 is zero
julien@ubuntu:~/0x01$ 
```

  * [0-positive_or_negative.c](./0-positive_or_negative.c): C program will assign a random number to the variable `n` each time it is executed.

**1. The last digit**

This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable `n`.

  * You can find the source code here
  * The variable `n` will store a different value every time you run this program
  * You don’t have to understand what `rand`, `srand`, and `RAND_MAX` do. Please do not touch this code
  * The output of the program should be:
    * The string `Last digit of`, followed by
    * `n`, followed by
    * the string `is`, followed by
      * if the last digit of `n` is greater than 5: the string `and is greater than 5`
      * if the last digit of `n` is 0: the string `and is 0`
      * if the last digit of `n` is less than 6 and not 0: the string `and is less than 6 and not 0`
      * followed by a new line

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 629438752 is 2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -748255693 is -3 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -1052791662 is -2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 491506926 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 954249937 is 7 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 652334952 is 2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 809065140 is 0 and is 0
julien@ubuntu:~/0x01$
```

  * [1-last_digit.c](./1-last_digit.c): C program will assign a random number to the variable `n` each time it 
is executed. Complete the source code in order to print the last digit of the number stored in the variable n.

**2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game**

Write a program that prints the alphabet in lowercase, followed by a new line.

  * You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
  * All your code should be in the `main` function
  * You can only use `putchar` twice in your code

  * [2-print_alphabet.c](./2-print_alphabet.c): C program that prints the alphabet in lowercase, followed by a new line.

**3. alphABET**

Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

  * You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
  * All your code should be in the `main` function
  * You can only use `putchar` three times in your code

  * [3-print_alphabets.c](./3-print_alphabets.c): C program that prints the alphabet in lowercase, and then in uppercase, 
followed by a new line.

**4. When I was having that alphabet soup, I never thought that it would pay off**

Write a program that prints the alphabet in lowercase, followed by a new line.

  * Print all the letters except `q` and `e`
  * You can only use the putchar function (every other function (`printf`, `puts`, etc…) is forbidden)
  * All your code should be in the `main` function
  * You can only use `putchar` twice in your code

  * [4-print_alphabt.c](./4-print_alphabt.c): A C program that prints the alphabet in lowercase, followed by a new line.

**5. Numbers**

Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

    All your code should be in the main function

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-print_numbers.c -o 5-print_numbers
julien@ubuntu:~/0x01$ ./5-print_numbers 
0123456789
julien@ubuntu:~/0x01$ 
```

  * [5-print_numbers.c](./5-print_numbers.c): a C program that prints all single digit numbers of base 10 starting from 0, 
followed by a new line.

**6. Numberz**

Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

  * You are not allowed to use any variable of type `char`
  * You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
  * You can only use `putchar` twice in your code
  * All your code should be in the `main` function

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-print_numberz.c -o 6-print_numberz
julien@ubuntu:~/0x01$ ./6-print_numberz 
0123456789
julien@ubuntu:~/0x01$ 
```

  * [6-print_numberz.c](./6-print_numberz.c): A C program that prints all single digit numbers of base 10 starting from 0, 
followed by a new line.

**7. Smile in the mirror**

Write a program that prints the lowercase alphabet in reverse, followed by a new line.

  * You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
  * All your code should be in the `main` function
  * You can only use `putchar` twice in your code.

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-print_tebahpla.c -o 7-print_tebahpla
julien@ubuntu:~/0x01$ ./7-print_tebahpla
zyxwvutsrqponmlkjihgfedcba
julien@ubuntu:~/0x01$
```

  * [7-print_tebahpla.c](./7-print_tebahpla.c): A C program that prints the lowercase alphabet in reverse, followed by a new line.

**8. Hexadecimal**

Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.

  * You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
  * All your code should be in the `main` function
  * You can only use `putchar` three times in your code

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-print_base16.c -o 8-print_base16
julien@ubuntu:~/0x01$ ./8-print_base16
0123456789abcdef
julien@ubuntu:~/0x01$
```

  * [8-print_base16.c](./8-print_base16.c): A C program that prints all the numbers of base 16 in lowercase, followed by a new line.

**9. Patience, persistence and perspiration make an unbeatable combination for success**

Write a program that prints all possible combinations of single-digit numbers.

  * Numbers must be separated by `,`, followed by a space
  * Numbers should be printed in ascending order
  * You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
  * All your code should be in the `main` function
  * You can only use `putchar` four times maximum in your code
  * You are not allowed to use any variable of type `char`.

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-print_comb.c -o 9-print_comb
julien@ubuntu:~/0x01$ ./9-print_comb | cat -e
0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
julien@ubuntu:~/0x01$ 
```

  * [9-print_comb.c](./9-print_comb.c): A C program that prints all possible combinations of single-digit numbers.

**10. Inventing is a combination of brains and materials. The more brains you use, the less material you need**

Write a program that prints all possible different combinations of two digits.

    Numbers must be separated by ,, followed by a space
    The two digits must be different
    01 and 10 are considered the same combination of the two digits 0 and 1
    Print only the smallest combination of two digits
    Numbers should be printed in ascending order, with two digits
    You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
    You can only use putchar five times maximum in your code
    You are not allowed to use any variable of type char
    All your code should be in the main function

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-print_comb3.c -o 100-print_comb3
julien@ubuntu:~/0x01$ ./100-print_comb3
01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
julien@ubuntu:~/0x01$ 
```

  * [100-print_comb3.c](./100-print_comb3.c): Write a C program that prints all possible different combinations of two digits.

**11. The success combination in business is: Do what you do better... and: do more of what you do...**

Write a program that prints all possible different combinations of three digits.

  * Numbers must be separated by ,, followed by a space
  * The three digits must be different
  * `012`, `120`, `102`, `021`, `201`, `210` are considered the same combination of the three digits `0`, `1` and `2`
  * Print only the smallest combination of three digits
  * Numbers should be printed in ascending order, with three digits
  * You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
  * You can only use `putchar` six times maximum in your code
  * You are not allowed to use any variable of type `char`
  * All your code should be in the `main` function.

  * [101-print_comb4.c](./101-print_comb4.c): A C program that prints all possible different combinations of three digits.

**12. Software is eating the World**

Write a program that prints all possible combinations of two two-digit numbers.

  * The numbers should range from `0` to `99`
  * The two numbers should be separated by a space
  * All numbers should be printed with two digits. `1` should be printed as `01`
  * The combination of numbers must be separated by comma, followed by a space
  * The combinations of numbers should be printed in ascending order
  * `00` `01` and `01` `00` are considered as the same combination of the numbers `0` and `1`
  * You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
  * You can only use `putchar` eight times maximum in your code
  * You are not allowed to use any variable of type `char`
  * All your code should be in the `main` function

  * [102-print_comb5.c](./102-print_comb5.c): A C program that prints all possible combinations of two two-digit numbers.

##  0x01. C - Variables, if, else, while Quizes
  
  * [ 0x01. C - Variables, if, else, while](https://drive.google.com/file/d/11LoO1w6EPW_spaWCrTYw3CK3iXL-4y4k/view?usp=sharing)

## Additional Project Resources

  * [Everything you need to know to start with C.pdf ](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2022/4/e0ccf91eec6b977a9e00ed384dc285df9c2772e3.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20240805%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20240805T122945Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=7c4f2d589533da379b3c198da07c69840612c971e5b1bd4fcdd198869e7d12a6)
  * [Keywords and identifiers](https://publications.gbdirect.co.uk//c_book/chapter2/keywords_and_identifiers.html)
  * [integers](https://publications.gbdirect.co.uk//c_book/chapter2/integral_types.html)
  * [Arithmetic Operators in C](https://www.tutorialspoint.com/cprogramming/c_arithmetic_operators.htm)
  * [If statements in C](https://www.cprogramming.com/tutorial/c/lesson2.html)
  * [if…else statement](https://www.tutorialspoint.com/cprogramming/if_else_statement_in_c.htm)
  * [Relational operators](https://www.tutorialspoint.com/cprogramming/c_relational_operators.htm)
  * [Logical operators](https://www.fresh2refresh.com/c-programming/c-operators-expressions/c-logical-operators/)
  * [while loop in C](https://www.tutorialspoint.com/cprogramming/c_while_loop.htm)
  * [While loop](https://www.youtube.com/watch?v=Ju1LYO9pkaI)
  * [Struggling with the sandbox? Try this: Using Docker & WSL on your local host](https://docs.google.com/document/d/1kvyoeNDXmcu1vHP7bNGvioirVu86ZxKD5IF3W8S3nbw/edit?usp=sharing)
  * [Introduction to C Basic structure and variables](https://www.youtube.com/watch?v=LM6IjCbtpZA)
