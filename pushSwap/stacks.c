<<<<<<< HEAD


#include "../includes/push_swap.h"

static t_list	**setup_stack(void)
{
	t_list	**new_stack;

	new_stack = (t_list **)malloc(sizeof(t_list));
	if (!new_stack)
		return (NULL);
	*new_stack = NULL;
	return (new_stack);
}

static void	free_stacks(t_list **stack_a, t_list **stack_b)
{
	free_stack(stack_a);
	free_stack(stack_b);
}

static void	check_sorted(t_list **stack_a, t_list **stack_b)
{
	if (is_sorted(stack_a))
	{
		free_stack(stack_a);
		free_stack(stack_b);
		exit (-1);
	}
}

int	is_sorted(t_list **stack)
{
	t_list	*head;

	head = *stack;
	while (head && head->next)
	{
		if (head->value > head->next->value)
			return (0);
		head = head->next;
	}
	return (1);
}

void	free_stack(t_list **stack)
{
	t_list	*head;
	t_list	*tmp;

	head = *stack;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(stack);
}


void	init_stack(t_list **stack, int argc, char **argv)
{
	t_list	*new;
	char	**args;
	int		i;

	i = 0;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
=======
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
>>>>>>> 30b92e65cf423ff28fa7a56888142c44844302e3
	else
	{
		i = 1;
		args = argv;
	}
	while (args[i])
	{
<<<<<<< HEAD
		new = ft_lstnew(ft_atoi(args[i]));
		ft_lstadd_back(stack, new);
=======
		new_node = ft_lstnew(ft_atoi(args[i]));
		ft_lstadd_back(stack, new_node);
>>>>>>> 30b92e65cf423ff28fa7a56888142c44844302e3
		i++;
	}
	set_index(stack);
	if (argc == 2)
<<<<<<< HEAD
		ft_free((void **)args);
}

void	sort_stack(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) <= 5)
		sort_small(stack_a, stack_b);
	else
		sort_big(stack_a, stack_b);
}
=======
		ft_free((void **) args);
}
>>>>>>> 30b92e65cf423ff28fa7a56888142c44844302e3
