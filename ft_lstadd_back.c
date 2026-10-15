/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:02:40 by ameryan           #+#    #+#             */
/*   Updated: 2026/10/15 15:02:41 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (!lst || !new)
		return ;
	node = ft_lstlast(*lst);
	if (!node)
	{
		*lst = new;
		return ;
	}
	node->next = new;
}
/*int main ()
{
char	*o = "123";
char	*u = "124";
char	*y = "126";
char	*p = "147";

t_list	*head = NULL;

ft_lstadd_front(&head, ft_lstnew(ft_strdup(o)));
ft_lstadd_front(&head, ft_lstnew(ft_strdup(u)));
ft_lstadd_front(&head, ft_lstnew(ft_strdup(y)));
ft_lstadd_back(&head, ft_lstnew(ft_strdup(p)));

t_list	*last = ft_lstlast(head);
printf("%s\n", (void *)last->content);
}*/
