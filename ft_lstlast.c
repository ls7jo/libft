/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 22:01:08 by ameryan           #+#    #+#             */
/*   Updated: 2026/10/05 22:07:05 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	if(lst == NULL)
		return(NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return(lst);
}