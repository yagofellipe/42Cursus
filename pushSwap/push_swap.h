#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}					t_list;

void	sort_stack(t_list **stack_a, t_list **stack_b);
void	init_stack(t_list **stack, int argc, char **argv);
void	free_stack(t_list **stack);
void	check_args(char **argv, int argc);
void	set_index(t_list **stack);
void	sort_big(t_list **stack_a, t_list **stack_b);
void	sort_small(t_list **stack_a, t_list **stack_b);
void	ft_error(char *msg, char **args, int argc);
void	ft_free(void **vec);
int		get_max_index(t_list **stack);
int		get_min_index(t_list **stack);
int		is_sorted(t_list **stack);
int		invalid_input(char *str);
size_t	count_nums(char const *s, char c);

int		swap_stack(t_list **stack);
int		push_stack(t_list **stack_dst, t_list **stack_src);
int		rotate_stack(t_list **stack);
int		rev_rotate_stack(t_list **stack);

int		sa(t_list **stack_a);
int		sb(t_list **stack_b);
int		ss(t_list **stack_a, t_list **stack_b);
int		pa(t_list **stack_a, t_list **stack_b);
int		pb(t_list **stack_b, t_list **stack_a);
int		ra(t_list **stack_a);
int		rb(t_list **stack_b);
int		rr(t_list **stack_a, t_list **stack_b);
int		rra(t_list **stack_a);
int		rrb(t_list **stack_b);
int		rrr(t_list **stack_a, t_list **stack_b);

long	ft_atol(const char *nptr);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int value);

#endif