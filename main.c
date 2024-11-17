#include "libft/libft.h"
#include "printf.h"
#include <stdio.h>


// %[flags][width][.precision][length]specifier


int main(void)
{
	printf("|% d|\n", 1337);
	printf("|% d|\n", -1337);
	printf("|-----\n");
	printf("|%-&x 8d|\n", -1337);
	printf("%\n");
	printf("|% -8d|\n", 1337);
	printf("|%08d|\n", 1337);
	printf("|%+8d|\n", 1337);
	printf("|%-8d|\n", 1337);
	printf("|%8d|\n", 1337);
}
