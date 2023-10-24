/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:17:47 by yfellipe          #+#    #+#             */
/*   Updated: 2023/10/24 10:17:51 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpyy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if (dest != src)
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*cdst;

	s = (char *)src;
	cdst = (char *)dest;
	if (dest > src)
	{
		while ((int)--n >= 0)
			cdst[n] = s[n];
	}
	if (src > dest)
		ft_memcpyy(dest, src, n);
	return (dest);
}
/*
#include <string.h>
int main() {
    char source[] = "Hello, World!";
    char destination[50]; // Área de memória de destino

    // Exibindo a string de origem
    printf("String de Origem: %s\n", source);

    // Usando a função memmove para copiar dados da origem para o destino
    size_t n = ft_strlen(source);
    memmove(destination, source, n);

    // Exibindo a string de destino após memmove
    printf("String de Destino após memmove: %s\n", destination);

    // Verificando se a cópia foi bem-sucedida
    if (strcmp(source, destination) == 0) {
        printf("A cópia foi bem-sucedida.\n");
    } else {
        printf("A cópia NÃO foi bem-sucedida.\n");
    }

    return 0;
}*/
