/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 18:55:25 by ameryan           #+#    #+#             */
/*   Updated: 2026/10/04 19:04:11 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_putendl_fd(char *s, int fd)
{
	int len;
	int i;

	i = 0;
	len = ft_strlen(s);
	while(i < len)
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
int main ()
{
	char ch[] = "lol22";

	ft_putendl_fd(ch, 1);
}