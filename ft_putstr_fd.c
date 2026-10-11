/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 18:21:14 by ameryan           #+#    #+#             */
/*   Updated: 2026/10/04 19:03:27 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	int len;
	int i;

	len = ft_strlen(s);
	i = 0;
	
	while(i < len)
	{
		write(fd, &s[i], 1);
		i++;
	}
}