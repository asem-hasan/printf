#include "ft_printf.h"

static void	ft_format(char c, va_list *args, int *count)
{
	if (c == '%')
		ft_putchar('%', count);
	else if (c == 'c')
		ft_putchar(va_arg(*args, int), count);
	else if (c == 's')
		ft_putstr(va_arg(*args, char *), count);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(*args, int), count);
	else if (c == 'u')
		ft_putnbrunsign(va_arg(*args, unsigned int), count);
	else if (c == 'x')
		ft_putnbrh(va_arg(*args, unsigned int), count, 0);
	else if (c == 'X')
		ft_putnbrh(va_arg(*args, unsigned int), count, 1);
	else if (c == 'p')
		ft_putpointerh(va_arg(*args, void *), count);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	args;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			ft_format(format[i], &args, &count);
		}
		else if (format[i] != '%')
			ft_putchar(format[i], &count);
		i++;
	}
	va_end(args);
	return (count);
}
