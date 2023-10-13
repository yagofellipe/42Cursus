/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:13:35 by yfellipe          #+#    #+#             */
/*   Updated: 2023/08/12 11:34:42 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	main(int argc, char **argv)
{
	int	pos;
	int	i;	

	if (argc > 1)
	{
		pos = 1;
		while (pos < argc)
		{
			i = 0;
			while (argv[pos][i] != '\0')
			{
				write(1, &argv[pos][i], 1);
				i++;
			}
			write(1, "\n", 1);
			pos++;
		}
	}
}
