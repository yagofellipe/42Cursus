/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:24:51 by yfellipe          #+#    #+#             */
/*   Updated: 2023/10/23 13:24:54 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	c;

	i = 0;
	if (!big && !len)
		return (0);
	if (little[0] == '\0' || little == big)
		return ((char *)big);
	while ((big[i] != '\0'))
	{
		c = 0;
		while ((big[i + c] == little[c]) && (i + c) < len)
		{
			if (big[i + c] == '\0' && little[c] == '\0')
				return ((char *)&big[i]);
			c++;
		}
		if (little[c] == '\0')
			return ((char *)(&big[i]));
		i++;
	}
	return (0);
}
