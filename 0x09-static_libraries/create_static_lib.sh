#!/bin/bash
ar rcs liball.a
for file in *.c; do
gcc -c "$file"
ar rcs liball.a "${file%.c}.o"
done

