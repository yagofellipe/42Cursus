/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:32:08 by yfellipe          #+#    #+#             */
/*   Updated: 2023/10/23 13:32:33 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t		len;
	char		*new;

	len = ft_strlen(s) + 1;
	if (s == NULL)
		return (NULL);
	new = (char *)malloc(sizeof(char) * len);
	if (new == NULL)
		return (NULL);
	return ((char *)ft_memcpy(new, s, len));
}
/*
int main() {
    const char *original = "Hello, World!";
    char *copia = ft_strdup(original);

    if (copia != NULL) {
        printf("String original: %s\n", original);
        printf("Cópia da string: %s\n", copia);
        free(copia); // Lembre-se de liberar a memória alocada pela my_strdup.
    } else {
        printf("Falha na alocação de memória.\n");
    }

    return 0;
}*/
