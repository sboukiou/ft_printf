#include "../ft_printf.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>


#include <stdio.h>

#include <stdio.h>

int main() {

	int ret_t;
	int	ret;

	/*   ret_t = printf("|% 10i|\n", -0);*/
	/*ft_printf("printf --> %d\n", ret_t);*/
	/*   ret = ft_printf("|% 10i|\n", -0);*/
	/*ft_printf("ft_ntf --> %d\n", ret);*/
	/*printf("\n");*/
	/**/
	/*   ret_t = printf("|% 10i|\n", 0);*/
	/*ft_printf("printf --> %d\n", ret_t);*/
	/*   ret = ft_printf("|% 10i|\n", 0);*/
	/*ft_printf("ft_ntf --> %d\n", ret);*/
	/*printf("\n");*/
	/**/
	/*   ret_t = printf("|% 10i|\n", -0);*/
	/*ft_printf("printf --> %d\n", ret_t);*/
	/*   ret = ft_printf("|% 10i|\n", -0);*/
	/*ft_printf("ft_ntf --> %d\n", ret);*/
	/*printf("\n");*/
	/**/
	/*   ret_t = printf("|% 10i|\n", -1337);*/
	/*ft_printf("printf --> %d\n", ret_t);*/
	/*   ret = ft_printf("|% 10i|\n", -1337);*/
	/*ft_printf("ft_ntf --> %d\n", ret);*/
	/*printf("\n");*/
	/**/
	/**/
	/**/
	/*   ret_t = printf("|%i|\n", -1337);*/
	/*ft_printf("printf --> %d\n", ret_t);*/
	/*   ret = ft_printf("|%i|\n", -1337);*/
	/*ft_printf("ft_ntf --> %d\n", ret);*/
	/*printf("\n");*/
	/**/
	/*   ret_t = printf("|% 10i|\n", 1337);*/
	/*ft_printf("printf --> %d\n", ret_t);*/
	/*   ret = ft_printf("|% 10i|\n", 1337);*/
	/*ft_printf("ft_ntf --> %d\n", ret);*/
	/*printf("\n");*/
	/**/
	/*   ret_t = printf("|% 10i|\n", -13999999);*/
	/*ft_printf("printf --> %d\n", ret_t);*/
	/*   ret = ft_printf("|% 10i|\n", -13999999);*/
	/*ft_printf("ft_ntf --> %d\n", ret);*/
	/*printf("\n");*/
	/**/
	/*   ret_t = printf("|% 10i|\n", -13999999);*/
	/*ft_printf("printf --> %d\n", ret_t);*/
	/*   ret = ft_printf("|% 10i|\n", -13999999);*/
	/*ft_printf("ft_ntf --> %d\n", ret);*/
	/*printf("\n");*/
	/*   ret_t = printf("|% 10i|\n", 1);*/
	/*ft_printf("printf --> %d\n", ret_t);*/
	/*   ret = ft_printf("|% 10i|\n", 1);*/
	/*ft_printf("ft_ntf --> %d\n", ret);*/
	/*printf("\n");*/
	/**/
	/*//    NOTE: Testing with flag 0*/
	/**/
	/*printf("----- Testing with the 0 flag -----\n");*/
	/*   ret_t = printf("|%010i|\n", -0);*/
	/*ft_printf("printf --> %d\n", ret_t);*/
	/*   ret = ft_printf("|%010i|\n", -0);*/
	/*ft_printf("ft_ntf --> %d\n", ret);*/
	/*printf("\n");*/
	/**/
	/*   ret_t = printf("|%010i|\n", 0);*/
	/*ft_printf("printf --> %d\n", ret_t);*/
	/*   ret = ft_printf("|%010i|\n", 0);*/
	/*ft_printf("ft_ntf --> %d\n", ret);*/
	/*printf("\n");*/
	/**/
	/*   ret_t = printf("|%010i|\n", -0);*/
	/*ft_printf("printf --> %d\n", ret_t);*/
	/*   ret = ft_printf("|%010i|\n", -0);*/
	/*ft_printf("ft_ntf --> %d\n", ret);*/
	/*printf("\n");*/
	/**/
	/*   ret_t = printf("|%010i|\n", -1337);*/
	/*ft_printf("printf --> %d\n", ret_t);*/
	/*   ret = ft_printf("|%010i|\n", -1337);*/
	/*ft_printf("ft_ntf --> %d\n", ret);*/
	/*printf("\n");*/
	/**/
	/*   ret_t = printf("|%i|\n", -1337);*/
	/*ft_printf("printf --> %d\n", ret_t);*/
	/*   ret = ft_printf("|%i|\n", -1337);*/
	/*ft_printf("ft_ntf --> %d\n", ret);*/
	/*printf("\n");*/
	/**/
	/*   ret_t = printf("|%010i|\n", 1337);*/
	/*ft_printf("printf --> %d\n", ret_t);*/
	/*   ret = ft_printf("|%010i|\n", 1337);*/
	/*ft_printf("ft_ntf --> %d\n", ret);*/
	/*printf("\n");*/
	/**/
	/*   ret_t = printf("|%010i|\n", -13999999);*/
	/*ft_printf("printf --> %d\n", ret_t);*/
	/*   ret = ft_printf("|%010i|\n", -13999999);*/
	/*ft_printf("ft_ntf --> %d\n", ret);*/
	/*printf("\n");*/
	/**/
	/*   ret_t = printf("|%010i|\n", -13999999);*/
	/*ft_printf("printf --> %d\n", ret_t);*/
	/*   ret = ft_printf("|%010i|\n", -13999999);*/
	/*ft_printf("ft_ntf --> %d\n", ret);*/
	/*printf("\n");*/
	/*   ret_t = printf("|%010i|\n", 1);*/
	/*ft_printf("printf --> %d\n", ret_t);*/
	/*   ret = ft_printf("|%010i|\n", 1);*/
	/*ft_printf("ft_ntf --> %d\n", ret);*/
	/*printf("\n");*/
	/**/

	// NOTE:    TESTING WITH + FLAG
	printf("\n--- Testing with the + flag ---\n");
	   ret_t = printf("|%+10i|\n", -0);
	ft_printf("printf --> %d\n", ret_t);
	   ret = ft_printf("|%+10i|\n", -0);
	ft_printf("ft_ntf --> %d\n", ret);
	printf("\n");

	   ret_t = printf("|%+10i|\n", 0);
	ft_printf("printf --> %d\n", ret_t);
	   ret = ft_printf("|%+10i|\n", 0);
	ft_printf("ft_ntf --> %d\n", ret);
	printf("\n");

	   ret_t = printf("|%+10i|\n", -0);
	ft_printf("printf --> %d\n", ret_t);
	   ret = ft_printf("|%+10i|\n", -0);
	ft_printf("ft_ntf --> %d\n", ret);
	printf("\n");

	   ret_t = printf("|%+10i|\n", -1337);
	ft_printf("printf --> %d\n", ret_t);
	   ret = ft_printf("|%+10i|\n", -1337);
	ft_printf("ft_ntf --> %d\n", ret);
	printf("\n");

	   ret_t = printf("|%+10i|\n", 1337);
	ft_printf("printf --> %d\n", ret_t);
	   ret = ft_printf("|%+10i|\n", 1337);
	ft_printf("ft_ntf --> %d\n", ret);
	printf("\n");

	   ret_t = printf("|%+10i|\n", -13999999);
	ft_printf("printf --> %d\n", ret_t);
	   ret = ft_printf("|%+10i|\n", -13999999);
	ft_printf("ft_ntf --> %d\n", ret);
	printf("\n");

	ret_t = printf("|%+10i|\n", 1);
	ft_printf("printf --> %d\n", ret_t);
	ret = ft_printf("|%+10i|\n", 1);
	ft_printf("ft_ntf --> %d\n", ret);
	printf("\n");

	ret_t = printf("|%+-12d|\n", 1);
	ft_printf("printf --> %d\n", ret_t);
	ret = ft_printf("|%+-12d|\n", 1);
	ft_printf("ft_ntf --> %d\n", ret);
	printf("\n");

	ret_t = printf("|%013d|\n", ULONG_MAX);
	ft_printf("printf --> %d\n", ret_t);
	ret = ft_printf("|%013d|\n", ULONG_MAX);
	ft_printf("ft_ntf --> %d\n", ret);
	printf("\n");

	ret_t = printf("|%015d|\n", INT_MIN);
	ft_printf("printf --> %d\n", ret_t);
	ret = ft_printf("|%015d|\n", INT_MIN);
	ft_printf("ft_ntf --> %d\n", ret);
	printf("\n");


	ret_t = printf("|%+-12d|\n", INT_MAX);
	ft_printf("printf --> %d\n", ret_t);
	ret = ft_printf("|%+-12d|\n", INT_MAX);
	ft_printf("ft_ntf --> %d\n", ret);
	printf("\n");


	ret_t = printf("|%013d|\n", LONG_MIN);
	ft_printf("printf --> %d\n", ret_t);
	ret = ft_printf("|%013d|\n", LONG_MIN);
	ft_printf("ft_ntf --> %d\n", ret);
	printf("\n");

	ret_t = printf("|%+-12d|\n", LONG_MAX);
	ft_printf("printf --> %d\n", ret_t);
	ret = ft_printf("|%+-12d|\n", LONG_MAX);
	ft_printf("ft_ntf --> %d\n", ret);
	printf("\n");
	
	ret_t = printf("|%+d|\n", 0);
	ft_printf("printf --> %d\n", ret_t);
	ret = ft_printf("|%+d|\n", 0);
	ft_printf("ft_ntf --> %d\n", ret);
	printf("\n");

	ret_t = printf("|%+d|\n", -1);
	ft_printf("printf --> %d\n", ret_t);
	ret = ft_printf("|%+d|\n", -1);
	ft_printf("ft_ntf --> %d\n", ret);
	printf("\n");


	ret_t = printf("|%+d|\n", 9);
	ft_printf("printf --> %d\n", ret_t);
	ret = ft_printf("|%+d|\n", 9);
	ft_printf("ft_ntf --> %d\n", ret);
	printf("\n");

    return 0;
}
