#include "libft.h"

int	count_word(const char *s, char c)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			j++;
		i++;
	}
	return (j);
} 


char **ft_split(char const *s, char c)
{
	int	i;
	int	j;
	int	numword;
	char	**array;
	
	if (s == NULL)
		return (NULL);
	numword = count_word(s, c);
	array = (char **)ft_calloc(sizeof(char *), (numword + 1);
	if (!array)
		return (NULL);
	
	i = 0;
	j = 0;
	while (s[i] != '\0' && j < n_words)
	{
		while (s[i] == c && s[i])
			i++;
	
	}
}
