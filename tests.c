#include "ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int a  = 42;
	int ret_t;
	int ret;
	ft_printf("|%x|\n", 42);
	printf("|%x|\n", 42);
	ft_printf("\n");

	ft_printf("|%X|\n", 42);
	printf("|%X|\n", 42);
	printf("\n");

	ret = ft_printf("|%p|\n", 1);
	ft_printf("ft_ntf --> %d\n", ret);
	ret_t = printf("|%p|\n", 1);
	ft_printf("printf --> %d\n", ret_t);
	printf("\n");

	ret_t = printf("|%p|\n", LONG_MIN);
	ft_printf("printf --> %d\n", ret_t);
	ret = ft_printf("|%p|\n", LONG_MIN);
	ft_printf("ft_ntf --> %d\n", ret);
	printf("\n");

	ret_t = printf("|%x|\n", LONG_MIN);
	ft_printf("printf --> %d\n", ret_t);
	ret = ft_printf("|%x|\n", LONG_MIN);
	ft_printf("ft_ntf --> %d\n", ret);
	printf("\n");


	ret_t = printf("|%x|\n", LONG_MAX);
	ft_printf("printf --> %d\n", ret_t);
	ret = ft_printf("|%x|\n", LONG_MAX);
	ft_printf("ft_ntf --> %d\n", ret);
	printf("\n");



	/*ft_printf("|%d|\n", a);*/
	/*printf("|%d|\n", a);*/
	/*printf("\n");*/
	/**/
	/*ft_printf("|%i|\n", a);*/
	/*printf("|%i|\n", a);*/
	/*printf("\n");*/
	/**/
	/*ft_printf("|%s|\n", "string");*/
	/*printf("|%s|\n", "string");*/
	/*printf("\n");*/
	/**/
	/*ft_printf("|%c|\n", 'a');*/
	/*printf("|%c|\n", 'a');*/
	/*printf("\n");*/
	/**/
	/**/
	/* ret_t = printf("|%c|\n", '0');*/
	/*ret = ft_printf("|%c|\n", '0');*/
	/*ft_printf("printf -> %d\n", ret_t);*/
	/*ft_printf("ft_ntf -> %d\n", ret);*/
	/*printf("\n");*/

	return (0);
}
