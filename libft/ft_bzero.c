/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:07:48 by yfellipe          #+#    #+#             */
/*   Updated: 2023/10/24 10:07:51 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

/*
#include "libft.h"
#include <stdio.h>
#include <string.h>

int main() {
    char test_string[] = "Hello, World!";
    size_t n = strlen(test_string);

    // Exibindo a string original
    printf("Original String: %s\n", test_string);

    // Usando a função ft_bzero para preencher a string com zeros
    ft_bzero(test_string, n);

    // Exibindo a string após a chamada de ft_bzero
    printf("String após ft_bzero: %s\n", test_string);

    // Verificando se a string foi preenchida com zeros
    int zeroed = 1;
    for (size_t i = 0; i < n; i++) {
        if (test_string[i] != 0) {
            zeroed = 0;
            break;
        }
    }

    if (zeroed) {
        printf("A string foi preenchida com zeros com sucesso.\n");
    } else {
        printf("A string NÃO foi preenchida com zeros corretamente.\n");
    }

    return 0;
}*/
