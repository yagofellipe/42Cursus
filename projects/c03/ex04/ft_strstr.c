/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 10:57:43 by yfellipe          #+#    #+#             */
/*   Updated: 2023/08/09 08:31:36 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	find_size;

	i = 0;
	j = 0;
	find_size = 0;
	while (to_find[find_size] != '\0')
		find_size++;
	if (find_size == 0)
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j])
		{
			if (j == find_size - 1)
				return (str + i);
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}
/*
int	main()
{
	char	s1[100] = "geg fgrg goigr ggr";
	char	s2[10] = "oi";

	
	printf("%s", ft_strstr(s1, s2));
}
*/
