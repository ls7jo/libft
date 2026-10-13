/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 21:05:54 by ameryan           #+#    #+#             */
/*   Updated: 2026/10/12 14:58:14 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void del(void *content)
{
free(content);	
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	if (!lst || !f || !del)
		return NULL;
	t_list *nlst;

	nlst = NULL;
	while (lst)
    {
        void *cont = f(lst->content);
        t_list *newnode = ft_lstnew(cont);
        
        if (!newnode)
        {
            del(cont);
            ft_lstclear(&nlst, del);
            return (NULL);
        }
        
        ft_lstadd_back(&nlst, newnode);
        lst = lst->next;
    }
	return (nlst);
}
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Simple helper function for f: converts the string to uppercase
void *upper_string(void *content)
{
    char *str = (char *)content;
    char *new_str = strdup(str); // Allocate a new copy to modify
    if (!new_str)
        return (NULL);
        
    int i = 0;
    while (new_str[i])
    {
        new_str[i] = toupper((unsigned char)new_str[i]);
        i++;
    }
    return (new_str);
}

// Simple helper function for del: frees the content string
void del_content(void *content)
{
    free(content);
}

int main(void)
{
    // 1. Initialize your list safely to NULL
    t_list *ls = NULL;

    // 2. Build the list using ft_strdup so content is safely dynamically allocated
    // Note: lstadd_front will reverse the order, so it will print: "smart -> very -> is -> sam"
    ft_lstadd_back(&ls, ft_lstnew(strdup("sam")));
    ft_lstadd_back(&ls, ft_lstnew(strdup("is")));
    ft_lstadd_back(&ls, ft_lstnew(strdup("very")));
    ft_lstadd_back(&ls, ft_lstnew(strdup("smart")));

    // 3. Print the Original List
    printf("Original list:\n");
    t_list *current = ls;
    while (current)
    {
        printf("[%s] -> ", (char *)current->content);
        current = current->next;
    }
    printf("NULL\n\n");

    // 4. Test your ft_lstmap function
    t_list *mapped_list = ft_lstmap(ls, upper_string, del_content);

    // 5. Print the Mapped List
    printf("Mapped list (Uppercase):\n");
    current = mapped_list;
    while (current)
    {
        printf("[%s] -> ", (char *)current->content);
        current = current->next;
    }
    printf("NULL\n");

    // 6. Clean up memory leaks using your other libft functions
    ft_lstclear(&ls, del_content);
    ft_lstclear(&mapped_list, del_content);

    return (0);
}

/*int main ()
{
	char *n1 = "sam";
	char *n2 = "is";
	char *n3 = "very";
	char *n4 = "smart";
	t_list *ls;
	
	ft_lstadd_front(&ls , ft_lstnew(ft_strdup(n1)));
	ft_lstadd_front(&ls , ft_lstnew(ft_strdup(n2)));
	ft_lstadd_front(&ls, ft_lstnew(ft_strdup(n3)));
	ft_lstadd_front(&ls, ft_lstnew(ft_strdup(n4)));

	printf("%s", ls);
}*/