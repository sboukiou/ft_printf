#include "libft/libft.h"
#include "printf.h"
#include <stdio.h>


int main(void)
{
	char *address = NULL;
	ft_printf("This is the string %s, this is the char %c, this is a number %d\n");
	int result = ft_printf(address);
	printf("%d\n", result);
	return (0);
}
