/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:59:59 by ameryan           #+#    #+#             */
/*   Updated: 2026/10/15 15:00:03 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fillsubstr(const char *str, char *return_str, int j, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && str[j])
	{
		return_str[i] = str[j];
		i++;
		j++;
	}
	return (return_str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	checkava;
	size_t	slen;
	char	*substr;
	size_t	j;

	j = start;
	slen = ft_strlen(s);
	checkava = slen - start;
	if (start >= slen)
		return (ft_strdup(""));
	if (checkava >= len)
		checkava = len;
	substr = malloc(checkava + 1);
	if (!substr)
		return (NULL);
	fillsubstr(s, substr, j, checkava);
	substr[checkava] = '\0';
	return (substr);
}
