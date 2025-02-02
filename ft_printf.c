/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msennane <msennane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 17:10:18 by hsennane          #+#    #+#             */
/*   Updated: 2025/02/02 17:04:37 by msennane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// static int check_percent_at_end(const char *format)
// {
// 	int i;

// 	if (!format)
// 		return (0);
// 	i = 0;
// 	while (format[i + 1] != '\0')
// 		i++;
// 	if (i >= 0 && format[i] == '%')
// 		return (1);
// 	return (0);
// }

static int	part_flags(const char *format, va_list args)
{
	int	len;

	len = 0;
	if (*format == 'c')
		len += ft_print_char(va_arg(args, int));
	else if (*format == 's')
		len += ft_print_str(va_arg(args, const char *));
	else if (*format == 'p')
		len += ft_print_pointer(va_arg(args, void *));
	else if (*format == 'x')
		len += ft_print_hexa(va_arg(args, unsigned int), 0);
	else if (*format == 'X')
		len += ft_print_hexa(va_arg(args, unsigned int), 1);
	else if (*format == 'd' || *format == 'i')
		len += ft_print_int(va_arg(args, int));
	else if (*format == 'u')
		len += ft_print_unsigned(va_arg(args, unsigned int));
	else if (*format == '%')
	{
		len += ft_print_char('%');
	}
	else
		len += ft_print_char(*format);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	va_list	args;

	len = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break ;
			len += part_flags(format, args);
		}
		else
			len += ft_print_char(*format);
		format++;
	}
	va_end(args);
	return (len);
}
