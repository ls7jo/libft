/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:05:00 by ameryan           #+#    #+#             */
/*   Updated: 2026/10/15 15:05:02 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
		write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
/*int main ()
{
char	ch[] = "lol22";

ft_putendl_fd(ch, 1);
}*/
