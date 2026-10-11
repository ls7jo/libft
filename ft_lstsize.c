/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 21:58:10 by ameryan           #+#    #+#             */
/*   Updated: 2026/10/05 22:00:27 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int ft_lstsize(t_list *lst)
{
	int i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return(i);
}