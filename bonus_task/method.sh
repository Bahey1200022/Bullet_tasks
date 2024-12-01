#!/bin/bash

if [ $# -ne 1 ]; then
    echo "Usage: $0 <file.cpp>"
    exit 1
fi

if [[ $1 != *.cpp ]]; then
    echo "Error: Argument must be a .cpp file"
    exit 1
fi

cpp_file=$1

OUTPUT_FILE="out.txt"
# Use g++ to get dependencies
echo "Finding dependencies for $cpp_file..."
g++ -MM $cpp_file > $OUTPUT_FILE

if [ $? -eq 0 ]; then
    echo "Dependencies written to $OUTPUT_FILE"
else
    echo "Error: Failed to generate dependencies. Check your C++ file."
    exit 1
fi