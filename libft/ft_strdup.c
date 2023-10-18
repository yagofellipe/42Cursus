#include "libft.h"

char	*ft_strdup(const char *s)
{
	int	i;
	int	len;
	char	*new;
	
	if (s == NULL)
		return (NULL);
	len = 0;
	i = 0;
	while (s[len] != '\0')
		len++;
		
	new = malloc(sizeof(char)*(len + 1));
	if (new == NULL)
		return (NULL);
	
	while (s[i] != '\0')
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

int main() {
    const char *original = "Hello, World!";
    char *copia = ft_strdup(original);

    if (copia != NULL) {
        printf("String original: %s\n", original);
        printf("Cópia da string: %s\n", copia);
        free(copia); // Lembre-se de liberar a memória alocada pela my_strdup.
    } else {
        printf("Falha na alocação de memória.\n");
    }

    return 0;
}
