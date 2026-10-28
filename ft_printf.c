/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:17:14 by username          #+#    #+#             */
/*   Updated: 2026/10/28 19:26:03 by ameryan          ###   ########.fr       */
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
					
			count++;
			format++;
		}	
	}
	va_end(ap);
	return(count);
}
int main ()
{
	int f;
	f = ft_printf("abdjana%sc", "helloworld");
	
}