#include "libft.h"

size_t	countWords(const char *s, char c)
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
		} else
			in_word = 0;
		index++;		
	}
	return (n_words);
}

char *ft_strncpy(char *dest, const char *from, size_t t)
{
	char	*dest_start;
	
	dest_start = dest;
	while (t > 0 && (*from != '\0'))
	{
		*dest_start++ = *from++;
		t--;
	}
	while (t > 0)
	{
		*dest_start = '\0';
		t--;
	}
		
	return (dest_start);
}  

char *ft_strndup(const char *str, size_t n)
{
    char *dup = (char *)malloc(n + 1);
    if (dup != NULL) 
    {
        ft_strncpy(dup, str, n);
        dup[n] = '\0';
    }
    return dup;
}

char **ft_split(char const *s, char c)
{
	int	i;
	int	word;
	int	num_words;
	int	word_len;
	char	**ptr;
	
	if (!s)
		return NULL;
    	num_words = countWords(s, c);
    	ptr = (char **)malloc((num_words + 1) * sizeof(char *));
    	if (ptr == NULL)
        	return NULL;
    	i = 0;
    	word = 0;    
    	while (s[i] && word < num_words)
    	{
        	while (s[i] == c && s[i])
            		i++;
        	if (s[i] != c)
        	{
            		word_len = 0;
            		while (s[i + word_len] && s[i + word_len] != c)
                		word_len++;
            		ptr[word] = ft_strndup(&s[i], word_len);
            		if (!ptr[word])
                		return NULL;            
            		word++;
            		i += word_len;
        	}
    	}
    	ptr[word] = NULL;
    	return (ptr);
}

#include <stdlib.h>
int main() 
{
    const char *input = "Esta é uma string que você deseja dividir.";
    char delimiter = ' ';

    char **tokens = ft_split(input, delimiter);

    if (tokens) {
        int i = 0;
        while (tokens[i]) {
            printf("Token %d: %s\n", i, tokens[i]);
            free(tokens[i]);
            i++;
        }

 
    } else {
        printf("Erro na função ft_split");
    }

    return 0;
}







