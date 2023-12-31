/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:24:31 by yfellipe          #+#    #+#             */
/*   Updated: 2023/10/23 13:24:34 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*temp;

	temp = (char *)s;
	i = 0;
	while (temp[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (temp[i] == (char)c)
			return (&temp[i]);
		i--;
	}
	return (NULL);
}
