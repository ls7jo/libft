/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:05:06 by ameryan           #+#    #+#             */
/*   Updated: 2026/10/15 15:05:07 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	u;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		n = n * -1;
		write(fd, "-", 1);
	}
	if (n >= 10)
	{
		u = (n % 10) + '0';
		ft_putnbr_fd(n / 10, fd);
		write(fd, &u, 1);
	}
	if (n < 10)
	{
		u = n + '0';
		write(fd, &u, 1);
	}
}
/*int main ()
{
int		i = -234;
ft_putnbr_fd(i, 1);
}*/
