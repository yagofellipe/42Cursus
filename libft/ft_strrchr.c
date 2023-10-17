#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char	*last;
	
	last = NULL; // caso não seja encontrado
	if (!*s)
		return (0);
	while (*s != '\0')
	{
		if(*s == c) 
			last = (char *)s;
		s++;
	}
	if (c == '\0')
        	return (char *)s;
    
	return (last);
}
/*
int main() {
    const char *text = "Hello, World!";
    char target = 'o';

    char *result = ft_strrchr(text, target);

    if (result) {
        printf("Última ocorrência do caractere '%c' encontrada na posição: %ld\n", target, result - text);
    } else {
        printf("Caractere '%c' não encontrado na string.\n", target);
    }

    return 0;
}
*/
