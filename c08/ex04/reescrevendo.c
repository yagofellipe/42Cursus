/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reescrevendo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 08:42:24 by yfellipe          #+#    #+#             */
/*   Updated: 2023/10/11 08:42:26 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"


int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int	i;
	int	len;
	char	*aloc;
	
	len = ft_strlen(str);
	aloc = malloc(sizeof(char) * (len + 1));
	if (aloc == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		aloc[i] = str[i];
		i++;
	}
	aloc[i] = '\0';
	return (aloc);
}


struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int	i;
	t_stock_str	*array;
	
	array = malloc(sizeof(t_stock_str) * (ac + 1));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		i++;
	}
	array[i].size = 0;
	array[i].str = 0;
	array[i].copy = 0;
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











