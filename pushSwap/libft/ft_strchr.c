/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:53:26 by yfellipe          #+#    #+#             */
/*   Updated: 2023/10/23 13:53:29 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*a;

	if (c > 127)
		c %= 256;
	a = (unsigned char *) s;
	while (*a)
	{
		if (*a == (unsigned char)c)
			return ((char *)(a));
		a++;
	}
	if (*a == c)
		return ((char *)(a));
	return (NULL);
}
