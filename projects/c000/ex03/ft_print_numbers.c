/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 14:13:15 by yfellipe          #+#    #+#             */
/*   Updated: 2023/07/27 15:04:47 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_numbers(void)
{
	int	count;

	count = 48;
	while (count <= 57)
	{
		write(1, &count, 1);
		count = count + 1;
	}
}
/*
int main(void){
	ft_print_numbers();
	return 0;
}
*/
