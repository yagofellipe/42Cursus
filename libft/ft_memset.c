/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:08:35 by yfellipe          #+#    #+#             */
/*   Updated: 2023/10/24 10:08:36 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}
/*
#include "libft.h"
#include <stdio.h>
#include <string.h>

int main() {
    char test_string[50]; // Área de memória a ser preenchida
    int fill_value = 'A'; // Valor a ser usado para preencher a área
    size_t n = 10; // Tamanho da área a ser preenchida

    // Usando a função ft_memset para preencher a área de memória
    ft_memset(test_string, fill_value, n);

    // Exibindo a área de memória após ft_memset
    printf("Área de memória após ft_memset: %s\n", test_string);

    // Verificando se a área de memória foi preenchida corretamente
    int filled_correctly = 1;
    for (size_t i = 0; i < n; i++) {
        if (test_string[i] != fill_value) {
            filled_correctly = 0;
            break;
        }
    }

    if (filled_correctly) {
        printf("A área de memória foi preenchida corretamente.\n");
    } else {
        printf("A área de memória NÃO foi preenchida corretamente.\n");
    }

    return 0;
}*/
