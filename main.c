#include <stdio.h>
#include "printf.h"


int main(void)
{
	printf("\n----\n");
	printf("sum_them_all\n");
	printf("%d", sum_them_all(3, 1, 2, 3));
	printf("\n----\n");
	printf("print_numbers\n");
	print_numbers("\n", 3, 23, 22, 12);
	printf("\n----\n");
	printf("print_strings\n");
	print_strings("\n", 3, "String 1", "String 2 (next is NULL!)", NULL);
	printf("\n----\n");
	return (0);
}
