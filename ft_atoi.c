/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 16:39:26 by username          #+#    #+#             */
/*   Updated: 2026/09/29 13:58:43 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	count;
	int	sign;
	int	num;

	count = 0;
	sign = 1;
	num = 0;
	while (str[count] == ' ' || (str[count] >= '\t' && str[count] <= '\r'))
		count++;
	if (str[count] == '+' || str[count] == '-')
	{
		if (str[count] == '-')
			sign *= -1;
		count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		num = num * 10;
		num += (str[count] - '0');
		count++;
	}
	return (sign * num);
}
