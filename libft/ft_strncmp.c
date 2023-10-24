/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:56:17 by yfellipe          #+#    #+#             */
/*   Updated: 2023/10/23 13:56:26 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
int main() {
    const char *str1 = "Hello, World!";
    const char *str2 = "Hello, Mundo!";
    size_t n = 10;

    int result = ft_strncmp(str1, str2, n);

    if (result < 0) {
        printf("str1 é menor do que str2.\n");
    } else if (result > 0) {
        printf("str1 é maior do que str2.\n");
    } else {
        printf("str1 é igual a str2.\n");
    }

    return 0;
}
*/
