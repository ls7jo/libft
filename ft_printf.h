/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:43:53 by ameryan           #+#    #+#             */
/*   Updated: 2026/11/01 20:01:25 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int ft_putnbr_un(int n);
int ft_putnbr_hexa(unsigned long n, char *base);
int ft_putnbr(int n);
int	ft_printf(const	char *format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);

#endif