/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 13:10:23 by yfellipe          #+#    #+#             */
/*   Updated: 2023/08/13 13:10:25 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	if (min >= max)
		return (NULL);
	array = (int *)malloc(sizeof(int) *(max - min));
	i = 0;
	if (array == (NULL))
		return (NULL);
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
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
	max = 500;
	j = max - min;
	foi = ft_range(min, max);
	i = 0;
	while (i < j)
	{
		printf("%d", foi[i]);
		i++;
	}
}
*/
