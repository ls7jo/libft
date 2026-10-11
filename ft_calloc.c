/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 17:58:27 by ameryan           #+#    #+#             */
/*   Updated: 2026/10/11 19:10:30 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;
	size_t	total_size;
	size_t	i;

	i = (size_t) - 1;
	total_size = nmemb * size;
	if (nmemb != 0 && size > i / nmemb)
		return (NULL);
	if (total_size == i + 1)
		return (NULL);
	if (total_size > __INT_MAX__ || total_size == 0)
		str = malloc(0);
	else
		str = malloc(total_size);
	if (!str)
		return (NULL);
	ft_bzero(str, ft_strlen(str));
	return (str);
}
