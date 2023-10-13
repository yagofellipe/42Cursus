/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:47:39 by yfellipe          #+#    #+#             */
/*   Updated: 2023/08/09 17:05:15 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	pos;

	if (argc > 1)
	{
		pos = argc - 1;
		while (pos >= 1)
		{
			i = 0;
			while (argv[pos][i] != '\0')
			{
				write (1, &argv[pos][i], 1);
				i++;
			}
			write(1, "\n", 1);
			pos--;
		}
	}
}
