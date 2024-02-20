<<<<<<< HEAD

=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 09:24:34 by yfellipe          #+#    #+#             */
/*   Updated: 2024/02/08 09:24:38 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
>>>>>>> 30b92e65cf423ff28fa7a56888142c44844302e3

#include "../includes/push_swap.h"

static int	has_duplicate(int num, char **argv, int i)
{
	i++;
	while (argv[i])
	{
		if (ft_atol(argv[i]) == num)
			return (1);
		i++;
	}
	return (0);
}

static int	has_num(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '-')
		i++;
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

static	void	check(long tmp, char **args, int argc, int i)
{
	if (has_duplicate(tmp, args, i))
		ft_error("Error\n", args, argc);
	if (!has_num(args[i]))
		ft_error("Error\n", args, argc);
	if (tmp < -2147483648 || tmp > 2147483647)
		ft_error("Error\n", args, argc);
}

void	check_args(char **argv, int argc)
{
	int		i;
	long	tmp;
	char	**args;

	i = 0;
	if (argc == 2 && invalid_input(argv[1]))
	{
		write(2, "Error\n", 6);
		exit(0);
	}
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
<<<<<<< HEAD
		args = argv;
		i = 1;
=======
		i = 1;
		args = argv;
>>>>>>> 30b92e65cf423ff28fa7a56888142c44844302e3
	}
	while (args[i])
	{
		tmp = ft_atol(args[i]);
		check(tmp, args, argc, i);
		i++;
	}
	if (argc == 2)
<<<<<<< HEAD
		ft_free((void **)args); // tem que dar free  por causa do malloc da split
}
=======
		ft_free((void **)args);
}
>>>>>>> 30b92e65cf423ff28fa7a56888142c44844302e3
