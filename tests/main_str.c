#include <stdio.h>

#include "../ft_printf.h"


int main(void)
{
	int	ret_t;
	int	ret;

	ret_t = printf("|%s|\n", "Regular string");
	ret = ft_printf("|%s|\n", "Regular string");

	ft_printf("printf --> %d\n", ret_t);
	ft_printf("ft_ntf --> %d\n", ret);
	printf("\n");
	printf("convvv  %%%c\n", 'c');
	ret_t = printf(" NULL %s NULL\n", NULL);
	ret = ft_printf(" NULL %s NULL\n", NULL);
	ft_printf("%d ====> %d\n", ret, ret_t);
	return (0);
}
