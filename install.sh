#!/bin/sh
gcc -c guess.c
# link with ld
gcc guess.o -o guess -lc
#change if needed
cp guess $HOME/.local/bin/
rm guess.o guess

