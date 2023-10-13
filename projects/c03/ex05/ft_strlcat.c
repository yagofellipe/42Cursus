/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 20:44:33 by yfellipe          #+#    #+#             */
/*   Updated: 2023/08/08 10:26:57 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include<unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	sizedest;
	unsigned int	sizesrc;

	sizedest = 0;
	while (dest[sizedest] != '\0')
		sizedest++;
	i = 0;
	sizesrc = 0;
	while (src[sizesrc] != '\0')
		sizesrc++;
	while ((src[i] != '\0') && (sizedest < size))
	{
		dest[sizedest] = src[i];
		i++;
		sizedest++;
	}
	dest[sizedest] = '\0';
	return (sizedest + sizesrc);
}
/*
int	main(void)
{
	char	de[] = "123";
	char	fi[] = "abc";
	
	printf("%i",ft_strlcat(de, fi, 6));


	
	
}
*/
