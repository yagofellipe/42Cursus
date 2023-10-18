#include "libft.h"


void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	tam;
	size_t	i;
	void	*alloc;
	tam = nmemb * size;
	alloc = malloc(tam);
	if (alloc == NULL)
		return NULL;
	i = 0;
	if (alloc != NULL)
	{
		while (i < tam)
		{
			((char *)alloc)[i] = 0;
			i++;
		}
	}
	
	return (alloc);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main() {
    int *array = (int *)ft_calloc(10, sizeof(int));

    if (array == NULL) {
        printf("Falha na alocação de memória.\n");
        return 1;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]); // Todos os elementos devem ser inicializados como 0.
    }

    free(array); // Lembre-se de liberar a memória quando terminar de usá-la.
    
    return 0;
}
*/
