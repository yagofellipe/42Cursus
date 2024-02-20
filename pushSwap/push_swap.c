/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 08:54:28 by yfellipe          #+#    #+#             */
/*   Updated: 2024/02/01 08:54:38 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"


int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;

	if ((argc < 2) || (argc == 2 && (count_nums(argv[1], ' ') == 1)))
		return (-1);
	check_args(argv, argc);
	stack_a = setup_stack();  // malloca a stack
	stack_b = setup_stack();  // malloca a stack
	init_stack(stack_a, argc, argv);
	check_sorted(stack_a, stack_b);
	sort_stack(stack_a, stack_b);
	free_stacks(stack_a, stack_b);
	return (0);
}
