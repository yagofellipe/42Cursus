/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 09:26:02 by yfellipe          #+#    #+#             */
/*   Updated: 2024/02/08 09:26:04 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"


void	init_stacks(t_list **stack, int argc, char **argv)
{
	t_list	*new_node;
	char	**args;
	int	i;
	
	i = 0;
	if (argc == 2)
		args = ft_split(argv[i], ' ');
	else
	{
		i = 1;
		args = argv;
	}
	while (args[i])
	{
		new_node = ft_lstnew(ft_atoi(args[i]));
		ft_lstadd_back(stack, new_node);
		i++;
	}
	set_index(stack);
	if (argc == 2)
		ft_free((void **) args);
}
