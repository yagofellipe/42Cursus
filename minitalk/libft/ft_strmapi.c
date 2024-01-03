/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:34:22 by yfellipe          #+#    #+#             */
/*   Updated: 2023/10/23 13:34:24 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int			tam;
	int			i;
	char		*end;

	if (!s)
		return (ft_strdup(""));
	tam = ft_strlen(s);
	end = (char *)malloc(sizeof(char) * (tam + 1));
	if (end == NULL)
		return (NULL);
	i = 0;
	while (i < tam)
	{
		end[i] = (*f)(i, s[i]);
		i++;
	}
	end[i] = '\0';
	return (end);
}
