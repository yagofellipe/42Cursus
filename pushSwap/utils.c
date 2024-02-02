/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 09:02:11 by yfellipe          #+#    #+#             */
/*   Updated: 2024/02/01 09:02:13 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


size_t	count_nums(char	const *s, char c)
{
	size_t	words;
	
	if(!s)
		return(0);
	words = 0;
	while(*s)
	{
		while(*s == c)
			s++;
		if(*s)
			words++;
		while(*s && *s != c)
			s++;
	}
	return (words);
}

int	invalid_end(char *str)
{
	int	end;
	
	end = ft_strlen(str) - 1;
	
	if (str[end] == ' ' && (count_nums(str, ' ') > 1))
		return (1);
	return (0);
}
