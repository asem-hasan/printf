#include "ft_printf.h"

void	ft_putnbrh(unsigned int n, int *count, int is_upper)
{ 
        long	num; 
        long	div; 
	char	*strlower = "0123456789abcdef";
	char	*strupper = "0123456789ABCDEF";
	char	c;
 
	num = n;  
	if (num == 0) 
	{ 
		ft_putchar('0', count); 
		return ;
	} 
	div = 1; 
	while (num / div >= 16) 
		div *= 16; 
	while (div > 0) 
	{
		if (is_upper)
			c = strupper[(num / div)];
		else
			c = strlower[(num / div)];
		ft_putchar(c, count); 
		num %= div; 
		div /= 16; 
        } 
}
