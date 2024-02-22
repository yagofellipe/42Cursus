/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:35:06 by yfellipe          #+#    #+#             */
/*   Updated: 2023/10/24 10:35:07 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_w(char const *s, char c)
{
	size_t	words;

	if (!s)
		return (0);
	words = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			words++;
		while (*s != c && *s)
			s++;
	}
	return (words);
}

static void	*ft_free(char **mat)
{
	int	i;

	i = 0;
	while (i > 0)
		free(mat[i--]);
	free(mat);
	return (NULL);
}

static void	alloc_w(char const *s, char c, char **arr)
{
	size_t	letters;
	int		i;

	i = 0;
	if (s)
	{
		letters = 0;
		while (*s)
		{
			while (*s == c)
				s++;
			while (*s != c && *s)
			{
				letters++;
				s++;
			}
			arr[i] = ft_substr(s - letters, 0, letters);
			i++;
			letters = 0;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_w(s, c);
	arr = (char **) malloc (sizeof(char *) * (words + 1));
	if (!arr)
		return (ft_free(arr));
	alloc_w(s, c, arr);
	arr[words] = 0;
	return (arr);
}
