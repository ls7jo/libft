/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:17:14 by username          #+#    #+#             */
/*   Updated: 2026/11/01 20:16:01 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// #define va_copy

int	ft_printf(const	char *format, ...)
{
	va_list ap;
	int count;
	
	count = 0;
	va_start(ap, format);
	
	if (format == NULL)
		return (-1);
	while(*format)
	{
		if (*format != '%')
		{
			ft_putchar(*format);
			format++;
			count++;
		}
		else
		{
			format++;
			if (*format == '%')
				count += ft_putchar(*format);
			else if (*format == 'c')
				count += ft_putchar(va_arg(ap, int));
			else if (*format == 's')
				count += ft_putstr(va_arg(ap, char *));
			else if (*format == 'd' || *format == 'i')
				count += ft_putnbr(va_arg(ap, int));
			else if (*format == 'x')
				count += ft_putnbr_hexa(va_arg(ap, unsigned long), "0123456789abcdef");
			else if (*format == 'X')
				count += ft_putnbr_hexa(va_arg(ap, unsigned long), "0123456789ABCDEF");
			else if (*format == 'u')
				count += ft_putnbr_un(va_arg(ap, unsigned int));
			else if (*format == 'p')
				count += ft_putnbr_un(va_arg(ap, unsigned int));
			format++;
		}	
	}
	va_end(ap);
	return(count);
}
int main ()
{
	 int f;
	
	 f = ft_printf("%x\n", 103);
	// printf("%x", 103);
	
}