#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>

#include "../libft/libft.h"
#include "../ft_printf_bonus.h"
#include "../ft_printf.h"


int main(void)
{
	int ret_t;
	int ret;
	ret_t = printf("|%-1u|\n", 0);;
	ret = ft_printf("|%-1u|\n", 0);;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-2u|\n", -1);;
	ret = ft_printf("|%-2u|\n", -1);;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-3u|\n", 1);;
	ret = ft_printf("|%-3u|\n", 1);;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-4u|\n", 9);;
	ret = ft_printf("|%-4u|\n", 9);;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-1u|\n", 10);;
	ret = ft_printf("|%-1u|\n", 10);;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-2u|\n", 11);;
	ret = ft_printf("|%-2u|\n", 11);;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-3u|\n", 15);;
	ret = ft_printf("|%-3u|\n", 15);;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");
	

	ret_t = printf("|%03u|\n", 1);;
	ret = ft_printf("|%03u|\n", 1);;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-4u|\n", 16);;
	ret = ft_printf("|%-4u|\n", 16);;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-5u|\n", 17);;
	ret = ft_printf("|%-5u|\n", 17);;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-1u|\n", 99);;
	ret = ft_printf("|%-1u|\n", 99);;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-2u|\n", 100);;
	ret = ft_printf("|%-2u|\n", 100);;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	 ret_t = printf("|%-9u %-10u %-11u %-12u %-13u %-14u %-15u|\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);;
	 ret = ft_printf("|%-9u %-10u %-11u %-12u %-13u %-14u %-15u|\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%014u|\n", ULONG_MAX);;
	ret = ft_printf("|%014u|\n", ULONG_MAX);;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%015u|\n", 9223372036854775807LL);;
	ret = ft_printf("|%015u|\n", 9223372036854775807LL);;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%09u %010u %011u %012u %013u %014u %015u|\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);;
	ret = ft_printf("|%09u %010u %011u %012u %013u %014u %015u|\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	return (0);
}
