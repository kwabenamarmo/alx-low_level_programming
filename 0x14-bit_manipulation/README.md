# C - Bit Manipulation

Bit manipulation in C involves manipulating individual bits or groups of bits within a data structure using bitwise operators. These operations are useful for optimizing code, working with hardware-level operations, and implementing certain algorithms efficiently. Here's a summary of the key concepts:

## Bitwise Operators:

Bitwise AND (&): Performs a bitwise AND operation between two operands. Each bit of the result is set to 1 only if both corresponding bits in the operands are 1; otherwise, it is set to 0.

Bitwise OR (|): Performs a bitwise OR operation between two operands. Each bit of the result is set to 1 if either of the corresponding bits in the operands is 1.

Bitwise XOR (^): Performs a bitwise XOR (exclusive OR) operation between two operands. Each bit of the result is set to 1 if the corresponding bits in the operands are different; otherwise, it is set to 0.

Bitwise NOT (~): Performs a bitwise NOT operation on a single operand. It flips all the bits, converting 0 to 1 and 1 to 0.

Left Shift (<<): Shifts the bits of the left-hand operand to the left by the number of positions specified by the right-hand operand. This operation is equivalent to multiplying the left-hand operand by 2 raised to the power of the right-hand operand.

Right Shift (>>): Shifts the bits of the left-hand operand to the right by the number of positions specified by the right-hand operand. For unsigned data types, this operation is equivalent to division by 2 raised to the power of the right-hand operand. For signed data types, it performs arithmetic right shift, preserving the sign bit.

## Common Use Cases:

Set a bit: Use bitwise OR (|) with a mask to set a specific bit to 1.
Clear a bit: Use bitwise AND (&) with a mask to set a specific bit to 0.
Toggle a bit: Use bitwise XOR (^) with a mask to flip the value of a specific bit.
Check if a bit is set: Use bitwise AND (&) with a mask and check if the result is non-zero.
Extract specific bits: Use bitwise AND (&) with a mask to extract specific bits from a number.
Combine bits from different variables: Use bitwise OR (|) and bitwise AND (&) to combine bits from different variables.
Example:


#include <stdio.h>

int main() {
    int num = 10; // Binary: 0000 1010

    // Set bit 2 to 1
    num |= (1 << 2); // Result: 0000 1110 (decimal: 14)

    // Clear bit 3
    num &= ~(1 << 3); // Result: 0000 0110 (decimal: 6)

    // Toggle bit 1
    num ^= (1 << 1); // Result: 0000 0100 (decimal: 4)

    // Check if bit 2 is set
    if (num & (1 << 2)) {
        printf("Bit 2 is set.\n");
    } else {
        printf("Bit 2 is not set.\n");
    }

    return 0;
}

This example demonstrates some common bit manipulation operations in C. Bit manipulation can be particularly useful for low-level programming, optimization, and working with hardware devices. However, it's essential to use bitwise operations with caution and ensure that the code is well-documented for readability.
