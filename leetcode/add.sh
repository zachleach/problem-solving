#!/bin/bash

# check if a filename is provided as a command-line argument
if [ $# -ne 2 ]; then
    echo "Usage: ./add.sh <filename> <file extension>"
    exit 1
fi

# capture the provided filename
filename="$1"
extension="$2"
file="${filename}.${extension}"

echo "Paste file contents"

# read file contents
cat > "$file"

# perform git operations
git add .
git commit -m "add ${file}"
git push

# clear the terminal output
clear
