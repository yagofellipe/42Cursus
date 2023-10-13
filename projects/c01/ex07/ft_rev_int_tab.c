/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 09:33:53 by yfellipe          #+#    #+#             */
/*   Updated: 2023/08/03 13:58:27 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	f;
	int	a;

	i = 0;
	f = size -1;
	while (i < f)
	{
		a = tab[i];
		tab[i] = tab[f];
		tab[f] = a;
		i++;
		f--;
	}
}
