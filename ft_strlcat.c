/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:05:38 by ameryan           #+#    #+#             */
/*   Updated: 2026/10/15 15:28:16 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	deslen;
	size_t	srclen;
	size_t	des1;

	deslen = 0;
	while (deslen < size && dst[deslen])
	{
		deslen++;
	}
	i = 0;
	srclen = ft_strlen(src);
	des1 = deslen;
	if (size <= des1)
		return (size + srclen);
	while (src[i] != '\0' && deslen < size - 1)
	{
		dst[deslen] = src[i];
		i++;
		deslen++;
	}
	dst[deslen] = '\0';
	return (des1 + srclen);
}
// int	main(void)
// {
// 	//char	dst[20] = "Hello";
// 	char	dst1[20] = "Hello";

// 	// printf("%s\nf", dst);
// 	// printf("%s\n", dst1);
// 	printf("%zu\n", ft_strlcat(dst1, "", 50));
// 	// printf("%s\nf", dst);
// 	// printf("%s\n", dst1);
// }
