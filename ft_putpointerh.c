#include "ft_printf.h"

void	ft_putpointerh(void * ptr, int *count)
{
	unsigned long	address;

	address = (unsigned long)ptr;
	long	div;
	char    *str = "0123456789abcdef";

        if (address == 0)
        {
                ft_putstr("(nil)", count);
                return ;
        }
	ft_putstr("0x", count);
        div = 1;
        while (address / div >= 16)
                div *= 16;
        while (div > 0)
        {
                ft_putchar(str[(address / div)], count);
                address %= div;
                div /= 16;
        }
}
