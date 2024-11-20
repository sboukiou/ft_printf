#include "libft/libft.h"
#include "printf.h"

t_flags	*get_flags(char *buffer)
{
	int	i;
	t_flags	*flags;

	flags = (t_flags *)ft_calloc(1, sizeof(t_flags));
	if (!flags)
		return (NULL);
	i = 0;
	while (is_set(buffer[i], FLAGS))
	{
		if (buffer[i] == ' ')
			flags->space = 1;
		else if (buffer[i] == '+')
			flags->space = 1;
		else if (buffer[i] == '#')
			flags->hash = 1;
		else if (buffer[i] == '0')
			flags->zero = 1;
		i++;
	}
	return (flags);
}
