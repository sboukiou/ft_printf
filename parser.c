#include "libft/libft.h"
#include "ft_printf.h"

t_flags	*get_flags(char *buffer)
{
	int	i;
	t_flags	*flags;

	flags = (t_flags *)ft_calloc(1, sizeof(t_flags));
	if (!flags)
		return (NULL);
	i = 1;
	while (is_set(buffer[i], FLAGS))
	{
		if (buffer[i] == ' ')
			flags->space = 1;
		if (buffer[i] == '+')
			flags->plus = 1;
		if (buffer[i] == '#')
			flags->hash = 1;
		if (buffer[i] == '0')
			flags->zero = 1;
		if (buffer[i] == '.')
		{
			flags->point = 1;
			flags->prec = ft_atoi(buffer + i + 1);
		}
		if (buffer[i] == '-')
			flags->minus = 1;
		i++;
	}
	flags->width = ft_atoi(buffer + i);
	return (flags);
}
int	get_num_len(int number)
{
	unsigned long	num;
	int	count;

	if (!number)
		return (1);
	count = 0;
	if (number < 0)
	{
		count++;
		num = -number;
	}
	else
		num = number;
	while (num > 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}
