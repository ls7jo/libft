/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 19:30:37 by ameryan           #+#    #+#             */
/*   Updated: 2026/10/03 15:12:11 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	returnindlast(const char *s1, const char *s2, int start, int end)
{
	int	j;
	int	i;

	i = end;
	while (s1[i] && s2[j] && i >= start)
	{
		while (s1[i] == s2[j])
		{
			i--;
			j = 0;
		}
		j++;
	}
	return (i);
}

static int	returnind(const char *s1, const char *s2, int start, int end)
{
	int	j;
	int	i;

	i = start;
	while (s1[i] && s2[j] && i <= end)
	{
		while (s1[i] == s2[j])
		{
			i++;
			j = 0;
		}
		j++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		strlen;
	int		start;
	int		end;
	char	*trimstr;

	if (!set)
		return(ft_strdup(s1));
	if(!s1)
		return(NULL);
	strlen = ft_strlen(s1);
	i = 0;
	start = returnind(s1, set, i, strlen);
	end = returnindlast(s1, set, strlen, strlen - start + 1);
	trimstr = ft_substr(s1, start, end - start + 1);
	return (trimstr);
}
/*int main ()
{
	char s[] = "eehmeje 00behh";
	char ne[] = "hem";
	int y = ft_strlen(s);
	char *tr = ft_strtrim(s, ne);
	//int start = returnind(s, ne , 0, y);
	printf("%s\n", tr);
	//printf("%i\n", returnindlast(s, ne, start, y));
	
}*/