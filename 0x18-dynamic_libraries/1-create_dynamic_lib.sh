#!/bin/bash
gcc -c -Wall -pedantic -Werror -fpic *.c
gcc -shared -o liball.so *.o
