#include "../ft_printf.h"
#include "../libft/libft.h"
#include <stdio.h>
#include <limits.h>


int main(void)
{
	int	ret_t;
	int	ret;

	   ret_t = printf("|% 010i|\n", -0);
	ft_printf("printf --> %d\n", ret_t);
	   ret = ft_printf("|% 10i|\n", -0);
	ft_printf("ft_printf --> %d\n", ret);
	printf("\n");

	   ret_t = printf("|% 10i|\n", 0);
	ft_printf("printf --> %d\n", ret_t);
	   ret = ft_printf("|% 10i|\n", 0);
	ft_printf("ft_printf --> %d\n", ret);
	printf("\n");

	   ret_t = printf("|% 10i|\n", -0);
	ft_printf("printf --> %d\n", ret_t);
	   ret = ft_printf("|% 10i|\n", -0);
	ft_printf("ft_printf --> %d\n", ret);
	printf("\n");

	   ret_t = printf("|% 10i|\n", -1337);
	ft_printf("printf --> %d\n", ret_t);
	   ret = ft_printf("|% 10i|\n", -1337);
	ft_printf("ft_printf --> %d\n", ret);
	printf("\n");



	   ret_t = printf("|%i|\n", -1337);
	ft_printf("printf --> %d\n", ret_t);
	   ret = ft_printf("|%i|\n", -1337);
	ft_printf("ft_printf --> %d\n", ret);
	printf("\n");

	   ret_t = printf("|% 10i|\n", 1337);
	ft_printf("printf --> %d\n", ret_t);
	   ret = ft_printf("|% 10i|\n", 1337);
	ft_printf("ft_printf --> %d\n", ret);
	printf("\n");

	   ret_t = printf("|% 10i|\n", -13999999);
	ft_printf("printf --> %d\n", ret_t);
	   ret = ft_printf("|% 10i|\n", -13999999);
	ft_printf("ft_printf --> %d\n", ret);
	printf("\n");

	   ret_t = printf("|% 10i|\n", -13999999);
	ft_printf("printf --> %d\n", ret_t);
	   ret = ft_printf("|% 10i|\n", -13999999);
	ft_printf("ft_printf --> %d\n", ret);
	printf("\n");
	   ret_t = printf("|% 10i|\n", 1);
	ft_printf("printf --> %d\n", ret_t);
	   ret = ft_printf("|% 10i|\n", 1);
	ft_printf("ft_printf --> %d\n", ret);
	printf("\n");

	//    NOTE: Testing with flag 0

	printf("----- Testing with the 0 flag -----\n");
	   ret_t = printf("|%010i|\n", -0);
	ft_printf("printf --> %d\n", ret_t);
	   ret = ft_printf("|%010i|\n", -0);
	ft_printf("ft_printf --> %d\n", ret);
	printf("\n");

	   ret_t = printf("|%010i|\n", 0);
	ft_printf("printf --> %d\n", ret_t);
	   ret = ft_printf("|%010i|\n", 0);
	ft_printf("ft_printf --> %d\n", ret);
	printf("\n");

	   ret_t = printf("|%010i|\n", -0);
	ft_printf("printf --> %d\n", ret_t);
	   ret = ft_printf("|%010i|\n", -0);
	ft_printf("ft_printf --> %d\n", ret);
	printf("\n");

	   ret_t = printf("|%010i|\n", -1337);
	ft_printf("printf --> %d\n", ret_t);
	   ret = ft_printf("|%010i|\n", -1337);
	ft_printf("ft_printf --> %d\n", ret);
	printf("\n");

	   ret_t = printf("|%i|\n", -1337);
	ft_printf("printf --> %d\n", ret_t);
	   ret = ft_printf("|%i|\n", -1337);
	ft_printf("ft_printf --> %d\n", ret);
	printf("\n");

	   ret_t = printf("|%010i|\n", 1337);
	ft_printf("printf --> %d\n", ret_t);
	   ret = ft_printf("|%010i|\n", 1337);
	ft_printf("ft_printf --> %d\n", ret);
	printf("\n");

	   ret_t = printf("|%010i|\n", -13999999);
	ft_printf("printf --> %d\n", ret_t);
	   ret = ft_printf("|%010i|\n", -13999999);
	ft_printf("ft_printf --> %d\n", ret);
	printf("\n");

	   ret_t = printf("|%010i|\n", -13999999);
	ft_printf("printf --> %d\n", ret_t);
	   ret = ft_printf("|%010i|\n", -13999999);
	ft_printf("ft_printf --> %d\n", ret);
	printf("\n");
	   ret_t = printf("|%010i|\n", 1);
	ft_printf("printf --> %d\n", ret_t);
	   ret = ft_printf("|%010i|\n", 1);
	ft_printf("ft_printf --> %d\n", ret);
	printf("\n");


	/*// NOTE:    TESTING WITH + FLAG*/
	printf("\n--- Testing with the + flag ---\n");
	   ret_t = printf("|%+10i|\n", -0);
	ft_printf("printf --> %d\n", ret_t);
	   ret = ft_printf("|%+10i|\n", -0);
	ft_printf("ft_printf --> %d\n", ret);
	printf("\n");

	   ret_t = printf("|%+10i|\n", 0);
	ft_printf("printf --> %d\n", ret_t);
	   ret = ft_printf("|%+10i|\n", 0);
	ft_printf("ft_printf --> %d\n", ret);
	printf("\n");

	   ret_t = printf("|%+10i|\n", -0);
	ft_printf("printf --> %d\n", ret_t);
	   ret = ft_printf("|%+10i|\n", -0);
	ft_printf("ft_printf --> %d\n", ret);
	printf("\n");

	   ret_t = printf("|%+10i|\n", -1337);
	ft_printf("printf --> %d\n", ret_t);
	   ret = ft_printf("|%+10i|\n", -1337);
	ft_printf("ft_printf --> %d\n", ret);
	printf("\n");

	/*   ret_t = printf("|%+10i|\n", 1337);*/
	/*ft_printf("printf --> %d\n", ret_t);*/
	/*   ret = ft_printf("|%+10i|\n", 1337);*/
	/*ft_printf("ft_printf --> %d\n", ret);*/
	/*printf("\n");*/
	/**/
	   ret_t = printf("|%+10i|\n", -13999999);
	ft_printf("printf --> %d\n", ret_t);
	   ret = ft_printf("|%+10i|\n", -13999999);
	ft_printf("ft_printf --> %d\n", ret);
	printf("\n");

	/*ret_t = printf("|%+10i|\n", 1);*/
	/*ft_printf("printf --> %d\n", ret_t);*/
	/*ret = ft_printf("|%+10i|\n", 1);*/
	/*ft_printf("ft_printf --> %d\n", ret);*/
	/*printf("\n");*/
	/**/
	/*ret_t = printf("|%+-12d|\n", 1);*/
	/*ft_printf("printf --> %d\n", ret_t);*/
	/*ret = ft_printf("|%+-12d|\n", 1);*/
	/*ft_printf("ft_printf --> %d\n", ret);*/
	/*printf("\n");*/
	/**/
	/*ret_t = printf("|%013d|\n", ULONG_MAX);*/
	/*ft_printf("printf --> %d\n", ret_t);*/
	/*ret = ft_printf("|%013d|\n", ULONG_MAX);*/
	/*ft_printf("ft_printf --> %d\n", ret);*/
	/*printf("\n");*/

	ret_t = printf("|%015d|\n", INT_MIN);
	ft_printf("printf --> %d\n", ret_t);
	ret = ft_printf("|%015d|\n", INT_MIN);
	ft_printf("ft_printf --> %d\n", ret);
	printf("\n");


	/*ret_t = printf("|%+-12d|\n", INT_MAX);*/
	/*ft_printf("printf --> %d\n", ret_t);*/
	/*ret = ft_printf("|%+-12d|\n", INT_MAX);*/
	/*ft_printf("ft_printf --> %d\n", ret);*/
	/*printf("\n");*/
	/**/

	ret_t = printf("|%013d|\n", LONG_MIN);
	ft_printf("printf --> %d\n", ret_t);
	ret = ft_printf("|%013d|\n", LONG_MIN);
	ft_printf("ft_printf --> %d\n", ret);
	printf("\n");

	/*ret_t = printf("|%+-12d|\n", LONG_MAX);*/
	/*ft_printf("printf --> %d\n", ret_t);*/
	/*ret = ft_printf("|%+-12d|\n", LONG_MAX);*/
	/*ft_printf("ft_printf --> %d\n", ret);*/
	/*printf("\n");*/
	/**/
	ret_t = printf("|%014d|\n", 0);
	ft_printf("printf --> %d\n", ret_t);
	ret = ft_printf("|%014d|\n", 0);
	ft_printf("ft_printf --> %d\n", ret);
	printf("\n");
	/**/
	ret_t = printf("|%.1d|\n", 0);
	ret = ft_printf("|%.1d|\n", 0);
	ft_printf("%d --- %d\n", ret_t, ret);
	printf("\n----------\n");
	/**/
	ret_t = printf("|%.2d|\n", -1);
	ret = ft_printf("|%.2d|\n", -1);
	ft_printf("%d --- %d\n", ret_t, ret);
	printf("\n----------\n");
	/**/
	/*ret_t = printf("|%.2d|\n", 1);*/
	/*ret = ft_printf("|%.2d|\n", 1);*/
	/*ft_printf("%d --- %d\n", ret_t, ret);*/
	/*printf("\n----------\n");*/
	/**/
	/*ret_t = printf("|%.1d|\n", 9);*/
	/*ret = ft_printf("|%.1d|\n", 9);*/
	/*ft_printf("%d --- %d\n", ret_t, ret);*/
	/*printf("\n----------\n");*/
	/**/
	/*ret_t = printf("|%.2d|\n", 10);*/
	/*ret = ft_printf("|%.2d|\n", 10);*/
	/*ft_printf("%d --- %d\n", ret_t, ret);*/
	/*printf("\n----------\n");*/
	/**/
	/*ret_t = printf("|%.3d|\n", 11);*/
	/*ret = ft_printf("|%.3d|\n", 11);*/
	/*ft_printf("%d --- %d\n", ret_t, ret);*/
	/*printf("\n----------\n");*/
	/**/
	/*ret_t = printf("|%.4d|\n", 15);*/
	/*ret = ft_printf("|%.4d|\n", 15);*/
	/*ft_printf("%d --- %d\n", ret_t, ret);*/
	/*printf("\n----------\n");*/
	/**/
	/*ret_t = printf("|%.5d|\n", 16);*/
	/*ret = ft_printf("|%.5d|\n", 16);*/
	/*ft_printf("%d --- %d\n", ret_t, ret);*/
	/*printf("\n----------\n");*/
	/**/
	ret_t = printf("|%.4d|\n", -14);
	ret = ft_printf("|%.4d|\n", -14);
	ft_printf("%d --- %d\n", ret_t, ret);
	printf("\n----------\n");

	ret_t = printf("|%.10d|\n", LONG_MAX);
	ret = ft_printf("|%.10d|\n", LONG_MAX);
	ft_printf("%d --- %d\n", ret_t, ret);
	printf("\n----------\n");

	ret_t = printf("|%.12d|\n", UINT_MAX);
	ret = ft_printf("|%.12d|\n", UINT_MAX);
	ft_printf("%d --- %d\n", ret_t, ret);
	printf("\n----------\n");

	ret_t = printf("|%.13d|\n", ULONG_MAX);
	ret = ft_printf("|%.13d|\n", ULONG_MAX);
	ft_printf("%d --- %d\n", ret_t, ret);
	printf("\n----------\n");

	/*ret_t = printf("|%.14d|\n", 9223372036854775807LL);*/
	/*ret = ft_printf("|%.14d|\n", 9223372036854775807LL);*/
	/*ft_printf("%d --- %d\n", ret_t, ret);*/
	/*printf("\n----------\n");*/

	ret_t = printf("|%.8d %.9d %.10d %.11d %.12d %.13d %.14i|\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ret = ft_printf("|%.8d %.9d %.10d %.11d %.12d %.13d %.14i|\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf("%d --- %d\n", ret_t, ret);
	printf("\n----------\n");

	ret_t = printf("|%.4i|\n", -14);
	ret = ft_printf("|%.4i|\n", -14);
	ft_printf("%d --- %d\n", ret_t, ret);
	printf("\n----------\n");
	printf("|%012.8d|\n", -12);
	printf("|% 12.8d|\n", -12);
	printf("|%+12.8d|\n", -12);
	/*printf("|%+14.8d|\n", 12);*/
	/*printf("|% 14.8d|\n", 12);*/
	/*printf("|% -4.8d|\n", 12);*/

	/*TEST(62, print(" %.10i ", LONG_MAX));*/
	/*TEST(64, print(" %.12i ", UINT_MAX));*/
	/*TEST(65, print(" %.13i ", ULONG_MAX));*/
	/*TEST(66, print(" %.14i ", 9223372036854775807LL));*/
	/*TEST(67, print(" %.8i %.9i %.10i %.11i %.12i %.13i %.14i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));*/

	return (0);
}
