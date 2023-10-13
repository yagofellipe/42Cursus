/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 12:23:26 by yfellipe          #+#    #+#             */
/*   Updated: 2023/08/12 12:23:29 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
//#include<stdio.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*aloc;

	len = 0;
	while (src[len] != '\0')
		len++;
	aloc = (char *)malloc(sizeof(char) *(len + 1));
	if (aloc == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		aloc[i] = src[i];
		i++;
	}
	aloc[i] = '\0';
	return (aloc);
}
/*
int	main()
{
	char	*src;
	char	*aloc;
	
	src = "oi";
	aloc = ft_strdup(src);
	printf("%s", aloc);
}
*/
