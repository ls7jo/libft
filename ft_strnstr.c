/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 11:19:06 by username          #+#    #+#             */
/*   Updated: 2026/09/29 18:11:52 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	int	u;
	int	l;

	u = 0;
	l = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[u] != '\0' && u < (int) len)
	{
		l = 0;
		while (to_find[l] != '\0' && str[u + l] == to_find[l])
		{
			l++;
		}
		if (to_find[l] == '\0')
			return (&str[u]);
		u++;
	}
	return (NULL);
}
