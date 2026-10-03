/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 14:38:53 by ameryan           #+#    #+#             */
/*   Updated: 2026/09/29 18:19:07 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*des;
	unsigned char	*src1;

	src1 = (unsigned char *) src;
	des = (unsigned char *) dest;
	i = 0;
	while (i < n)
	{
		des[i] = src1[i];
		i++;
	}
	return (des);
}
