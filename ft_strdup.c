/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 20:30:02 by ameryan           #+#    #+#             */
/*   Updated: 2026/10/04 12:48:07 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	slen;
	char	*dupstr;

	slen = ft_strlen(s);
	dupstr = malloc(slen + 1);
	if (!dupstr)
		return (NULL);
	ft_memcpy(dupstr, s, slen);
	dupstr[slen] = '\0';
	return (dupstr);
}
