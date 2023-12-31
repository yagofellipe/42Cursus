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

static size_t	countwords(const char *s, char c)
{
	size_t	index;
	size_t	n_words;
	size_t	in_word;

	index = 0;
	n_words = 0;
	in_word = 0;
	while (s[index])
	{
		if (s[index] != c)
		{
			if (in_word == 0)
			{
				in_word = 1;
				n_words++;
			}
		}
		else
			in_word = 0;
		index++;
	}
	return (n_words);
}

static void	ft_allocate(char **tab, char const *s, char sep)
{
	char		**tab_p;
	char const	*tmp;

	tmp = s;
	tab_p = tab;
	while (*tmp)
	{
		while (*s == sep)
			++s;
		tmp = s;
		while (*tmp && *tmp != sep)
			++tmp;
		if (*tmp == sep || tmp > s)
		{
			*tab_p = ft_substr(s, 0, tmp - s);
			s = tmp;
			++tab_p;
		}
	}
	*tab_p = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		num_words;
	char	**ptr;

	if (!s)
		return (NULL);
	num_words = countwords(s, c);
	ptr = (char **)malloc((num_words + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	ft_allocate(ptr, s, c);
	return (ptr);
}
