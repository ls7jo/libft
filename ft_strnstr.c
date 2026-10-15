/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:06:08 by ameryan           #+#    #+#             */
/*   Updated: 2026/10/15 15:06:09 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	u;
	size_t	l;
	char	*big;
	char	*little;

	u = 0;
	l = 0;
	big = (char *)str;
	little = (char *)to_find;
	if (to_find[0] == '\0')
		return (big);
	while (big[u] != '\0' && u < len)
	{
		l = 0;
		while (u + l < len && big[l] != '\0' && big[u + l] == little[l])
		{
			if (little[l + 1] == '\0')
				return (&big[u]);
			l++;
		}
		u++;
	}
	return (NULL);
}
// int main()
// {
// 	char str[] = "abdallah";
// 	char littel[] = "";
// 	printf("%s", ft_strnstr(str, littel, 9));
// }
