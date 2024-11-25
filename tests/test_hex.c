
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


	ret_t = printf("|%x|\n", LONG_MAX);
	ret = ft_printf("|%x|\n", LONG_MAX);
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-4x|\n", 9);
	ret = ft_printf("|%-4x|\n", 9);
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-1x|\n", 10);
	ret = ft_printf("|%-1x|\n", 10);
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-3x|\n", 1);
	ret = ft_printf("|%-3x|\n", 1);
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-5x|\n", 17);;
	ret = ft_printf("|%-5x|\n", 17);;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-1x|\n", 99);;
	ret = ft_printf("|%-1x|\n", 99);;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-2x|\n", 100);;
	ret = ft_printf("|%-2x|\n", 100);;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-3x|\n", 101);;
	ret = ft_printf("|%-3x|\n", 101);;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-1x|\n", -9);;
	ret = ft_printf("|%-1x|\n", -9);;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%04x|\n", 9);;
	ret = ft_printf("|%04x|\n", 9);;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%01x|\n", 10);;
	ret = ft_printf("|%01x|\n", 10);;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%02x|\n", 11);;
	ret = ft_printf("|%02x|\n", 11);;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	return (0);
}
