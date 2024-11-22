#!/bin/bash

# Check if a C++ file is provided
if [ $# -lt 1 ]; then
    echo "Usage: $0 <cpp_file> [output_file]"
    exit 1
fi

# Input file (C++ source code)
CPP_FILE=$1

# Output file (optional)
OUTPUT_FILE=${2:-"dependencies.txt"}

# Use g++ to get dependencies
echo "Finding dependencies for $CPP_FILE..."
g++ -MM $CPP_FILE > $OUTPUT_FILE

if [ $? -eq 0 ]; then
    echo "Dependencies written to $OUTPUT_FILE"
else
    echo "Error: Failed to generate dependencies. Check your C++ file."
    exit 1
fi
