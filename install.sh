#!/bin/sh
gcc -c guess.c
gcc guess.o -o guess
cp guess $HOME/.local/bin
rm guess.o guess

