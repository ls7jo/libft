/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameryan <ameryan@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 16:03:35 by ameryan           #+#    #+#             */
/*   Updated: 2026/10/13 18:15:48 by ameryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int countword(const char *s, char c)
{
	int i;
    int count;
    int inword;

    i = 0;
    count = 0;
    inword = 0;

    if (!s)
        return (0);

    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            inword = 0;
        }
        else if (inword == 0)
        {
            count++;
            inword = 1;
        }
        i++;
    }
    return (count);
}

char **ft_split(char const *s, char c)
{
	char *res;
	size_t numwords;

	numwords = countword(s, c);
	res = malloc((numwords + 1) * sizeof(char *));
	
}
char *getword(const char *s, char c)
{
	
}
int main ()
{
	char y = 32;
	char s[] = "lol and im abbod";
	printf("%i\n", countword(s, y));
}