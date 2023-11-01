#include "ft_printf.h"

void	ft_s(char *args)
{
	if (!args)
		ft_putstr_fd("", 1);
	while(args)
		args++;
	ft_putstr_fd(args, 1);
	return (0);

}
