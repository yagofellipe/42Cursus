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

int	strlen(char *src)
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

void	zero(t_stock_str *tab, int ac)
{
	int	i;

	i = 0;
	while (i < ac)
	{
		free(tab[i].copy);
		i++;
	}
	free(tab);
	return (NULL);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	int					o;
	t_stock_str			*tab;

	tab = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].size = strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		if (tab[i].copy == NULL)
			zero(tab[i].copy, ac);
		i++;
	}
	tab[i].size = 0;
	tab[i].str = 0;
	tab[i].copy = 0;
	return (tab);
}

int main() {
  
    char *strings[] = {"Hello", "World", "OpenAI"};


    t_stock_str *result = ft_strs_to_tab(3, strings); 

    if (result != NULL) {
      
        for (int i = 0; i < 3; i++) {
            printf("String: %s\n", result[i].str);
            printf("Length: %d\n", result[i].size);
            printf("Copy: %s\n\n", result[i].copy);
        }

        zero(result, 3);

        free(result);
    } else {
        printf("Erro na alocação de memória.\n");
    }

    return 0;
}


