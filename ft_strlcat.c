/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 16:47:38 by username          #+#    #+#             */
/*   Updated: 2026/09/29 18:20:07 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	deslen;
	int	srclen;
	int	des1;

	i = 0;
	deslen = ft_strlen(dst);
	srclen = ft_strlen(src);
	des1 = ft_strlen(dst);
	if ((!src || !dst) && !size)
		return (0);
	if ((int) size <= srclen)
		return (size + srclen);
	if ((int) size >= deslen)
		return (des1 + srclen);
	while (src[i] != '\0')
	{
		dst[deslen] = src[i];
		i++;
		deslen++;
	}
	dst[deslen] = '\0';
	return (des1 + srclen);
}
/*int	main(void)
{
	char	dst[20] = "Hello";
	char	dst1[20] = "Hello";

	printf("%s\nf", dst);
	printf("%s\n", dst1);
	printf("%zu\n", strlcat(dst1, "", 0));
	printf("%s\nf", dst);
	printf("%s\n", dst1);
}*/