#!/bin/bash

# Compile a.c



for file in /nobackup/rausoman/git/InternProject/dir2/*.c; do
    if [ -f "$file" ]; then
        gcc "$file" -o "${file%.*}"
    fi
done
for file in /nobackup/rausoman/git/InternProject/dir3/*.c; do
    if [ -f "$file" ]; then
        gcc "$file" -o "${file%.*}"
    fi
done
for file in /nobackup/rausoman/git/InternProject/dir4/*.c; do
    if [ -f "$file" ]; then
        gcc "$file" -o "${file%.*}"
    fi
done
for file in /nobackup/rausoman/git/InternProject/dir5/*.c; do
    if [ -f "$file" ]; then
        gcc "$file" -o "${file%.*}"
    fi
done
for file in /nobackup/rausoman/git/InternProject/dir6/*.c; do
    if [ -f "$file" ]; then
        gcc "$file" -o "${file%.*}"
    fi
done

for file in /nobackup/rausoman/git/InternProject/dir2/*.cpp; do
    if [ -f "$file" ]; then
        g++ "$file" -o "${file%.*}"
    fi
done
for file in /nobackup/rausoman/git/InternProject/dir3/*.cpp; do
    if [ -f "$file" ]; then
        g++ "$file" -o "${file%.*}"
    fi
done
for file in /nobackup/rausoman/git/InternProject/dir4/*.cpp; do
    if [ -f "$file" ]; then
        g++ "$file" -o "${file%.*}"
    fi
done
for file in /nobackup/rausoman/git/InternProject/dir5/*.cpp; do
    if [ -f "$file" ]; then
        g++ "$file" -o "${file%.*}"
    fi
done
for file in /nobackup/rausoman/git/InternProject/dir6/*.cpp; do
    if [ -f "$file" ]; then
        g++ "$file" -o "${file%.*}"
    fi
done

# g++ basic.cpp -o basic.out

# Compile new.cpp
# gcc new.c -o new.out

