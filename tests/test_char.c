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
	ret_t = printf("|%-13c|\n", '0');
	ret = ft_printf("|%-13c|\n", '0');
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-1c|\n", '0');
	ret = ft_printf("|%-1c|\n", '0');
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%4c|\n", '0');
	ret = ft_printf("|%4c|\n", '0');
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-2c|\n", -256);
	ret = ft_printf("|%-2c|\n", + 256);
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-1c %-2c %-3c|\n", '0', 0, '1');
	ret = ft_printf("|%-1c %-2c %-3c|\n", '0', 0, '1');
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-1c %-2c %-3c|\n", ' ', ' ', ' ');
	ret = ft_printf("|%-1c %-2c %-3c|\n", ' ', ' ', ' ');
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-1c %-2c %-3c|\n", '1', '2', '3');
	ret = ft_printf("|%-1c %-2c %-3c|\n", '1', '2', '3');
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-1c %-2c %-3c|\n", '2', '1', 0);
	ret = ft_printf("|%-1c %-2c %-3c|\n", '2', '1', 0);
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-1c %-2c %-3c|\n", 0, '1', '2');
	ret = ft_printf("|%-1c %-2c %-3c|\n", 0, '1', '2');
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	return (0);
}
