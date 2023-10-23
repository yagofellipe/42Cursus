#include "libft.h"

size_t	len(const char *s)
{
	int	tam;
	
	tam = 0;
	while (s[tam] != '\0')
		tam++;
	return (tam);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	tam;
	int	i;
	char	*end;

	tam = len(s);
	end = (char *)malloc(sizeof(char) * (tam + 1));
	if (end == NULL)
		return (NULL);
	i = 0;
	while (i < tam)
	{
		end[i] = (*f)(i, s[i]);
		i++;
	}
	end[i] = '\0';
	return (end);
}

/*
char char_to_upper(unsigned int index, char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 'a' + 'A';
    }
    return c;
}

int main() {
    const char *inputString = "Exemplo de String";
    char *resultString;

    // Teste da função ft_strmapi com char_to_upper
    resultString = ft_strmapi(inputString, char_to_upper);

    if (resultString) {
        printf("String original: %s\n", inputString);
        printf("String mapeada: %s\n", resultString);
        free(resultString); // Lembre-se de liberar a memória alocada.
    } else {
        printf("Erro na alocação de memória.\n");
    }

    return 0;
}
*/
