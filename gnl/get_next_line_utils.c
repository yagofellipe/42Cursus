/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <yfellipe@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:23:55 by yfellipe          #+#    #+#             */
/*   Updated: 2023/11/09 11:23:57 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	size_t		len;
	char		*new;

	len = ft_strlen(s) + 1;
	if (s == NULL)
		return (NULL);
	new = (char *)malloc(sizeof(char) * len);
	if (new == NULL)
		return (NULL);
	return ((char *)ft_memcpy(new, s, len));
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}

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

