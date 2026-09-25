#include <stdarg.h>
#include <stdio.h>
#include "ft_printf.h"

int sum(int count, ...)
{
	va_list	arg;
	int sum = 0;

	va_start(arg,count);
	for (int i = 0; i < count; i++)
	{
		sum += va_arg(arg, int);
	}
	return (sum);

}

int main()
{
//	printf("%d\n",sum(2, 100, 50));
	//printf("%d\n",sum(3, 10, 20, 30));
//	ft_printf("Hello %c World %c!\n", 'A', 'B');
//	ft_printf("M%c Name is: %s!\n", 'y',"Asem");
//ft_printf("Hello %c\n", 'A');
//ft_printf("Hello %s\n", "Asem");
//ft_printf("%c %s %c\n", 'A', "Hello", 'B');
/*
printf("%d\n",ft_printf("Hello %c\n", 'A'));
printf("%d\n",ft_printf("Hello %s\n", "Asem"));
printf("%d\n",ft_printf("%c %s %c\n", 'A', "Hello", 'B'));
printf("%d\n",ft_printf("%%%%%%\n"));
printf("%d\n",ft_printf("%d\n", 12345));
printf("%d\n",ft_printf("%d\n", -42));
printf("%d\n",ft_printf("%i\n", 0));
printf("%d\n",ft_printf("H%c My %s is: %s An%c My age is: %d\n", 'i',"Name", "Asem", 'd', 23));*/
//printf("dddd%r");
//printf(" NULL %s NULL ", (char *)NULL);
//printf(" %p %p \n", 0, 0);
//ft_printf(" %p %p \n", 0, 0)
	return (0);
}
