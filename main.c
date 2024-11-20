#include "libft/libft.h"
#include "printf.h"
#include <stdio.h>


// %[flags][width][.precision][length]specifier


int main(void)
{
	ft_printf("|%+d|\n", 1337);
	ft_printf("|%+d|\n", -1337);
	ft_printf("|% s|\n", "String");
}
