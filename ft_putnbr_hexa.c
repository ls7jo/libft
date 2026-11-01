/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 17:52:54 by ameryan           #+#    #+#             */
/*   Updated: 2026/11/01 20:11:47 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_hexa(unsigned long n, char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_putnbr_hexa(n / 16, base);
	write(1, &base[n % 16], 1);
	count++;
	return (count);
}
int ft_putnbr_p(void *p)
{
	unsigned long point;
	int count;
	
	point = p;
	count = 0;
	if(!p)
		return(write(1, "(nil)", 5));
	count += ft_putstr("0x");
	count += ft_putnbr_hexa(point, "0123456789abcdef");
	return (count);
}