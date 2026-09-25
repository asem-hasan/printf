#include "ft_printf.h"

void	ft_putnbrunsign(unsigned int n, int *count)
{
	unsigned int	num;
        long    div;

	num = n;
	if (num == 0)
	{
		ft_putchar('0', count);
		return ;
	}
	div = 1;
	while (num / div >= 10)
		div *= 10;
	while (div > 0)
	{
		ft_putchar((num / div) + '0', count);
		num %= div;
		div /= 10;
	}
}
