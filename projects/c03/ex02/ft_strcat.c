/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 09:05:11 by yfellipe          #+#    #+#             */
/*   Updated: 2023/08/09 08:28:36 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	sizedest;

	sizedest = 0;
	while (dest[sizedest] != '\0')
		sizedest++;
	i = 0;
	while (src[i] != '\0')
	{
		dest[sizedest] = src[i];
		i++;
		sizedest++;
	}
	dest[sizedest] = '\0';
	return (dest);
}
