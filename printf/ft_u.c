#include "ft_printf.h"

void	ft_u(unsigned int args)
{
	int	i;
	char	buffer[32];
	
	i = 0;
	if (args == 0)
	{
		write(1, "0", 1);
		return ;
	}
	while (num > 0)
	{
		buffer[i++] = '0' + (num % 10);
		num /= 10;
	}
	while (i > 0)
		write(1, &buffer[i--], 1);
}
