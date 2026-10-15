/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 15:07:56 by ameryan           #+#    #+#             */
/*   Updated: 2026/10/15 13:25:20 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	findcount(long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	i;
	size_t	count;
	long	num;

	num = n;
	count = findcount(num);
	str = malloc(count + 1);
	if (!str)
		return (NULL);
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	i = count - 1;
	while (num > 0)
	{
		str[i--] = num % 10 + '0';
		num = num / 10;
	}
	str[count] = '\0';
	return (str);
}
/*int main ()
{
	printf("%s\n", ft_itoa(-1200075599));
}*/