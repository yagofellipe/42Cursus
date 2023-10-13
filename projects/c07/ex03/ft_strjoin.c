/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 09:33:10 by yfellipe          #+#    #+#             */
/*   Updated: 2023/08/14 19:52:45 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		c;
	char	*final;

	if (size <= 0)
		return (NULL);
	final = malloc(sizeof(strs));
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			final[c++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
			final[c++] = sep[j++];
		i++;
	}
	final[c] = '\0';
	return (final);
}

int	main(void)
{
	char	*tab[2];
	tab[0] = "Hello";
	tab[1] = "World";
	printf("%s", ft_strjoin(2, tab, " "));
	return (0);
}

