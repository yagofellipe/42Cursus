/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:33:12 by yfellipe          #+#    #+#             */
/*   Updated: 2023/10/23 13:33:15 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int			i;
	int			lens1;
	int			lens2;
	char		*join;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	join = malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (join == NULL)
		return (NULL);
	i = 0;
	while (i < lens1 + lens2)
	{
		if (i < lens1)
			join[i] = s1[i];
		else
			join[i] = s2[i - lens1];
		i++;
	}
	join[i] = '\0';
	return (join);
}
/*
int main() {
    char s1[] = "Hello, ";
    char s2[] = "world!";
    char *result = ft_strjoin(s1, s2);

    if (result != NULL) {
        printf("Concatenated string: %s\n", result);
        free(result);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
*/
