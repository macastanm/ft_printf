#include "ft_printf.h"

int		main(void)
{
	char	a;
	char	*str;
	char	*str2;
	char	*str3;
	char	percent;
	int		i;
	unsigned int	b;
	unsigned int	hex;

	a = 'a';
	str = NULL;
	str2 = 0;
	str3 = "ola, tudo bem?";
	i = -42174612;
	b = -42174612;
	hex = -16;
	percent = '%';

	// %c
	write(1, "c\n", 2);
	printf("printf: %c\n", a);
	write(1, "ft_printf: ", 12);
	ft_printf("%c", a);
	printf("\n\n");

	// %s null
	write(1, "s\n", 2);
	printf("printf: %s\n", str);
	write(1, "ft_printf: ", 12);
	ft_printf("%s", str);
	printf("\n\n");

	// %s
	write(1, "s\n", 2);
	printf("printf: %s\n", str3);
	write(1, "ft_printf: ", 12);
	ft_printf("%s", str3);
	printf("\n\n");
	
	// %p
	write(1, "p\n", 2);
	printf("printf: %p\n", &str2);
	write(1, "ft_printf: ", 12);
	ft_printf("%p", &str2);
	printf("\n\n");

	// %d
	write(1, "d\n", 2);
	printf("printf: %d\n", i);
	write(1, "ft_printf: ", 12);
	ft_printf("%d", i);
	printf("\n\n");

	// %i
	write(1, "i\n", 2);
	printf("printf: %i\n", i);
	write(1, "ft_printf: ", 12);
	ft_printf("%i", i);
	printf("\n\n");

	// %u
	write(1, "u\n", 2);
	printf("printf: %u\n", b);
	write(1, "ft_printf: ", 12);
	ft_printf("%u", b);
	printf("\n\n");

	// %x
	write(1, "x\n", 2);
	printf("printf: %x\n", hex);
	write(1, "ft_printf: ", 12);
	ft_printf("%x", hex);
	printf("\n\n");

	// %X
	write(1, "X\n", 2);
	printf("printf: %X\n", hex);
	write(1, "ft_printf: ", 12);
	ft_printf("%X", hex);
	printf("\n\n");

	// %%
	write(1, "percent\n", 8);
	printf("printf: %%\n");
	write(1, "ft_printf: ", 12);
	ft_printf("%%");
	printf("\n\n");
}
