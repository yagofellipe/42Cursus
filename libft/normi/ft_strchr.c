/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:53:26 by yfellipe          #+#    #+#             */
/*   Updated: 2023/10/23 13:53:29 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!*s)
		return (0);
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (0);
}
/*
int main() {
    const char *text = "Hello, World!";
    char target = 'o';

    char *result = ft_strchr(text, target);

    if (result) {
        printf("Caractere '%c' encontrado na posição:
         %ld\n", target, result - text);
    } else {
        printf("Caractere '%c' não encontrado na 
        string.\n", target);
    }

    return 0;
}
*/
