# C - More Singly Linked Lists

This is a README file for the "More Singly Linked Lists" project in the C programming language. In this project, we will be working with singly linked lists, a basic data structure that consists of a sequence of elements, each of which contains a value and a pointer to the next element in the sequence.

## Data Structure
The main data structure used in this project is called listint_t, which represents a singly linked list node. The listint_t struct has the following components:

/**
 * struct listint_s - singly linked list
 * @n: integer (the value of the node)
 * @next: points to the next node in the list
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

Each node of the linked list contains an integer value (n) and a pointer to the next node (next). The next pointer of the last node in the list is set to NULL.

## Functions
print_listint: This function prints all the elements of a listint_t list and returns the number of nodes in the list.

Other functions: Depending on the project requirements, additional functions might be implemented, such as inserting nodes, deleting nodes, searching for a value, or reversing the linked list.

## Compilation
To compile the C files in this project, you can use a C compiler such as gcc:

## gcc -Wall -Werror -Wextra -pedantic <file.c> -o <output_file>

Replace <file.c> with the name of the C file you want to compile and <output_file> with the desired output file name.

## Usage
Once the C files are compiled, you can run the resulting executable to execute the functions implemented in the code.

## Example
Here's an example of how to use the print_listint function:



#include <stdio.h>
#include "your_listint_s.h" // Assuming you have included the struct definition here

int main(void)
{
    listint_t node1, node2, node3;
    node1.n = 10;
    node2.n = 20;
    node3.n = 30;

    node1.next = &node2;
    node2.next = &node3;
    node3.next = NULL;

    size_t num_nodes = print_listint(&node1);
    printf("Number of nodes: %zu\n", num_nodes);

    return 0;
}


In this example, we create three listint_t nodes (node1, node2, and node3) and link them together to form a singly linked list. We then call the print_listint function to print the values of all the nodes and obtain the number of nodes in the list.
