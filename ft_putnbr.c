/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 19:26:17 by ameryan           #+#    #+#             */
/*   Updated: 2026/10/28 20:28:11 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr(int n)
{
	long num;
	
	num = n;
	if(n < 0)
	{
		num = -num;
		write(1, '-', 1);
	}
	if(num > 9)
	{
		num = (n % 10) + '0';
		ft_putnbr(n / 10);
		write(1, &num, 1);
	}
	if (n < 10)
	{
		num = n + '0';
		write(1, &num, 1);
	}
}
