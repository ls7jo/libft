/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:05:42 by ameryan           #+#    #+#             */
/*   Updated: 2026/10/15 15:05:43 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dest, const char *src, size_t n)
{
	int unsigned	i;
	size_t			slen;

	slen = ft_strlen(src);
	if (n == 0)
		return (slen);
	i = 0;
	while (i < n - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (slen);
}
// int main ()
// {
// 	char src[] = "coucou";
// 	char dest[10]; memset(dest, 'A', 10);

// 	printf("%i", ft_strlcpy(dest, src, 1));
// }
