#!/bin/bash
gcc -Wall -c *.c | ar -rc liball.a -v *.c
