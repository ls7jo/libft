	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:05:16 by ameryan           #+#    #+#             */
/*   Updated: 2026/10/15 15:05:17 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_split(char **result, int word)
{
	int	i;

	i = 0;
	while (i < word)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

static int	countword(const char *s, char c)
{
	int	i;
	int	count;
	int	inword;

	i = 0;
	count = 0;
	inword = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			inword = 0;
		}
		else if (inword == 0)
		{
			count++;
			inword = 1;
		}
		i++;
	}
	return (count);
}

static char	*get_word(char const *s, char c, size_t start_index)
{
	size_t	start;
	size_t	end;

	while (s[start_index] == c)
	{
		start_index++;
	}
	start = start_index;
	end = start;
	while (s[end] != '\0' && s[end] != c)
	{
		end++;
	}
	return (ft_substr(s, start, end - start));
}

static char	**ft_fill(char const *s, char c, char **res)
{
	size_t	i;
	size_t	w;

	i = 0;
	w = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		res[w] = get_word(s, c, i);
		if (!res[w])
			return (free_split(res, w), NULL);
		while (s[i] && s[i] != c)
			i++;
		w++;
	}
	res[w] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = malloc((countword(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	return (ft_fill(s, c, res));
}
/*#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
char const	*s = "   lol n im abbod ";
char		delimiter = ' ';
char		**result;
int			i;

// 1. Create a test string with multiple spaces and edge cases
printf("Original string: \"%s\"\n\n", s);
// 2. Call your split function
result = ft_split(s, delimiter);
// 3. Check if the allocation failed entirely
if (result == NULL)
{
printf("Error: ft_split returned NULL\n");
return (1);
}

// 4. Loop through the array and print each word until we hit the NULL terminator
i = 0;
while (result[i] != NULL)
{
printf("Word [%d]: %s\n", i, result[i]);
i++;
}

// 5. Clean up the memory after you are done using the result
// We reuse your free_split function here (or free manually)
free_split(result, i);

return (0);
}*/
