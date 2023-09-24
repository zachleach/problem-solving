#!/bin/bash

# Check if a filename is provided as a command-line argument
if [ $# -eq 0 ]; then
    echo "Usage: ./add.sh <filename>"
    exit 1
fi

# Capture the provided filename
filename="$1"

# Perform Git operations
git add .
git commit -m "add $filename"
git push
