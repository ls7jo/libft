/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 19:26:17 by ameryan           #+#    #+#             */
/*   Updated: 2026/11/01 19:56:53 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr(int n)
{
	long num;
	int count;
	
	count = 0;
	num = n;
	if(num < 0)
	{
		num = -num;
		write(1, "-", 1);
		count++;
	}
	if(num > 9)
	{
		count += ft_putnbr(num / 10);
		num = (num % 10) + '0';
		write(1, &num, 1);
		count++;
	}
	if (num < 10)
	{
		num = num + '0';
		write(1, &num, 1);
		count++;
	}
	return (count);
}
