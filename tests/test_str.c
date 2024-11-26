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
	ret_t = printf("|%1s|\n", "");
	ret = ft_printf("|%1s|\n", "");
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-1s|\n", "");
	ret = ft_printf("|%-1s|\n", "");
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-2s|\n", "");
	ret = ft_printf("|%-2s|\n", "");
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-3s |\n", "");
	ret = ft_printf("|%-3s |\n", "");
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("| %-0s |\n", "");
	ret = ft_printf("| %-0s |\n", "");
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("| %-s |\n", "-");
	ret = ft_printf("| %-s |\n", "-");
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	 ret_t = printf("|%-1s %-2s|\n", "", "-");
	ret = ft_printf("|%-1s %-2s|\n", "", "-");
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-3s %-4s|\n", " - ", "");
	ret = ft_printf("|%-3s %-4s|\n", " - ", "");
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-2s %-3s %-4s %-5s|\n", " - ", "", "4", "");
	ret = ft_printf("|%-2s %-3s %-4s %-5s|\n", " - ", "", "4", "");
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%-3s %-3s %-4s %-5s %-3s|\n", " - ", "", "4", "", "2 ");
	ret = ft_printf("|%-3s %-3s %-4s %-5s %-3s|\n", " - ", "", "4", "", "2 ");
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");
	ret_t = printf("|%s|\n", "Regular string here");;
	ret = ft_printf("|%s|\n", "Regular string here");;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	// TESTING dots     NOTE:
	print_string("\n ---- TESTING DOTS -----\n");

	ret_t = printf("|%.1s|\n", "");;
	ret_t = ft_printf("|%.1s|\n", "");;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%.1s|\n", "");;
	ret = ft_printf("|%.1s|\n", "");;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%.s|\n", "----");;
	ret = ft_printf("|%.s|\n", "----");;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%.2s %.1s|\n", "", "-");;
	ret = ft_printf("|%.2s %.1s|\n", "", "-");;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%.3s %.2s|\n", " - ", "");;
	ret = ft_printf("|%.3s %.2s|\n", " - ", "");;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%.1s %.2s %.3s %.4s|\n", " - ", "", "4", "");;
	ret = ft_printf("|%.1s %.2s %.3s %.4s|\n", " - ", "", "4", "");;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	ret_t = printf("|%.2s %.3s %.4s %.5s %.1s|\n", " - ", "", "4", "", "2 ");;
	ret = ft_printf("|%.2s %.3s %.4s %.5s %.1s|\n", " - ", "", "4", "", "2 ");;
	printf("%d -- %d\n", ret_t, ret);
	printf("\n------------\n");

	return (0);
}
