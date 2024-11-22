#include "../printf.h"
#include <stdio.h>
#include <stdlib.h>


#include <stdio.h>

#include <stdio.h>

int main() {

    printf("|% 10i|\n", -0);
    ft_printf("|% 10i|\n", -0);
	printf("\n");

    printf("|% 10i|\n", 0);
    ft_printf("|% 10i|\n", 0);
	printf("\n");

    printf("|% 10i|\n", -0);
    ft_printf("|% 10i|\n", -0);
	printf("\n");

    printf("|% 10i|\n", -1337);
    ft_printf("|% 10i|\n", -1337);
	printf("\n");



    printf("|%i|\n", -1337);
    ft_printf("|%i|\n", -1337);
	printf("\n");

    printf("|% 10i|\n", 1337);
    ft_printf("|% 10i|\n", 1337);
	printf("\n");

    printf("|% 10i|\n", -13999999);
    ft_printf("|% 10i|\n", -13999999);
	printf("\n");

    printf("|% 10i|\n", -13999999);
    ft_printf("|% 10i|\n", -13999999);
	printf("\n");
    printf("|% 10i|\n", 1);
    ft_printf("|% 10i|\n", 1);
	printf("\n");

	//    NOTE: Testing with flag 0

	printf("----- Testing with the 0 flag -----\n");
    printf("|%010i|\n", -0);
    ft_printf("|%010i|\n", -0);
	printf("\n");

    printf("|%010i|\n", 0);
    ft_printf("|%010i|\n", 0);
	printf("\n");

    printf("|%010i|\n", -0);
    ft_printf("|%010i|\n", -0);
	printf("\n");

    printf("|%010i|\n", -1337);
    ft_printf("|%010i|\n", -1337);
	printf("\n");

    printf("|%i|\n", -1337);
    ft_printf("|%i|\n", -1337);
	printf("\n");

    printf("|%010i|\n", 1337);
    ft_printf("|%010i|\n", 1337);
	printf("\n");

    printf("|%010i|\n", -13999999);
    ft_printf("|%010i|\n", -13999999);
	printf("\n");

    printf("|%010i|\n", -13999999);
    ft_printf("|%010i|\n", -13999999);
	printf("\n");
    printf("|%010i|\n", 1);
    ft_printf("|%010i|\n", 1);
	printf("\n");


	// NOTE:    TESTING WITH + FLAG
	printf("\n--- Testing with the + flag ---\n");
	   printf("|%+10i|\n", -0);
	   ft_printf("|%+10i|\n", -0);
	printf("\n");

	   printf("|%+10i|\n", 0);
	   ft_printf("|%+10i|\n", 0);
	printf("\n");

	   printf("|%+10i|\n", -0);
	   ft_printf("|%+10i|\n", -0);
	printf("\n");

	   printf("|%+10i|\n", -1337);
	   ft_printf("|%+10i|\n", -1337);
	printf("\n");

	   printf("|%+10i|\n", 1337);
	   ft_printf("|%+10i|\n", 1337);
	printf("\n");

	   printf("|%+10i|\n", -13999999);
	   ft_printf("|%+10i|\n", -13999999);
	printf("\n");

	printf("|%+10i|\n", 1);
	ft_printf("|%+10i|\n", 1);
	printf("\n");

	printf("|%+-12d|\n", 1);
	ft_printf("|%+-12d|\n", 1);
	printf("\n");

    return 0;
}
