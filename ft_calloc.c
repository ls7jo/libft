/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:02:56 by ameryan           #+#    #+#             */
/*   Updated: 2026/10/15 15:03:00 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*str;

	if (nmemb != 0 && size > (size_t)-1 / nmemb)
		return (NULL);
	total_size = nmemb * size;
	str = malloc(total_size);
	if (!str)
		return (NULL);
	ft_bzero(str, total_size);
	return (str);
}
