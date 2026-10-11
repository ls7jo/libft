/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 12:15:17 by ameryan           #+#    #+#             */
/*   Updated: 2026/10/11 17:08:41 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void del(void *content)
{
free(content);	
}
void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if(!lst || !del)
		return;
	del(lst->content);
	free(lst);
}
/*int main()
{
    char *s = "223";
    char *t = "225";
    char *y = "229";
    char *p = "230";

    t_list *head = NULL;

    // Save the pointer to the node holding "229" so we can target it safely
    t_list *node_to_del = ft_lstnew(ft_strdup(y));

    // Build the list
    ft_lstadd_front(&head, ft_lstnew(ft_strdup(s)));
    ft_lstadd_front(&head, ft_lstnew(ft_strdup(t)));
    ft_lstadd_front(&head, node_to_del); // This is the 3rd node ("229")
    ft_lstadd_back(&head, ft_lstnew(ft_strdup(p)));

    // 3. Bypass the node before deleting it so the chain doesn't break!
    // head -> "229" -> "225" -> "223" -> "230"
    // Since "229" is currently the head node in this specific chain order:
   	printf("%u", ft_lstsize(head));

	head = node_to_del->next; 

    // Now safely delete the isolated node
    ft_lstdelone(node_to_del, del);
	printf("%u", ft_lstsize(head));

    return (0);
}*/