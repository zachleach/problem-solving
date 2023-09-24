#!/bin/bash

# check if a filename is provided as a command-line argument
if [ $# -eq 0 ]; then
    echo "Usage: ./add.sh <filename>"
    exit 1
fi

# capture the provided filename
filename="$1"

# read file contents
cat > "$filename"

# perform git operations
git add .
git commit -m "add $filename"
git push

# clear the terminal output
clear
