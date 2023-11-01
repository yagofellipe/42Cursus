#include "ft_printf.h"

void	ft_p(void *ptr)
{
	unsigned long long	addr;
	int	i;
	int	digit;
	char	hex[16];

	addr = (unsigned long long) ptr;
	i = 0;
	if (addr == 0)
	{
		write(1, "0x0", 3);
		return ;
	}
	while (addr > 0)
	{
		digit = addr % 16;
		if (digit < 10)
			hex[i] = '0' + digit;
		else
			hex[i] = 'a' + digit - 10;
		i++;
		addr /= 16;
	}
	write(1, "0x", 2);
	while(i > 0)
	{
		i--
		write(1, &hex[i],1);
	}
}
