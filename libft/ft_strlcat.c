/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:59:19 by yfellipe          #+#    #+#             */
/*   Updated: 2023/10/23 13:59:22 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s;
	size_t	d;
	size_t	sizedest;
	size_t	sizesrc;

	sizesrc = ft_strlen(src);
	if (dst == NULL && size == 0)
		return (sizesrc);
	d = ft_strlen(dst);
	sizedest = d;
	if (size <= sizedest)
		return (size + sizesrc);
	s = 0;
	while (src[s] && d + 1 < size)
	{
		dst[d] = src[s];
		s++;
		d++;
	}
	dst[d] = 0;
	return (sizedest + sizesrc);
}
/*
int main() {
    char destination[20] = "Hello, ";
    const char source[] = "world!";
    size_t max_length = 20;

    size_t result = ft_strlcat(destination, source, max_length);

    printf("Resultado: %s\n", destination);
    printf("Comprimento total: %zu\n", result);

    return 0;
}

*/
