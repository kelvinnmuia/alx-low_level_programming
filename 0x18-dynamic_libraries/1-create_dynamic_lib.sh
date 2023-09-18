#!/bin/bash
gcc -g -fPIC -Wall -Werror -Wextra -pedantic *.c
gcc -shared -o liball.so *.o
