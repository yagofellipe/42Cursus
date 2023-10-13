/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:52:15 by yfellipe          #+#    #+#             */
/*   Updated: 2023/07/27 15:02:28 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	count;

	count = 122;
	while (count >= 97)
	{
		write (1, &count, 1);
		count = count - 1;
	}
}
/*
int main(void){

	ft_print_reverse_alphabet();
	return 0;
}
*/
