#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	if (!*s)
		return (0);
	while (*s != '\0')
	{
		if(*s == c) // int c permite encontrar na tabela ascii
			return (char *)s;
		
		s++;
	}
	if (c == '\0')
        	return (char *)s;
	return (0);
}
/*
int main() {
    const char *text = "Hello, World!";
    char target = 'o';

    char *result = ft_strchr(text, target);

    if (result) {
        printf("Caractere '%c' encontrado na posição: %ld\n", target, result - text);
    } else {
        printf("Caractere '%c' não encontrado na string.\n", target);
    }

    return 0;
}
*/
