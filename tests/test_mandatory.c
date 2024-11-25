#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>

#include "../libft/libft.h"
#include "../ft_printf_bonus.h"
#include "../ft_printf.h"


int main(void)
{
	int ret;
	int ret_t;
	ret_t = printf("|%p|\n", LONG_MAX);
	ret = ft_printf("|%p|\n", LONG_MAX);
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	printf("\n\n");
	ret = ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");
}
