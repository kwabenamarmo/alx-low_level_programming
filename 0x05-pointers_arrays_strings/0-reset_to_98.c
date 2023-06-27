#include "main.h"
#include <stdio.h>
int main(void)
{
	int num = 5;
	
	printf("Before reset: %d\n", num);  // Output: Before reset: 5
	reset_to_98(&num);  // Pass the address of num
	printf("After reset: %d\n", num);   // Output: After reset: 9
	return 0;
}
