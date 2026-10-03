/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 16:17:17 by ameryan           #+#    #+#             */
/*   Updated: 2026/10/03 14:57:20 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		s1len;
	int		s2len;
	int		total_len;
	char	*str;

	i = 0;
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	total_len = s1len + s2len;
	str = malloc(total_len + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, s1len);
	ft_memcpy(str + s1len, s2, s2len);
	str[total_len] = '\0';
	return (str);
}
/*int main()
{
	char s[100000] = "1";
	char s1[100000] = "2";
	printf("%s", ft_strjoin(s, s1));
}*/