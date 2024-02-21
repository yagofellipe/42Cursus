/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:08:25 by yfellipe          #+#    #+#             */
/*   Updated: 2023/10/24 10:08:27 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*sun;

	i = 0;
	sun = (const unsigned char *)s;
	while (i < n)
	{
		if (sun[i] == (unsigned char)c)
			return ((void *)(sun + i));
		i++;
	}
	return (NULL);
}
