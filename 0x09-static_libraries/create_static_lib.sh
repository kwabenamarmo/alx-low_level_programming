#!/bin/bash

# Get all the .c files in the current directory
c_files=$(ls *.c 2>/dev/null)

if [ -z "$c_files" ]; then
  echo "No .c files found in the current directory."
  exit 1
fi

# Compile the .c files into object files
for file in $c_files; do
  gcc -c $file
done

# Create the static library
ar rcs liball.a *.o

# Clean up the object files
rm -f *.o

echo "Static library liball.a created successfully."
