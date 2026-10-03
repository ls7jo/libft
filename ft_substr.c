/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 19:42:50 by username          #+#    #+#             */
/*   Updated: 2026/10/03 14:55:06 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fillsubstr(const char *str, char *return_str, int j, size_t len)
{
	size_t	i;

	i = 0;
	while (i <= len && str[j])
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
		return (NULL);
	if (checkava >= len)
	{
		substr = malloc(len + 1);
		fillsubstr(s, substr, j, len);
	}
	if (checkava < len)
	{
		substr = malloc(checkava + 1);
		fillsubstr(s, substr, j, checkava);
	}
	if (!substr)
		return (NULL);
	substr[len] = '\0';
	return (substr);
}
/*int main ()
{
char s[] = "eehmeje 00behh";
int start = 5;
int end = 10;
printf("%s" ,ft_substr(s,start, end -start +1 ));
}*/
