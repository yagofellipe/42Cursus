/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:17:19 by yfellipe          #+#    #+#             */
/*   Updated: 2023/10/24 10:17:20 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
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
/*
#include "libft.h"
#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, World!";
    char destination[50]; // Área de memória de destino

    // Exibindo a string de origem
    printf("String de Origem: %s\n", source);

    // Usando a função memcpy para copiar dados da origem para o destino
    size_t n = strlen(source);
    memcpy(destination, source, n);

    // Exibindo a string de destino após a cópia
    printf("String de Destino após memcpy: %s\n", destination);

    // Verificando se a cópia foi bem-sucedida
    if (strcmp(source, destination) == 0) {
        printf("A cópia foi bem-sucedida.\n");
    } else {
        printf("A cópia NÃO foi bem-sucedida.\n");
    }

    return 0;
}*/
