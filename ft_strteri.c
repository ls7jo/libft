/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strteri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 16:38:41 by ameryan           #+#    #+#             */
/*   Updated: 2026/10/12 18:22:57 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int i;

	i = 0;
	if(!s || !f)
		return;
	while(s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

static void	to_upper(unsigned int i, char *c)
{
(void) i;
if (*c >= 'a' && *c <= 'z')
*c = *c - 32;
}

int	main(void)
{
char	str[] = "hello world";

ft_striteri(str, to_upper);
printf("%s\n", str);
return (0);
}