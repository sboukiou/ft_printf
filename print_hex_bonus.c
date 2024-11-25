#include "ft_printf.h"
#include "ft_printf_bonus.h"


static int	print_hex_lower(unsigned int number, int hash)
{

	int	len;

	len = 0;
	if (hash)
		len += print_string("0x");
	if (!number)
		return (len += print_char('0'));
	if (number < 16)
		return (len += print_char(HEX_BASE[number]));
	len += print_hex_lower(number / 16, 0);
	len += print_char(HEX_BASE[number % 16]);
	return (len);
}

static int	print_hex_upper(unsigned int number, int hash)
{

	int	len;

	len = 0;
	if (hash)
		len += print_string("0X");
	if (!number)
		return (print_char('0'));
	if (number < 16)
		return (print_char(HEX_BASE_UPPER[number]));
	len += print_hex_upper(number / 16, 0);
	len += print_char(HEX_BASE_UPPER[number % 16]);
	return (len);
}

static int	get_hex_len(unsigned int number, int hash)
{
	int	len;

	len = 0;
	if (hash)
		len += 2;
	if (!number)
		return (len + 1);
	while (number > 0)
	{
		number /= 16;
		len++;
	}
	return (len);
}

int print_hex_lower_bonus(unsigned int number, t_tokens *tokens)
{
	int	len;
	len = 0;
	if (tokens->minus)
	{
		len += print_hex_lower(number, tokens->hash);
		while (len < tokens->width)
			len +=  print_char(' ');
		return (len);
	}
	len = get_hex_len(number, tokens->hash);
	while (len < tokens->width && tokens->zero)
		len += print_char('0');
	while (len < tokens->width)
		len += print_char(' ');
	print_hex_lower(number, tokens->hash);
	return (len);
}

int print_hex_upper_bonus(unsigned int number, t_tokens *tokens)
{
	int	len;
	len = 0;
	if (tokens->minus)
	{
		len += print_hex_upper(number, tokens->hash);
		while (len < tokens->width)
			len +=  print_char(' ');
		return (len);
	}
	len = get_hex_len(number, tokens->hash);
	while (len < tokens->width && tokens->zero)
		len += print_char('0');
	while (len < tokens->width)
		len += print_char(' ');
	print_hex_upper(number, tokens->hash);
	return (len);
}
