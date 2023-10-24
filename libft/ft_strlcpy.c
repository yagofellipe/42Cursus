/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:33:37 by yfellipe          #+#    #+#             */
/*   Updated: 2023/10/23 13:33:46 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}
/*
#include "libft.h"
#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, World!";
    char destination[20]; // Área de memória de destino
    size_t size = sizeof(destination);

   
    size_t result = ft_strlcpy(destination, source, size);


    printf("String de Destino após ft_strlcpy: %s\n", destination);

    if (strcmp(source, destination) == 0) {
        printf("A cópia ocorreu corretamente.\n");
    } else {
        printf("A cópia NÃO ocorreu corretamente.\n");
    }


    size_t source_length = strlen(source);
    if (result == source_length) {
        printf("O valor retornado corresponde ao tamanho 
        da string de origem.\n");
    } else {
        printf("O valor retornado NÃO corresponde ao
         tamanho da string de origem.\n");
    }

    return 0;
}
*/
