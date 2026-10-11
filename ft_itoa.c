/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 15:07:56 by ameryan           #+#    #+#             */
/*   Updated: 2026/10/04 14:03:44 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	findcount(int n)
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
	int		i;
	int		count;

	count = findcount(n);
	str = malloc(count + 1);
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	i = count - 1;
	while (n != 0)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	str[count] = '\0';
	return (str);
}
int main ()
{
	printf("%s\n", ft_itoa(-1200075599));
}