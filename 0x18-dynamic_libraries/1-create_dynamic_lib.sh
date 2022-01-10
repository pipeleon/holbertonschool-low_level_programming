#!/bin/bash
gcc -Wall -c *.c
gcc -shared -o liball.so *.o
