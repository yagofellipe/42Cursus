/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:35:16 by yfellipe          #+#    #+#             */
/*   Updated: 2023/10/24 10:35:18 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_len(int n)
{
	int	tam;

	tam = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		tam++;
		n = -n;
	}
	while (n != 0)
	{
		tam++;
		n /= 10;
	}
	return (tam);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_itoa(int n)
{
	char				*str;
	long int			len;

	len = ft_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len--] = '\0';
	if (n == -2147483648)
		ft_strcpy(str, "-2147483648");
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		n = n * -1;
		str[0] = '-';
	}
	while (n > 0)
	{
		str[len--] = 48 + (n % 10);
		n = n / 10;
	}
	return (str);
}
/*
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int	main()
{
	int	num;
	char	*novo;
	
	num = -16432131;
	novo = ft_itoa(num);
	
	write(1, novo, ft_len(num));

	return 0;
}*/
