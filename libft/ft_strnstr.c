#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;
	size_t	j;
	
	little_len = 0;
	while (little[little_len] != '\0')
		little_len++;
	if (little_len == 0)
		return (char *)big;
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j])
		{
			if (j == little_len - 1) // estiver no final
				return (char *)(big + i);
			j++;
		}
		i++;
		
	}
	return (NULL);
}

int main() 
{
    const char *haystack = "Hello, World!";
    const char *needle = "World";
    size_t max_length = ft_strlen(haystack); // Usar o comprimento real da string

    char *result = ft_strnstr(haystack, needle, max_length);

    if (result) {
        printf("Substring encontrada: %s\n", result);
    } else {
        printf("Substring não encontrada.\n");
    }

    return 0;
}
