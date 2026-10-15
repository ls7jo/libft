/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:03:52 by ameryan           #+#    #+#             */
/*   Updated: 2026/10/15 15:03:56 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*des;
	char			*src1;

	i = 0;
	des = (char *)dest;
	src1 = (char *)src;
	if (des > src1)
	{
		while (n != 0)
		{
			n--;
			des[n] = src1[n];
		}
	}
	while (i < n)
	{
		des[i] = src1[i];
		i++;
	}
	return (des);
}
