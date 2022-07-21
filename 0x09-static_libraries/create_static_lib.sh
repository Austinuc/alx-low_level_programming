#!/bin/bash
gcc -c $(find ./ -name "*.c")
ar rcs liball.a $(find ./ -name "*.o")
