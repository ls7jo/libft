/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 19:37:24 by ameryan           #+#    #+#             */
/*   Updated: 2026/10/05 20:34:07 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *node;
	 
	node = malloc(sizeof(t_list));
	if(!node)
		return (NULL);
	node->content = content;
    node->next = NULL;
	return(node);
}
/*int main ()
{
	char con[] = "lol";
	t_list *cont = ft_lstnew(con);
	printf("%s", (char *)cont->next);
}*/