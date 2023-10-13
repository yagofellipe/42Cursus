/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 14:16:30 by yfellipe          #+#    #+#             */
/*   Updated: 2023/08/13 14:16:33 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = malloc(sizeof(int) *(max - min));
	i = 0;
	if (array == (NULL))
	{
		*range = NULL;
		return (-1);
	}	
	*range = array;
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (i);
}
/*
int	main(void)
{
	int	*foi;
	int	min;
	int	max;
	int	j;
	int	i;
	
	min = 0;
	max = 50;
	j = ft_ultimate_range(&foi, min, max);
	i = 0;
	while (i < j)
	{
		printf("%d", foi[i]);
		i++;
	}
}
*/
