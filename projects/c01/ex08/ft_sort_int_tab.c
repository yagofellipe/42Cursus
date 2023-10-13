/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 11:20:12 by yfellipe          #+#    #+#             */
/*   Updated: 2023/08/03 14:03:47 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *arr, int size)
{
	int	temp;
	int	i;
	int	j;
	int	ver;

	i = 0;
	ver = 1;
	while (ver)
	{
		ver = 0;
		j = 0;
		while (j < size - i - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				ver = 1;
			}
			j++;
		}
		i++;
	}
}
