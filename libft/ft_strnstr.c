/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:24:51 by yfellipe          #+#    #+#             */
/*   Updated: 2023/10/23 13:24:54 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (i < len && big[i] != 0)
	{
		if (little[0] == big[i])
		{
			j = 0;
			while (big[i + j] == little[j] && ((j + i) < len))
			{
				j++;
				if (little[j] == '\0')
					return ((char *)big + i);
			}
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main() 
{
    const char *haystack = "Hello, World!";
    const char *needle = "World";
    size_t max_length = ft_strlen(haystack); 

    char *result = ft_strnstr(haystack, needle, max_length);

    if (result) {
        printf("Substring encontrada: %s\n", result);
    } else {
        printf("Substring não encontrada.\n");
    }

    return 0;
}
*/
