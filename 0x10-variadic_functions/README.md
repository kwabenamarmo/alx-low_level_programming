## 0x10. C - Variadic Functions

This repository contains C programs that demonstrate the use of variadic functions in C programming. Variadic functions allow a function to take a variable number of arguments, which can be useful when the number of arguments is not known at compile time.

# Description
In this repository, you will find the following C programs:

0-sum_them_all.c: A function that takes a variable number of integers as arguments and returns the sum of all the integers.
1-print_numbers.c: A function that takes a variable number of integers as arguments and prints them, separated by a specified character.
2-print_strings.c: A function that takes a variable number of strings as arguments and prints them, separated by a specified character.
3-print_all.c: A function that takes a variable number of arguments of different types (integers, characters, and strings) and prints them accordingly.
How to Use
To use these functions in your own C programs, simply include the respective header files (variadic_functions.h and variadic_utils.h) in your source code. Make sure to compile the files with the functions you need, along with your own code.

# Examples
Here are some examples of how to use the functions in your C programs:

# #include "variadic_functions.h"

int main(void) {
    int sum = sum_them_all(4, 10, 20, 30, 40);
    printf("Sum: %d\n", sum);

    print_numbers('#', 5, 1, 2, 3, 4, 5);

    print_strings(", ", 3, "Hello", "world", "!");

    print_all("ceis", 'H', 3.14, "hello");
    
    return 0;
}

# About
This project is part of the low-level programming curriculum at Holberton School.

# Authors
Daniel Kwabena Marmo

If you have any questions, suggestions, or improvements, feel free to open an issue or a pull request. Your feedback is valuable to us!

Happy coding! 😊
