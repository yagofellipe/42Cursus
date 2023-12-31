/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:33:12 by yfellipe          #+#    #+#             */
/*   Updated: 2023/10/23 13:33:15 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int			lens1;
	int			lens2;
	char		*join;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	join = malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (join == NULL)
		return (NULL);
	ft_strlcpy(join, s1, lens1 + 1);
	ft_strlcat(join, s2, lens1 + lens2 + 1);
	return (join);
}
