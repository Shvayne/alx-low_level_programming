#!/bin/bash

SOURCE_FILES=$(ls *.c 2>/dev/null)

if [z "$SOURCE_FILES"]; then
	exit 1
fi
LIBRARY_NAME="liball.so"

CC="gcc"
CFLAGS="-shared -fPIC"

$CC $CFLAGS -o $LIBRARY_NAME $SOURCE_FILES
