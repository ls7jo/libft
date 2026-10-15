/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:00:20 by ameryan           #+#    #+#             */
/*   Updated: 2026/10/15 15:00:21 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isset(const char *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	returnindlast(const char *s1, const char *s2, size_t st, size_t end)
{
	size_t	i;

	i = st;
	while (i >= end && isset(s2, s1[i]))
	{
		i--;
	}
	return (i);
}

static int	returnind(const char *s1, const char *s2, size_t start, size_t end)
{
	size_t	i;

	i = start;
	while (i < end && isset(s2, s1[i]))
	{
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	strlen;
	size_t	start;
	size_t	end;
	char	*trimstr;

	if (!set)
		return (ft_strdup(s1));
	if (!s1)
		return (ft_strdup(""));
	strlen = ft_strlen(s1);
	i = 0;
	start = returnind(s1, set, i, strlen);
	end = returnindlast(s1, set, strlen - 1, start);
	if (end < start)
		return (ft_strdup(""));
	trimstr = ft_substr(s1, start, end - start + 1);
	return (trimstr);
}
// //}
