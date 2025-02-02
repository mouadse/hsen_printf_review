#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	ret1, ret2;

	ret1 = ft_printf("Character: %c\n", 'A');
	ret2 = printf("Character: %c\n", 'A');
	printf("Return ft_printf: %d, printf: %d\n", ret1, ret2);

	ret1 = ft_printf("String: %s\n", "Hello, World!");
	ret2 = printf("String: %s\n", "Hello, World!");
	printf("Return ft_printf: %d, printf: %d\n", ret1, ret2);

	ret1 = ft_printf("Pointer: %p\n", (void *)0x12345678);
	ret2 = printf("Pointer: %p\n", (void *)0x12345678);
	printf("Return ft_printf: %d, printf: %d\n", ret1, ret2);

	ret1 = ft_printf("Hexadecimal (lower): %x\n", 255);
	ret2 = printf("Hexadecimal (lower): %x\n", 255);
	printf("Return ft_printf: %d, printf: %d\n", ret1, ret2);

	ret1 = ft_printf("Hexadecimal (upper): %X\n", 255);
	ret2 = printf("Hexadecimal (upper): %X\n", 255);
	printf("Return ft_printf: %d, printf: %d\n", ret1, ret2);

	ret1 = ft_printf("Integer: %d\n", -12345);
	ret2 = printf("Integer: %d\n", -12345);
	printf("Return ft_printf: %d, printf: %d\n", ret1, ret2);

	ret1 = ft_printf("Unsigned: %u\n", 12345);
	ret2 = printf("Unsigned: %u\n", 12345);
	printf("Return ft_printf: %d, printf: %d\n", ret1, ret2);

	ret1 = ft_printf("Percent: %%\n");
	ret2 = printf("Percent: %%\n");
	printf("Return ft_printf: %d, printf: %d\n", ret1, ret2);

	ret1 = ft_printf("NULL String: %s\n", NULL);
	ret2 = printf("NULL String: %s\n", NULL);
	printf("Return ft_printf: %d, printf: %d\n", ret1, ret2);

	ret1 = ft_printf("NULL Pointer: %p\n", NULL);
	ret2 = printf("NULL Pointer: %p\n", NULL);
	printf("Return ft_printf: %d, printf: %d\n", ret1, ret2);

	return (0);
}
