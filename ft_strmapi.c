/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 16:01:56 by ameryan           #+#    #+#             */
/*   Updated: 2026/10/04 16:37:41 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	unsigned int strlen;
	char *str;

	i = 0;
	strlen = ft_strlen(s);
	
	if(!s || !f)
		return (NULL);
	str = malloc (strlen + 1);
	if (!str)
		return(NULL);
	while (i < strlen)
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
	return(str);
}
