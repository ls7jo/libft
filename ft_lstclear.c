/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 15:06:38 by ameryan           #+#    #+#             */
/*   Updated: 2026/10/11 17:43:42 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (!lst || !del)
		return;
	while (*lst)
	{
		t_list *temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}
int main()
{
	
}