#ifndef LIBFT_L
# define LIBFT_H
# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_list
{
	void	*content;
	struct s_list	*next;
}	t_list;

size_t	ft_strlen(const char *str);

#endif
