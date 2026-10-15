/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:04:42 by ameryan           #+#    #+#             */
/*   Updated: 2026/10/15 15:04:43 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// #include <stdio.h>
// #include <fcntl.h>
// int main ()
// {

// 	char *name = "test.txt";
// 	int fd = open(name, O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	ft_putchar_fd('t', fd);
// 	printf("%d", fd);
// }