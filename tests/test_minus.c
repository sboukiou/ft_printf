#include "../ft_printf.h"
#include "../ft_printf_bonus.h"
#include <stdio.h>
#include <stdlib.h>


#include <stdio.h>

#include <stdio.h>

int main() {

	int ret_t;
	int ret;

    printf("|%- 10i|\n", -0);
    ft_printf("|%- 10i|\n", -0);
	printf("\n");

    printf("|%- 10i|\n", 0);
    ft_printf("|%- 10i|\n", 0);
	printf("\n");

    printf("|%- 10i|\n", -0);
    ft_printf("|%- 10i|\n", -0);
	printf("\n");

    printf("|%- 10i|\n", -1337);
    ft_printf("|%- 10i|\n", -1337);
	printf("\n");

    printf("|%-i|\n", -1337);
    ft_printf("|%-i|\n", -1337);
	printf("\n");

    printf("|%- 10i|\n", 1337);
    ft_printf("|%- 10i|\n", 1337);
	printf("\n");

    printf("|%- 10i|\n", -13999999);
    ft_printf("|%- 10i|\n", -13999999);
	printf("\n");

    printf("|%- 10i|\n", -13999999);
    ft_printf("|%- 10i|\n", -13999999);
	printf("\n");
    printf("|%- 10i|\n", 1);
    ft_printf("|%- 10i|\n", 1);
	printf("\n");


    printf("|%- 10d|\n", -1);
    ft_printf("|%- 10d|\n", -1);
	printf("\n");

    ret_t = printf("|%d|\n", -1);
    ret = ft_printf("|%d|\n", -1);
	ft_printf("%d --> %d\n", ret_t, ret);
	printf("\n");

	return (0);
}
