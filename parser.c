#include "libft/libft.h"
#include "printf.h"

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
		i++;
	}
	flags->width = ft_atoi(buffer + i);
	return (flags);
}
int	get_num_len(int number)
{
	unsigned int	num;
	int	count;

	if (!number)
		return (1);
	count = 0;
	num = number;
	if (number < 0)
	{
		count++;
		num = -number;
	}
	while (num > 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}
