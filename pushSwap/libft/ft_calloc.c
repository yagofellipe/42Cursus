/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:34:33 by yfellipe          #+#    #+#             */
/*   Updated: 2023/10/24 10:34:35 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	tam;
	size_t	i;
	void	*alloc;

	tam = nmemb * size;
	alloc = malloc(tam);
	if (alloc == NULL)
		return (NULL);
	i = 0;
	if (alloc != NULL)
	{
		while (i < tam)
		{
			((char *)alloc)[i] = 0;
			i++;
		}
	}
	return (alloc);
}
