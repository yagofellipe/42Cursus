/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:32:47 by yfellipe          #+#    #+#             */
/*   Updated: 2023/10/23 13:32:54 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (s == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/*
#include <stdio.h>
void print_index_and_char(unsigned int index, char *character) {
    printf("Index: %u, Character: %c\n", index, *character);
}

int main() {
    char test_string[] = "Hello, World!";
    
    printf("Original String: %s\n", test_string);

    ft_striteri(test_string, print_index_and_char);

    return 0;
}
*/
