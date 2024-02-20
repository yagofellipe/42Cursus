#include "../includes/push_swap.h"

int swap_stack(t_list **stack)
{
	t_list *head;
	t_list *next;
	int temp_Index;
	int temp_Value;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	next = head->next;
	temp_Index = head->index;
	temp_Value = head->value;
	head->index = next->index;
	head->value = next->value;
	next->index = temp_Index;
	next->value = temp_Value;
	return (0);
}

int sa(t_list **stack_a)
{
	if (swap_stack(stack_a) == -1)
		return (-1);
	ft_putstr_fd("sa", 1);
	return (0);
}

int sb(t_list **stack_b)
{
	if (swap_stack(stack_b) == -1)
		return (-1);
	ft_putstr_fd("sb", 1);
	return (0);
}

int ss(t_list **stack_a, t_list **stack_b)
{
	if (swap_stack(stack_a) == -1 || swap_stack(stack_b) == -1)
		return (-1);
	ft_putstr_fd("ss", 1);
	return (0);
}