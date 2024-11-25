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
	ret_t = printf("|%2p|\n", -1);;
	ret = ft_printf("|%2p|\n", -1);;
	printf("%d -- %d\n", ret_t, ret);
	printf("|\n------------\n");

	ret = printf("|%-2p|\n", -1);
	ret_t = ft_printf("|%-2p|\n", -1);
	printf("%d -- %d\n", ret, ret_t);
	printf("\n----------------\n");

	ret_t = printf("|%-2p|\n|\n", 1);;
	ret = ft_printf("|%-2p|\n|\n", 1);;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-2p|\n", 15);;
	ret = ft_printf("|%-2p|\n", 15);;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-3p|\n", 16);;
	ret = ft_printf("|%-3p|\n", 16);;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-4p|\n", 17);;
	ret = ft_printf("|%-4p|\n", 17);;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-9p %-10p|\n", LONG_MIN, LONG_MAX);;
	ret = ft_printf("|%-9p %-10p|\n", LONG_MIN, LONG_MAX);;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-11p %-12p|\n", INT_MIN, INT_MAX);;
	ret = ft_printf("|%-11p %-12p|\n", INT_MIN, INT_MAX);;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-13p %-14p|\n", ULONG_MAX, -ULONG_MAX);;
	ret = ft_printf("|%-13p %-14p|\n", ULONG_MAX, -ULONG_MAX);;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-1p %-2p|\n", 0, 0);;
	ret = ft_printf("|%-1p %-2p|\n", 0, 0);;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-11p %-12p|\n", INT_MIN, INT_MAX);
	ret = ft_printf("|%-11p %-12p|\n", INT_MIN, INT_MAX);
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-1p %-2p|\n", 0, 0);
	ret = ft_printf("|%-1p %-2p|\n", 0, 0);
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-13p %-14p|\n", ULONG_MAX, -ULONG_MAX);
	ret = ft_printf("|%-13p %-14p|\n", ULONG_MAX, -ULONG_MAX);
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	return (0);
}
