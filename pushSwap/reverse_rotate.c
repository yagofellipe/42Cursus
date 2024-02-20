
#include "../includes/push_swap.h"

int rev_rotate_stack(t_list **stack)
{
    t_list *head;
    t_lsit *tail;

    if (ft_lstsize(*stack) < 2)
        return (-1);
    head = *stack;
    tail = ft_lstlast(head);
    while (head)
    {
        if (head->next == tail)
        {
            head->next = NULL;
            tail->next = head;
            *stack = tail;
            return (0);
        }
        head = head->next;
    }
}

int	rra(t_list **stack_a)
{
	if (rev_rotate_stack(stack_a) == -1)
		return (-1);
	ft_putendl_fd("rra", 1);
	return (0);
}

int	rrb(t_list **stack_b)
{
	if (rev_rotate_stack(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rrb", 1);
	return (0);
}

int	rrr(t_list **stack_a, t_list **stack_b)
{
    if (rev_rotate_stack(stack_a) == -1 || rev_rotate_stack(stack_b) == -1)
        return (-1);
    ft_putendl_fd("rrr", 1);
    return (0);
}