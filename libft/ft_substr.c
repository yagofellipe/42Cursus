/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:08:48 by yfellipe          #+#    #+#             */
/*   Updated: 2023/10/24 10:08:50 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new;
	size_t	slen;

	slen = 0;
	while (s[slen] != '\0')
		slen++;
	if (s == NULL || start >= slen)
		return (NULL);
	i = 0;
	new = malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return (NULL);
	while (s[start] != '\0' && len > 0)
	{
		new[i] = s[start];
		i++;
		start++;
		len--;
	}
	new[i] = '\0';
	return (new);
}
/*
int main() {
    char const *original_str = "Exemplo de substring";
    unsigned int start = 8;
    size_t len = 8;

    char *result = ft_substr(original_str, start, len);

    if (result) {
        printf("Substring: %s\n", result);
        free(result);
    } else {
        printf("Erro na alocação de memória.\n");
    }

    return 0;
}
*/
