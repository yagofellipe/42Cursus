/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:48:25 by yfellipe          #+#    #+#             */
/*   Updated: 2023/10/10 14:46:23 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_str_length(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*aloc;

	len = ft_str_length(src);
	aloc = (char *)malloc (sizeof(char) * (len + 1));
	if (aloc == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		aloc[i] = src[i];
		i++;
	}
	aloc[i] = '\0';
	return (aloc);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			index;
	struct s_stock_str	*array;
	
	array = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (array == NULL)
		return (NULL);
	index = 0;
	while (index < ac)
	{
		array[index].size = ft_str_length(av[index]);
		array[index].str = av[index];
		array[index].copy = ft_strdup(av[index]);
		index++;
	}
	array[index].str = 0;
	array[index].copy = 0;
	return (array);
}

int main() {
  
    char *strings[] = {"testando", "oi"};


    t_stock_str *result = ft_strs_to_tab(2, strings); 

    if (result != NULL) {
      
        for (int i = 0; i < 2; i++) {
            printf("String: %s\n", result[i].str);
            printf("Length: %d\n", result[i].size);
            printf("Copy: %s\n\n", result[i].copy);
        }

        free(result);
    } else {
        printf("Erro na alocação de memória.\n");
    }

    return 0;
}


