#include "libft/libft.h"
#include "printf.h"

char *_gettypename(char type)
{
	if (type == 'c')
		return (ft_strdup("cprint"));
	if (type == 's')
		return (ft_strdup("sprint"));
	if (type == 'd')
		return (ft_strdup("dprint"));
	if (type == 'i')
		return (ft_strdup("iprint"));
	return (ft_strdup("NOTHING FOUND"));
}

int	_isflag(char c)
{
	int	index;

	index = 0;
	while (FLAGS[index])
	{
		if (FLAGS[index] == c)
			return (1);
		index++;
	}
	return (1);
}

char	*_parsef_format(char	*str)
{
	int	index;

	index = 0;
	while (_isflag(str[index]))
	{
		index++;
	}
}
