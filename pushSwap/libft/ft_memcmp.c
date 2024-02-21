/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:17:01 by yfellipe          #+#    #+#             */
/*   Updated: 2023/10/24 10:17:03 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*s1c;
	const unsigned char		*s2c;

	s1c = (const unsigned char *)s1;
	s2c = (const unsigned char *)s2;
	while (n && *s1c == *s2c)
	{
		s1c++;
		s2c++;
		--n;
	}
	if (n)
		return (*s1c - *s2c);
	else
		return (0);
}
