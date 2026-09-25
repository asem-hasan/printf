#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "../libft/libft.h"
#include <stdarg.h>

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int	ft_printf(const char *, ...);
void	ft_putchar(char, int *);
void	ft_putstr(char *, int *);
void	ft_putnbr(int, int *);
void	ft_putnbrh(unsigned int, int *, int);
void	ft_putnbrunsign(unsigned int, int *);
void	ft_putpointerh(void *, int *);

#endif
