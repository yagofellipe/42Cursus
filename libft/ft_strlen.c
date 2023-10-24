/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:33:58 by yfellipe          #+#    #+#             */
/*   Updated: 2023/10/23 13:34:05 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
#include "libft.h"
#include <stdio.h>

int main() {
    char test_string[] = "Hello, World!"; 

    size_t result = ft_strlen(test_string);


    printf("Comprimento calculado por ft_strlen: %zu\n", result);

    size_t real_length = 0;
    while (test_string[real_length] != '\0') {
        real_length++;
    }

    if (result == real_length) {
        printf("O valor retornado corresponde ao 
        comprimento real da string.\n");
    } else {
        printf("O valor retornado NÃO corresponde 
        ao comprimento real da string.\n");
    }

    return 0;
}
*/
