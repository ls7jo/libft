/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 21:05:54 by ameryan           #+#    #+#             */
/*   Updated: 2026/10/11 21:14:09 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	if (!lst || !f || !del)
		return;
	while (lst)
	{
		void *check = lst->content;
		f(lst->content);
		if(lst->content == check)
		{
		ft_lstdelone(lst, del);
		free(lst);	
		}
		lst = lst->next;
	}

}